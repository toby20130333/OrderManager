#include "widget.h"
#include <QApplication>

Widget::Widget(QWidget *parent)
    : QWidget(parent),m_stack(NULL),m_ChooseWid(NULL),m_WelCome(NULL),
      m_install(NULL),m_installed(NULL),m_cancel(NULL)
{
    this->resize(486,386);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    this->setAttribute(Qt::WA_TranslucentBackground,true);
    setStyleSheet ("background-color:transparent");
    setStyleSheet ("venus--TitleBar {background-color:rgb(0,0,0);color: rgb(255,255,255);}");
    m_stack = new QStackedWidget(this);
    m_WelCome = new WelComeWidget(0);
    m_stack->resize(m_WelCome->width(),m_WelCome->height());
    m_stack->addWidget(m_WelCome);
    m_stack->setCurrentWidget(m_WelCome);
    m_stack->show();
    m_ShowInstall = new QTimer(this);
    connect(m_ShowInstall, SIGNAL(timeout()), this, SLOT(slotShowChooseWid()));
    m_ShowInstall->start(2000);
    QString str = getWinrarPath();
    qDebug()<<"getWinrarPath: "<<str;
    //userWinrar("yb.exe",str);
}

Widget::~Widget()
{
    if(m_ChooseWid != NULL){
        m_ChooseWid->deleteLater();
    }
    if(m_WelCome != NULL){
        m_WelCome->deleteLater();
    }
    if(m_install != NULL){
        m_install->deleteLater();
    }
    if(m_stack != NULL){
        m_stack->deleteLater();
    }
}
QString Widget::loadFontFamilyFromTTF()
{
    static QString font;
    static bool loaded = false;
    if(!loaded)
    {
        loaded = true;
        int loadedFontID = QFontDatabase::addApplicationFont(":/jinglei.FON");
        QStringList loadedFontFamilies = QFontDatabase::applicationFontFamilies(loadedFontID);
        if(!loadedFontFamilies.empty())
            font = loadedFontFamilies.at(0);
    }
    return font;
}
/*
    函数功能：对指定文件在指定的目录下创建其快捷方式
    函数参数：
    lpszFileName    指定文件，为NULL表示当前进程的EXE文件。
    lpszLnkFileDir  指定目录，不能为NULL。
    lpszLnkFileName 快捷方式名称，为NULL表示EXE文件名。
    wHotkey         为0表示不设置快捷键
    pszDescription  备注
    iShowCmd        运行方式，默认为常规窗口
    */
