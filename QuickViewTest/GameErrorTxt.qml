// import QtQuick 2.1 // to target S60 5th Edition or Maemo 5
import QtQuick 2.1

Item{
    property alias imgText : imgText.text
    property string textColor:"#FF5317"
    property int isMatch: 0 //0:error 1:not realaccount 2:service error
    //width: img.paintedWidth + imgText.paintedWidth + 8
    height: imgText.paintedHeight
    property bool isShowImg: true
    signal signalHideTipError()
    Text {
        id: imgText
        anchors.left:  parent.left
        anchors.leftMargin: 5
        color:textColor
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        font.family: "微软雅黑"
        font.pixelSize: 13
        text: (isMatch==0)?"密码不匹配":((isMatch == 1)?"账号未实名认证":"服务器正在维护")
    }
}
