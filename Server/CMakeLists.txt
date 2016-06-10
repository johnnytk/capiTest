set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(SRC_GEN_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src-gen)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11 -Os -s -flto")

add_subdirectory(src-gen)
set_source_files_properties(${SRC_GEN_FILES} PROPERTIES GENERATED 1)

add_executable(capiTestServer
    ${SRC_DIR}/capiTestServer.cpp
    ${SRC_GEN_FILES})

include_directories(
    ${SRC_DIR}
    ${COMMONAPI_INCLUDE_DIRS}
    ${COMMONAPI_DBUS_INCLUDE_DIRS}
    ${DBus_INCLUDE_DIRS}
    ${SRC_GEN_DIR})

target_link_libraries(capiTestServer
    CommonAPI-DBus
    CommonAPI)