bool Widget::CreateFileShortcut(LPCSTR lpszFileName, LPCSTR lpszLnkFileDir,
                                LPCSTR lpszLnkFileName, LPCSTR lpszWorkDir,
                                WORD wHotkey, LPCTSTR lpszDescription,
                                int iShowCmd)
{
    //    if (lpszLnkFileDir == NULL)
    //        return FALSE;

    //    HRESULT hr;
    //    IShellLink     *pLink;  //IShellLink对象指针
    //    IPersistFile   *ppf; //IPersisFil对象指针

    //    //创建IShellLink对象
    //    hr = CoCreateInstance(CLSID_ShellLink, NULL, CLSCTX_INPROC_SERVER, IID_IShellLink, (void**)&pLink);
    //    if (FAILED(hr))
    //        return FALSE;

    //    //从IShellLink对象中获取IPersistFile接口
    //    hr = pLink->QueryInterface(IID_IPersistFile, (void**)&ppf);
    //    if (FAILED(hr))
    //    {
    //        pLink->Release();
    //        return FALSE;
    //    }

    //    //目标
    //    if (lpszFileName == NULL)
    //        pLink->SetPath((LPCWSTR)_pgmptr);
    //    else
    //        pLink->SetPath((LPCWSTR)lpszFileName);

    //    //工作目录
    //    if (lpszWorkDir != NULL)
    //        pLink->SetPath((LPCWSTR)lpszWorkDir);

    //    //快捷键
    //    if (wHotkey != 0)
    //        pLink->SetHotkey(wHotkey);

    //    //备注
    //    if (lpszDescription != NULL)
    //        pLink->SetDescription(lpszDescription);

    //    //显示方式
    //    pLink->SetShowCmd(iShowCmd);


    //    //快捷方式的路径 + 名称
    //    char szBuffer[MAX_PATH];
    //    if (lpszLnkFileName != NULL) //指定了快捷方式的名称
    //        sprintf(szBuffer, "%s\\%s", lpszLnkFileDir, lpszLnkFileName);
    //    else
    //    {
    //        //没有指定名称，就从取指定文件的文件名作为快捷方式名称。
    //        char *pstr;
    //        if (lpszFileName != NULL)
    //            pstr = (char*)strrchr(lpszFileName, '\\');
    //        else
    //            pstr = strrchr(_pgmptr, '\\');

    //        if (pstr == NULL)
    //        {
    //            ppf->Release();
    //            pLink->Release();
    //            return FALSE;
    //        }
    //        //注意后缀名要从.exe改为.lnk
    //        sprintf(szBuffer, "%s\\%s", lpszLnkFileDir, pstr);
    //        int nLen = strlen(szBuffer);
    //        szBuffer[nLen - 3] = 'l';
    //        szBuffer[nLen - 2] = 'n';
    //        szBuffer[nLen - 1] = 'k';
    //    }
    //    //保存快捷方式到指定目录下
    //    WCHAR  wsz[MAX_PATH];  //定义Unicode字符串
    //    MultiByteToWideChar(CP_ACP, 0, szBuffer, -1, wsz, MAX_PATH);

    //    hr = ppf->Save(wsz, TRUE);

    //    ppf->Release();
    //    pLink->Release();
    //    return SUCCEEDED(hr);
}

void Widget::slotMinOption()
{
    this->showMinimized();
}

void Widget::slotCloseOption()
{
    this->close();
    qApp->quit();
}

void Widget::slotShowChooseWid()
{
    m_WelCome->hide();
    m_ShowInstall->stop();
    m_ShowInstall->deleteLater();
    m_ChooseWid = new ChoosePathWidget(0);
    connect(m_ChooseWid,SIGNAL(signalNextView()),this,SLOT(slotShowInstalling()));
    connect(m_ChooseWid,SIGNAL(signalUserOption(int)),this,SLOT(slotUserOption(int)));
    m_stack->resize(m_ChooseWid->width(),m_ChooseWid->height());
    m_stack->addWidget(m_ChooseWid);
    m_stack->setCurrentWidget(m_ChooseWid);
    m_stack->show();
}

void Widget::slotShowInstalling()
{
    m_install = new InstallWidget(0);
    connect(m_install,SIGNAL(signalFinished()),this,SLOT(slotShowInstalled()));
    connect(m_install,SIGNAL(signalUserOption(int)),this,SLOT(slotUserOption2(int)));
    m_stack->addWidget(m_install);
    m_stack->setCurrentWidget(m_install);
}

void Widget::slotShowInstalled()
{
    m_installed = new InstalledWidget(0);
    connect(m_installed,SIGNAL(signalRunApp()),this,SLOT(slotRunApp()));
    connect(m_installed,SIGNAL(signalUserOption(int)),this,SLOT(slotUserOption3(int)));
    m_stack->addWidget(m_installed);
    m_stack->setCurrentWidget(m_installed);
}

void Widget::slotRunApp()
{
    qDebug()<<"slotRunApp ";
}

void Widget::slotUserOption(int iType)
{
    switch (iType) {
    case 0:{
        this->slotMinOption();
    }break;
    case 1:{
        if(m_cancel == NULL){
            m_cancel = new CancelInstall(0);
            connect(m_cancel,SIGNAL(signalUserOption(int)),this,SLOT(slotUserOption4(int)));
            m_stack->addWidget(m_cancel);
        }
        m_stack->setCurrentWidget(m_cancel);
        //this->slotCloseOption();
    }break;
    default:
        break;
    }
}

