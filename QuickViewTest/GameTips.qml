import QtQuick 2.0

Item {
    width: 100
    height: 62
    //用于提示用户错误信息
        GameErrorTxt{
            id:errorTips
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            imgText:"密码错误"
            textColor: "#ffcccc"
            opacity: 0.0
            isShowImg: false
            width: 160
    }
    SequentialAnimation {
        id:animation
        NumberAnimation { target: errorTips; property: "opacity"; to: 1; duration: 500 }
        PauseAnimation { duration: 1000 }
        NumberAnimation { target: errorTips; property: "opacity"; to: 0; duration: 500 }
    }

    function startAnimation(str)
    {
        errorTips.imgText = str;
        animation.stop();
        animation.start();
    }
}
