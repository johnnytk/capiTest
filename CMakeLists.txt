cmake_minimum_required(VERSION 2.8)

project(capiTest)

include(FindPkgConfig)

find_package(CommonAPI REQUIRED)
find_package(CommonAPI-DBus REQUIRED)
pkg_check_modules(DBus REQUIRED dbus-1>=1.8.2)

add_subdirectory(Server)
