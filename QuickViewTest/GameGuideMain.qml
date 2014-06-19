// This example demonstrates placing items in a view using
// an ObjectModel

import QtQuick 2.0
import QtQml.Models 2.1

Item {
    id: root
    width: 320
    height: 480
    property bool printDestruction: false

//! [0]
    ObjectModel {
        id: itemModel
        GameGuide {
            width: view.width; height: view.height
        }
        GameNextUI {
            width: view.width; height: view.height
            Component.onDestruction: if (printDestruction) print("destroyed 1")
        }
        GameThirdUI{
            width: view.width; height: view.height
            Component.onDestruction: if (printDestruction) print("destroyed 3")
        }

        EightGame {
            width: view.width; height: view.height
            Component.onDestruction: if (printDestruction) print("destroyed 2")
        }
    }

    ListView {
        id: view
        anchors { fill: parent; bottomMargin: 30 }
        model: itemModel
        preferredHighlightBegin: 0; preferredHighlightEnd: 0
        highlightRangeMode: ListView.StrictlyEnforceRange
        orientation: ListView.Horizontal
        snapMode: ListView.SnapOneItem; flickDeceleration: 2000
        cacheBuffer: 200
    }
//! [0]
    Item {
        width: root.width; height: 30
        anchors { top: view.bottom; bottom: parent.bottom }
        Row {
            anchors.centerIn: parent
            spacing: 20
            Repeater {
                model: itemModel.count
                Rectangle {
                    width: 8; height: 8
                    radius: 4
                    color: view.currentIndex == index ? "#49A9E3" : "white"
                    MouseArea {
                        width: 20; height: 20
                        anchors.centerIn: parent
                        onClicked: view.currentIndex = index
                    }
                }
            }
        }
    }
}
