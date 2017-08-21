//
// Created by glavo on 17-8-21.
//

#ifndef JOTVM_BASE_H
#define JOTVM_BASE_H

#include <cinttypes>
#include <string>

namespace jot {
    using byte = std::int8_t;
    using jshort = std::int16_t;
    using jint = std::int32_t;
    using jlong = std::int64_t;

    using jfloat = float;
    using jdouble = double;

    using jchar = char16_t;

    using jboolean = bool;

    using Null = decltype(nullptr);
    const Null null = nullptr;

    using ustring = std::basic_string<jchar>;
}

#endif //JOTVM_BASE_H
