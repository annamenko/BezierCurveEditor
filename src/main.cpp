#include <QApplication>

#include "../include/mainwindow.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationDisplayName("");
    app.setApplicationName("");
    app.setApplicationVersion("0.0.1a");
    MainWindow w;
    w.show();

    return app.exec();
}
