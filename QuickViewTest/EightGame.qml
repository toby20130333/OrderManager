import QtQuick 2.0
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1

Item {
    width: 400
    height: 700
    property int iScore: 0
    property int iStep: 0
    property string iCurTime:"0"
    function getCurrentHm()
    {
        iCurTime ++;
    }
    Timer{
        id:ti
        interval: 1000; running: false; repeat: true
        onTriggered: getCurrentHm()
    }
    GameTips{
        id:errorTip
        anchors.centerIn: parent
        opacity:0.0
        z:10
    }

    Label{
        id:timeLb2
        anchors.top: parent.top
        anchors.topMargin: 80
        anchors.left: parent.left
        anchors.leftMargin: 20
        text:"用时: "+iCurTime+"s"
        font.pixelSize: 12
    }
    Label{
        id:scoreLb
        anchors.top: timeLb2.bottom
        anchors.topMargin: 20
        anchors.left: parent.left
        anchors.leftMargin: 20
        font.pixelSize: 12
        text:"分数: "+iScore
    }
    Label{
        id:totalLb1
        anchors.top: scoreLb.bottom
        anchors.topMargin: 20
        font.pixelSize: 12
        anchors.left: parent.left
        anchors.leftMargin: 20
        text:"点击次数: "+iStep
    }
    GameRomView{
        id:rodomView
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 30
        anchors.top: parent.top
        anchors.topMargin: 80
    }
    GameView{
        id:gameView
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 30
        anchors.top: rodomView.bottom
        anchors.topMargin:40
        onSignalMatchSuccuss: {
            stopTimer();
            rodomView.getOnlyNum(9);
            gameView.getOnlyNum(9)
            errorTip.startAnimation("恭喜获得奖励")
        }
    }
    Button{
        id:gameBtn
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 30
        anchors.top: gameView.bottom
        anchors.topMargin: 20
        style: ButtonStyle {
            background: Rectangle {
                implicitWidth: 120
                implicitHeight: 35
                border.width: control.activeFocus ? 2 : 1
                border.color: "#888"
                radius: 4
                gradient: Gradient {
                    GradientStop { position: 0 ; color: control.pressed ? "#ccc" : "#eee" }
                    GradientStop { position: 0.5 ; color: control.pressed ? "#ddd" : "#ddd" }
                    GradientStop { position: 1 ; color: control.pressed ? "#aaa" : "#ccc" }
                }
                Text {
                    id: txt
                    text: qsTr("开始游戏")
                    anchors.centerIn: parent
                    color: control.pressed ? "#D74F37" : "#c74F37"
                    //                        font.bold: true
                    font.pixelSize: 12
                }
            }
        }
        onClicked: {
            stopTimer();
            ti.start();
        }
    }
    function matchThesame(gamemodel)
    {
        var originalArray=[];//原数组
        //给原数组originalArray赋值
        for (var i=0;i<gameView.gameTmpModel.count;i++){
            originalArray[i]=gameView.gameTmpModel.get(i).name;
        }
        var originalArray1=[];//变化后的数组
        //给原数组originalArray赋值
        for (var i=0;i<rodomView.randomModel.count;i++){
            originalArray1[i]=rodomView.randomModel.get(i).name;
        }
        if(originalArray.toString() == originalArray1.toString())
        {
            return true;
        }
        return false;
    }
    function addScore()
    {
        iScore ++;
    }
    function addStep()
    {
        iStep ++;
    }
    function stopTimer()
    {
        ti.stop();
        iStep = 0;
        iScore = 0;
        iCurTime = 0;
    }
}
