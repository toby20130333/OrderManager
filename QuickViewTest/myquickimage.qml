import QtQuick 2.0
import FileIO 1.0

Rectangle {
    width: 300
    height: 700
    BorderImage {
        id: name
        source: "file:///D:/TobyYi/xxx/ReleaseVerYibanPC/xx/image/login/background.png"
        width: 300; height: 700
        border.left: 5; border.top: 5
        border.right: 5; border.bottom: 5
    }
    Text {
        id: myText
        text: qsTr("中华男儿当自强")
        anchors.centerIn: parent
        font.pixelSize: 20
        color: "white"
    }
    FileIO {
           id: myFile
           source: "fileno.txt"
           onError: console.log(msg)
       }
       Component.onCompleted: {
           console.log( "WRITE"+ myFile.write("TEST TEST file is OK"));
           myText.text =  myFile.read();
       }
}