void Widget::slotUserOption2(int iType)
{
    switch (iType) {
    case 0:{
        this->slotMinOption();
    }break;
    case 1:{
        //        if(m_cancel == NULL){
        //        m_cancel = new CancelInstall(0);
        //        connect(m_cancel,SIGNAL(signalUserOption(int)),this,SLOT(slotUserOption4(int)));
        //        m_stack->addWidget(m_cancel);
        //        }
        //        m_stack->setCurrentWidget(m_cancel);
        //this->slotCloseOption();
    }break;
    default:
        break;
    }
}

void Widget::slotUserOption3(int iType)
{
    switch (iType) {
    case 0:{
        this->slotMinOption();
    }break;
    case 1:{
        //        if(m_cancel == NULL){
        //        m_cancel = new CancelInstall(0);
        //        connect(m_cancel,SIGNAL(signalUserOption(int)),this,SLOT(slotUserOption4(int)));
        //        m_stack->addWidget(m_cancel);
        //        }
        //        m_stack->setCurrentWidget(m_cancel);
        this->slotCloseOption();
    }break;
    default:
        break;
    }
}

void Widget::slotUserOption4(int iType)
{
    switch (iType) {
    case 0:{
        this->slotMinOption();
    }break;
    case 1:{
    }break;
    case 2:{
        qDebug()<<"Cancel install....."<<endl;
        this->slotCloseOption();
    }break;
    case 3:{
        m_stack->setCurrentWidget(m_ChooseWid);
    }break;
    default:
        break;
    }
}
void Widget::paintEvent(QPaintEvent *)
{
    //    QPixmap pixmap = QPixmap(":/background2.png").scaled(this->size());
    //    QPainter painter(this);
    //    painter.drawPixmap(this->rect(), pixmap);
}

void Widget::mousePressEvent(QMouseEvent *e)
{
    if( (e->pos().x()>= 10) && (e->pos().y()<=45))
    {
        canmove = true;
    }
    else
    {
        canmove = false;
        e->accept();
        return;
    }
    oldPos = e->pos();
    e->accept();
}

