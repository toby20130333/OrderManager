import QtQuick 2.0
import FileIO 1.0

Rectangle {
    width: 300
    height: 700
    BorderImage {
        id: name
        source: "file:///D:/TobyYi/yibansvn/ReleaseVerYibanPC/YibanClient/image/login/background.png"
        width: 300; height: 700
        border.left: 5; border.top: 5
        border.right: 5; border.bottom: 5
    }
    Text {
        id: myText
        text: qsTr("中华男儿当自强")
        anchors.centerIn: parent
        width: parent.width-10
        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
        font.pixelSize: 20
        color: "white"
    }
    FileIO {
           id: myFile
           source: "fileno.txt"
           onError: console.log(msg)
       }
       Component.onCompleted: {
           console.log("msg");
           myText.text =  myFile.read();
       }
}
