#include <QApplication>
#include <QLabel>

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    QLabel l("Hola Mundo");
    l.show();
    return a.exec();
}
