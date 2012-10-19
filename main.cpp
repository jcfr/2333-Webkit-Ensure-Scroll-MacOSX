

// Qt includes
#include <QApplication>
#include <QDebug>
#include <QVBoxLayout>
#include <QWebFrame>
#include <QWebView>
#include <QWidget>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);
  
  QWidget widget;
  QVBoxLayout * verticalLayout = new QVBoxLayout(&widget);
  QWebView * view = new QWebView();
  view->page()->mainFrame()->setScrollBarPolicy(Qt::Vertical, Qt::ScrollBarAlwaysOn);
  
  verticalLayout->addWidget(view);
  
  widget.show();
  
  if (app.arguments().count() > 1)
    {
    QString url = app.arguments().at(1);
    qDebug() << "url: " << url;
    view->setUrl(url);
    }
  
  return app.exec();  
}
