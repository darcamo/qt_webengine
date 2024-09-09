
#include <QGuiApplication>
#include <QQmlApplicationEngine>
// #include <QtWebEngine/QtWebEngine>
#include <QtWebEngineQuick/QtWebEngineQuick>

int main(int argc, char *argv[]) {
    // ShareOpenGLContexts is needed for using the threaded renderer
    // on Nvidia EGLStreams
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts, true);

    QtWebEngineQuick::initialize();
    
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
