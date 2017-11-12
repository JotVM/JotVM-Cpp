#include <QCoreApplication>
#include "cmd/Cmd.h"

int main(int argc, char *argv[]) {
    QCoreApplication application(argc, argv);
    application.setApplicationName("JotVM");
    application.setApplicationVersion("v0.0.1");

    Cmd cmd;
    cmd.parse(application);


    return application.exec();
}