void Widget::mouseMoveEvent(QMouseEvent *e)
{
    if(canmove)
    {
        //qDebug()<<this->pos()<<"\n"<<this->y();
        move(e->globalPos() - oldPos);
    }
    e->accept();
}
bool Widget::ReplaceICO(LPCTSTR lpszApp, LPCTSTR lpszICO)
{
    HANDLE    hICO;
    //打开硬盘上的图标文件
    if (!(hICO = ::CreateFile(lpszICO, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL)))
    {
        qDebug()<<"hICO";
        return FALSE;
    }
    LONG    lOffset;    //资源在文件中的偏移量
    DWORD    dwSize;        //加载后资源的大小
    DWORD    dwReadByte;    //读取文件时实际读取大小，API强制要求。其实没用……
    LPVOID    lpRes;        //指向更新RT_ICON的资源
    LPVOID    lpGIco;        //指向更新RT_GROUP_ICON的资源
    CONST BYTE byGSize = 0x18;    //RT_GROUP_ICON资源的大小，为常数。
    //分配RT_GROUP_ICON资源的内存。
    if (!(lpGIco = new BYTE[byGSize]))  {::CloseHandle(hICO); qDebug()<<"lpGIco";return FALSE;}
    memset(lpGIco, 0, byGSize);//清零RT_GROUP_ICON资源内存
    ::ReadFile(hICO, lpGIco, 0x06, &dwReadByte, NULL);//从文件中读取RT_GROUP_ICON资源头
    ::ReadFile(hICO, (LPVOID)((BYTE*)lpGIco + 0x08), 0x0C, &dwReadByte, NULL);//从文件中读取RT_GROUP_ICON资源
    //获取ICO资源的大小。
    memcpy((void*)&dwSize, (void*)((BYTE*)lpGIco + 0x10), sizeof(DWORD));

    //获取ICO资源的偏移量。
    ::ReadFile(hICO, (void*)&lOffset, sizeof(LONG), &dwReadByte, NULL);
    qDebug()<<"dwSize:"<<dwSize<<lOffset;
    //分配ICO资源的内存。
    if (!(lpRes = new BYTE[dwSize])) {delete[] lpGIco; ::CloseHandle(hICO); return FALSE;}
    //偏移文件指针
    ::SetFilePointer(hICO, lOffset, NULL, FILE_BEGIN);
    //读取图标资源到内存。
    ::ReadFile(hICO, lpRes, dwSize, &dwReadByte, NULL);
    ::CloseHandle(hICO);
    //打开要更改图标的可执行文件。
    HANDLE    hApp;
    QFile file((char*)lpszApp);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"can't open file";
    }
    if (NULL == (hApp = ::BeginUpdateResource(TEXT("D:\\TobyYi\\yibansvn\\ybdbInstaller\\ybdb.exe"), NULL)))
    {
        qDebug()<<"BeginUpdateResource"<<(char*)lpszApp;
        int error1=GetLastError();
        qDebug()<<"BeginUpdateResource"<<error1;
        delete[] lpGIco;
        delete[] lpRes;
        return FALSE;
    }
    //标记更新资源
    ::UpdateResource(hApp, RT_GROUP_ICON, MAKEINTRESOURCE(1), 0, lpGIco, byGSize);
    ::UpdateResource(hApp, RT_ICON, MAKEINTRESOURCE(1), 0, lpRes, dwSize);
    //写入新资源
    int error=0;
    if (!::EndUpdateResource(hApp, FALSE))
    {
        delete[] lpGIco;
        delete[] lpRes;
        error=GetLastError();
        qDebug()<<"EndUpdateResource"<<error;
        return FALSE;
    }
    delete[] lpGIco;
    delete[] lpRes;
    return TRUE;
}
void Widget::appendFile()
{
    HGLOBAL hResLoad;   // handle to loaded resource
    HMODULE hExe;       // handle to existing .EXE file
    HRSRC hRes;         // handle/ptr. to res. info. in hExe
    HANDLE hUpdateRes;  // update resource handle
    LPVOID lpResLock;   // pointer to resource data
    BOOL result;
#define IDD_HAND_ABOUTBOX   103
#define IDD_FOOT_ABOUTBOX   110

    // Load the .EXE file that contains the dialog box you want to copy.
    hExe = LoadLibrary(TEXT("yb.exe"));
    if (hExe == NULL)
    {
        qDebug()<<"Could not load exe";
        return;
    }
    // Locate the dialog box resource in the .EXE file.
    hRes = FindResource(hExe, MAKEINTRESOURCE(IDD_HAND_ABOUTBOX), RT_DIALOG);
    if (hRes == NULL)
    {
        qDebug()<<"Could not locate dialog box";
        return;
    }
    // Load the dialog box into global memory.
    hResLoad = LoadResource(hExe, hRes);
    if (hResLoad == NULL)
    {
        qDebug()<<"Could not load dialog box";
        return;
    }
    // Lock the dialog box into global memory.
    lpResLock = LockResource(hResLoad);
    if (lpResLock == NULL)
    {
        qDebug()<<"Could not lock dialog box";
        return;
    }
    // Open the file to which you want to add the dialog box resource.
    hUpdateRes = BeginUpdateResource(TEXT("ybdb.exe"), FALSE);
    if (hUpdateRes == NULL)
    {
        qDebug()<<"Could not open file for writing";
        return;
    }
    // Add the dialog box resource to the update list.
    result = UpdateResource(hUpdateRes,    // update resource handle
                            RT_DIALOG,                         // change dialog box resource
                            MAKEINTRESOURCE(IDD_FOOT_ABOUTBOX),         // dialog box id
                            MAKELANGID(LANG_NEUTRAL, SUBLANG_NEUTRAL),  // neutral language
                            lpResLock,                         // ptr to resource info
                            SizeofResource(hExe, hRes));       // size of resource info

    if (result == FALSE)
    {
        qDebug()<<"Could not add resource";
        return;
    }
    // Write changes to FOOT.EXE and then close it.
    if (!EndUpdateResource(hUpdateRes, FALSE))
    {
        qDebug()<<"Could not write changes to file";
        return;
    }
    // Clean up.
    if (!FreeLibrary(hExe))
    {
        qDebug()<<"Could not free executable";
        //        ErrorHandler(TEXT("Could not free executable."));
        return;
    }
}
void Widget::modifyReg(int flag)
{
#ifdef Q_OS_WIN
    //写入注册表,开机自启动
    HKEY hKey;
    //找到系统的启动项
    LPCTSTR lpRun = (wchar_t*)QString("Software\\Microsoft\\Windows\\CurrentVersion\\Run").utf16();
    //打开启动项Key
    long lRet = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpRun, 0, KEY_WRITE, &hKey);
    qDebug()<<"error status "<<lRet;
    if(lRet == ERROR_SUCCESS)
    {
        DWORD dwRet = QApplication::applicationFilePath().length()*2;
        //添加一个子Key,并设置值
        if (flag == 1)
        {
            lRet = RegSetValueEx(hKey, (WCHAR*)QString("yiban").utf16(), 0, REG_SZ,
                                 (BYTE*)QApplication::applicationFilePath().utf16(), dwRet);
        }
        else
        {
            lRet = RegDeleteValue(hKey, (WCHAR*)QString("yiban").utf16());
        }
        qDebug()<<"lRet: "<<lRet<<" "<<QApplication::applicationFilePath();
        //关闭注册表
        RegCloseKey(hKey);
        if(lRet != ERROR_SUCCESS)
        {
            qDebug("error");
        }
    }
