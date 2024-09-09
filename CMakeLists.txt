cmake_minimum_required(VERSION 3.30)


project(MyProject)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Note: The target names that you will link to start with "Qt6::" followed by the module name
find_package(Qt6 6.7.2 REQUIRED COMPONENTS Core Widgets Gui Qml Quick WebChannelQuick WebEngineQuick WebEngineWidgets)

add_subdirectory(src)
