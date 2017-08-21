add_subdirectory(classpath)
add_subdirectory(classfile)
add_subdirectory(cmd)
set(SOURCE_FILES main.cpp base.h)

target_link_libraries(jotcp)
target_link_libraries(jotcf)
target_link_libraries(jotcmd)
include_directories(.)

add_executable(JotVM ${SOURCE_FILES})

