#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QtAndroid>
#include <QQuickItem>


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    // Create MyClass Class Instance
    QAndroidJniObject *instance = new QAndroidJniObject("com/argama147/mylibrary/MyClass");
    // Call Method
    QAndroidJniObject ret = instance->callObjectMethod("getWord","()Ljava/lang/String;");
    QString str = ret.toString();
    qDebug() << "ret" << str;
    delete instance;

    // Update Property
    QObject* root = engine.rootObjects().first();
    QQuickItem *resultText = root->findChild<QQuickItem *>("resultText");
    resultText->setProperty("text", str);

    return app.exec();
}
