//
// Created by Glavo on 17-8-21.
//

#ifndef JOTVM_CMD_H
#define JOTVM_CMD_H

namespace jot::cmd {
    struct Cmd {
    public:
        bool helpFlag;
        bool versionFlag;

        const char *classPathOpt;

    };
}


#endif //JOTVM_CMD_H
