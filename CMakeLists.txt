cmake_minimum_required(VERSION 2.8.8)

project(2333-Webkit-Ensure-Scroll-MacOSX)

find_package(Qt4)
set(QT_USE_QTWEBKIT ON)
include(${QT_USE_FILE})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES})

add_executable(${PROJECT_NAME}-webviewonly main-webviewonly.cpp)
target_link_libraries(${PROJECT_NAME}-webviewonly ${QT_LIBRARIES})
