#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QUrl>


int main(int argc, char** argv) {
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    const QUrl url("qrc:/ui/main.qml");
    engine.load(url);

    return app.exec();
}
