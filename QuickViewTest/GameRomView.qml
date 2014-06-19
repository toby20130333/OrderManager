import QtQuick 2.0
import QtQuick.Controls 1.1

Item {
    width: view1.width
    height: view1.height
    property ListModel randomModel;

    Component{
        id:gameComp1
        Rectangle{
            id:x
            width: 76
            height: 76
            color: (name==0)?"#D74F37":"#4AD8DA"
            border.width: 1
            border.color: "gray"
            radius: 5
            Text {
                id: num
                text:  (name!=0)?name:""
                anchors.centerIn: parent
                font.bold: true
            }
            MouseArea{
                id:ma
                anchors.fill: parent
                onClicked: {
                    //view.currentIndex = index;
                }
            }
        }
    }

    ListModel{
        id:gameModel1
        ListElement{
            name:1
            isselcet:false
        }
        ListElement{
            name:2
            isselcet:false
        }
        ListElement{
            name:3
            isselcet:false
        }
        ListElement{
            name:4
            isselcet:false
        }
        ListElement{
            name:5
            isselcet:false
        }
        ListElement{
            name:6
            isselcet:false
        }
        ListElement{
            name:7
            isselcet:false
        }
        ListElement{
            name:8
            isselcet:false
        }
        ListElement{
            name:0
            isselcet:false
        }
    }
    GridView{
        id:view1
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 0
        width: 240
        height: 240
        cellWidth: 80
        cellHeight: 80
        delegate: gameComp1
        model:gameModel1
        Component.onCompleted: {
            getOnlyNum(9)
        }
    }

    function getradom(num)
    {
        var n = parseInt(Math.random()*num+1);
        console.log("--------- "+n);
    }
    function getOnlyNum(nume)
    {
        var count=nume;
        var originalArray=[];//原数组
        //给原数组originalArray赋值
        for (var i=0;i<count;i++){
            originalArray[i]=i;
        }
        originalArray.sort(function(){ return 0.5 - Math.random(); });
        //console.log(originalArray[0]);
        if(originalArray.length != 0 && originalArray[0] != undefined){
            gameModel1.clear();
            for (var ii=0;ii<count;ii++){
                gameModel1.append({"name":originalArray[ii]})
            }
        }else{

        }
        randomModel = gameModel1;
    }
}