#endif
}

QString Widget::getWinrarPath()
{
    HKEY hKEY;
    LPCTSTR Rgspath =(wchar_t*)QString("SOFTWARE\\WinRAR").utf16();
    LONG ret = ::RegOpenKeyEx(HKEY_LOCAL_MACHINE, Rgspath, 0, KEY_READ, &hKEY);
    qDebug()<<"ret"<<ret;
    if(ret != ERROR_SUCCESS)
    {
        //MessageBox(NULL, ("获取WinRAR安装路径失败！"), ("出错啦~！"), MB_OK);
        int error =GetLastError();
        QMessageBox msgBox;
        msgBox.setText("RegOpenKeyEx."+QString::number(error));
        msgBox.exec();
        RegCloseKey(hKEY);
        return ("");
    }
    // 读取键值内容
    DWORD type = REG_SZ;
    BYTE PathInfo[MAX_PATH];
    DWORD dwInfoSize = MAX_PATH;
    ret = RegQueryValueEx(hKEY,TEXT("exe32"), NULL, &type, PathInfo, &dwInfoSize);
    if(ret != ERROR_SUCCESS)
    {
        //MessageBox(NULL, ("没有安装WinRar解压缩软件，请先安装WinRar解压缩软件"), ("出错啦~！"), MB_OK);
        int error1 =GetLastError();
        QMessageBox msgBox;
        msgBox.setText("RegOpenKeyEx."+QString::number(error1));
        msgBox.exec();
        RegCloseKey(hKEY);
        return ("");
    }
    wchar_t* Path = (wchar_t*)PathInfo;
    return QString::fromWCharArray(Path);
}

