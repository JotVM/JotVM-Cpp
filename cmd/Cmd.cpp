//
// Created by glavo on 17-11-12.
//

#include <QCommandLineParser>
#include "Cmd.h"


Cmd &Cmd::parse(QCoreApplication const &app) {
    QCommandLineParser parser;

    QCommandLineOption cpOption(QStringList() << "cp" << "classpath",
                                "class search path of directories and zip/jar files");


    //add options
    parser.addHelpOption().setDescription("print this help message");
    parser.addVersionOption().setDescription("print product version and exit");
    parser.addOption(cpOption);

    parser.process(app);
    return *this;
}
