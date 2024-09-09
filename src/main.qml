import QtQuick.Controls 2.15
// import QtQuick.Controls 1.0
import QtQuick 2.15
import QtWebEngine 1.0
import QtQuick.Window 2.0

// import QtQuick 2.15
// import QtQuick.Window 2.15
// import QtQuick.Layouts 2.15
// import QtQuick.Controls 2.15

Window
{
    visible: true
    width: 640
    height: 480
    title: qsTr("Minimal Qml")

    WebEngineView {
        anchors.fill: parent
        url: "https://www.duckduckgo.com/"
        // url: "https://51degrees.com/client-hints/"
    }
    
}
