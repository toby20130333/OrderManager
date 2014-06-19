import QtQuick 2.0
import FileIO 1.0
import QtQuick.Controls 1.1

Item {
    width: 100
    height: parent.height-40
    property string txt;
    Text {
        id: myText
        text: ""
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        width: parent.width-40
//        height: parent.height-120
        clip: true
        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
        font.pixelSize: 16
        font.letterSpacing: 1
        color: "#404040"
    }
    FileIO {
           id: myFile
           source: ":/fileno.txt"
           onError: console.log(msg)
       }
       Component.onCompleted: {
           console.log("msg"+myFile.read());
           myText.text =  myFile.read();
       }
}