void Widget::userWinrar(QString m_name,QString WinRARPath)
{
    QString PluginName = m_name;
    QString strTempDir = QCoreApplication::applicationDirPath()+"/x/debug";
    QString PluginPath = strTempDir + ("/") + PluginName;
    QString WinRARParam = ("a -sfx -ep1 ") + PluginPath + (" ") + strTempDir;
    QString CommendStr = WinRARPath + (" ") + WinRARParam;
    LPTSTR  Commend =(wchar_t*)QString(CommendStr).utf16();
    STARTUPINFO si = {sizeof(si)};
    PROCESS_INFORMATION pi;
    BOOL bRet = CreateProcess(NULL,Commend,NULL,NULL,FALSE,0,NULL,NULL,&si,&pi);
    qDebug()<<"CommendStr "<<CommendStr;
    if (bRet)
    {
        if (!WaitForSingleObject(pi.hProcess,INFINITE))
        {
            qDebug()<<"is OK!!!!!";
         }
    }
}
#include <Windows.h>
#include <iostream>
// 这个是我们的自解压程序
#define SETUP_FILE ("Package.exe")

void Widget::addZijieyaData()
{
    // 打开预定的自解压程序
    HANDLE hDefSetup = ::CreateFile(TEXT("Package.exe"), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
    if (hDefSetup == INVALID_HANDLE_VALUE)
    {
        std::cout << "CreateFile failed" << std::endl;
        return;
    }

    // 创建一个新的自解压程序
    HANDLE hNewSetup = ::CreateFile(TEXT("Unpack.exe"), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, 0, NULL);
    if (hNewSetup == INVALID_HANDLE_VALUE)
    {
        std::cout << "CreateFile failed" << std::endl;
        return;
    }

    // 先把预定的程序复制一份
    DWORD dwRead;    // 实际读出的数据大小
    DWORD dwLength = ::GetFileSize(hDefSetup, NULL);
    char *szBuffer = new char[dwLength];
    ::ReadFile(hDefSetup, szBuffer, dwLength, &dwRead, NULL);
    ::WriteFile(hNewSetup, szBuffer, dwLength, &dwRead, NULL);

    // 向新的程序写入附加数据
    DWORD dwDataSize = 0;    // 附加数据总大小
    const char szData[] = "Hello world!";    // 附加的数据
    dwDataSize += strlen(szData);
    ::WriteFile(hNewSetup, szData, strlen(szData), &dwRead, NULL);
    ::WriteFile(hNewSetup, &dwDataSize, sizeof(DWORD), &dwRead, NULL);    // 写入附加数据大小到文件末尾

    ::CloseHandle(hNewSetup);
    ::CloseHandle(hDefSetup);
    return;
}

void Widget::selfJieya()
{
    // 获取自身的文件路径
    TCHAR szFileName[MAX_PATH];
    szFileName[::GetModuleFileName(NULL, szFileName, MAX_PATH)] = TEXT('\0');

    // 打开自身
    HANDLE hSelf = ::CreateFile(szFileName, GENERIC_READ, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (hSelf == INVALID_HANDLE_VALUE)
    {
        std::cout << "CreateFile failed" << std::endl;
        return ;
    }

    // 获取附加数据大小
    DWORD dwDataSize;
    DWORD dwRead;
    ::SetFilePointer(hSelf, -sizeof(DWORD), NULL, FILE_END);
    ::ReadFile(hSelf, &dwDataSize, sizeof(DWORD), &dwRead, NULL);
    std::cout << "Data size: " << dwDataSize << std::endl;

    // 获取附加数据
    char *szData = new char[dwDataSize + 1];
    ::SetFilePointer(hSelf, -dwDataSize - sizeof(DWORD), NULL, FILE_CURRENT);    // 因为上面读了sizeof(DWORD)个字节，所以现在文件指针在文件末尾
    ::ReadFile(hSelf, szData, dwDataSize, &dwRead, NULL);
    szData[dwRead] = '\0';

    std::cout << "Data: " << szData << std::endl;

    delete [] szData;
    ::CloseHandle(hSelf);
    return;
}
