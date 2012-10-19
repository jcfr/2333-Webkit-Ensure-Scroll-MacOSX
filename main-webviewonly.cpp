

// Qt includes
#include <QApplication>
#include <QDebug>
#include <QWebFrame>
#include <QWebView>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);
  
  QWebView view;
  view.page()->mainFrame()->setScrollBarPolicy(Qt::Vertical, Qt::ScrollBarAlwaysOn);
  view.show();
  
  if (app.arguments().count() > 1)
    {
    QString url = app.arguments().at(1);
    qDebug() << "url: " << url;
    view.setUrl(url);
    }
  
  return app.exec();  
}
