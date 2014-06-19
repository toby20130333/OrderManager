import QtQuick 2.0

Item {
    width: view.width
    height: view.height
    property ListModel gameTmpModel
    signal signalMatchSuccuss();

    Component{
        id:gameComp
        Rectangle{
            id:xxx
            width: 76
            height: 76
            color: view.currentIndex == index?((name == 0)?"#D74F37":("red")):((name==0)?"#D74F37":"#4AD8DA");
            border.width: 1
            border.color: "gray"
            radius: 5
            Text {
                id: num
                text: (name!=0)?name:""
                anchors.centerIn: parent
                font.bold: true
            }
            MouseArea{
                id:ma
                anchors.fill: parent
                onClicked: {
                    console.log("wlkaljklcurLoction "+curLoction+" "+index);
                    addStep();
                    if(index != view.currentIndex)
                    {
                        console.log("wlkaljk---------------------------------------l "+curLoction+" "+index);
                        view.currentIndex = index;
                        gameModel.setProperty(curLoction, "name",gameModel.get(index).name);
                        gameModel.setProperty(index, "name",currentNum);
                        curLoction = view.currentIndex;
                        currentNum = gameModel.get(curLoction).name;
                    }
                    gameTmpModel = gameModel;
                    var isMatch = matchThesame();
                    if(isMatch )
                    {
                        addScore();
                        signalMatchSuccuss();
                    }
                    console.log("isMatchisMatchisMatchisMatch "+isMatch);
                }
            }
        }
    }


    ListModel{
        id:gameModel
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
    property int curLoction:0
    property int currentNum:0;
    GridView{
        id:view
        anchors.centerIn: parent
        width: 240
        height: 240
        cellWidth: 80
        cellHeight: 80
        delegate: gameComp
        model:gameModel
        Component.onCompleted: {
            getOnlyNum(9)
            view.currentIndex = 0;
            currentNum = gameModel.get(0).name;
            curLoction = view.currentIndex;
            console.log("Component.onCompleted "+currentNum+ " curLoction");
        }
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
            gameModel.clear();
            for (var ii=0;ii<count;ii++){
                gameModel.append({"name":originalArray[ii]})
            }
        }else{

        }
        gameTmpModel = gameModel;
    }

}
