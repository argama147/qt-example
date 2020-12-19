import QtQuick 2.15;
import QtQuick.Controls 2.15;
import QtQuick.Layouts 1.15;

ApplicationWindow {
    id: window
    visible: true

    header: ToolBar {
        RowLayout {
            id: rowlayout
            anchors.fill: parent
            Label {
                text: "JarSample"
                font.pixelSize: 20
                color: "white"

                anchors.right: menu.right
                anchors.left: parent.left
                Layout.alignment: Qt.AlignTop | Qt.AlignBottom
                horizontalAlignment: Qt.AlignHCenter
                verticalAlignment: Qt.AlignVCenter
                Layout.fillWidth: true
                Layout.fillHeight: true
                background: Rectangle {
                    gradient: Gradient {
                        orientation: Gradient.Horizontal
                        GradientStop { position: 0.0; color: "lightsteelblue" }
                        GradientStop { position: 1.0; color: "blue" }
                    }
                }
            }
        }
    }

    StackView {
        id: stackView
        anchors.fill: parent
        initialItem: Pane {
            id: pane
            RowLayout {
                anchors.fill: parent
                Label {
                    objectName: "resultText"
                    horizontalAlignment: Text.AlignLeft
                    verticalAlignment: Text.AlignTop
                    wrapMode: Label.Wrap
                    Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                }
            }
        }
    }
}
