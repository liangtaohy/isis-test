#include <QtGui/QApplication>
#include <QApplication>
#include <QWebView>
#include <QUrl>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWebView view;
    view.setStyleSheet("background-color:rgb(150,147,88); padding: 7px ; color:rgb(255,255,255)");
    view.load(QUrl(QString("file://")+QDir::currentPath()+QString("/ui/index.html")));
    view.show();

    return a.exec();
}
