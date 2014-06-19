import QtQuick 2.0
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
import QtQuick.Window 2.1

Rectangle {
//    width: 400
//    height: 700
    width: Qt.platform.os === "android"? Screen.width: 400
    height: Qt.platform.os === "android"? Screen.height: 700
    gradient: Gradient {
        GradientStop { position: 0 ; color:  "#AA4F37" }
        GradientStop { position: 0.5 ; color: "#C7AF37" }
        GradientStop { position: 1 ; color: "#F7AF37" }
    }
    Text {
        id: name
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top:parent.top
        anchors.topMargin: 10
        text: qsTr("TbFigure 8")
        font.bold: true
        font.pixelSize: 18
        color: "white"
    }
    GameGuideMain{
        id:main
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 40
        width: parent.width
        height: parent.height-40
    }
}
