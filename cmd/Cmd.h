//
// Created by glavo on 17-11-12.
//

#ifndef JOTVM_CPP_CMD_H
#define JOTVM_CPP_CMD_H

#include <QCoreApplication>
#include <QString>
#include <QVector>

struct Cmd {
    Cmd &parse(QCoreApplication const &);

    bool jarFlag = false;

    char const *classPath;
    char const **args;
};


#endif //JOTVM_CPP_CMD_H
