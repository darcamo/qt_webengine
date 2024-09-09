
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# find_package(Qt5 COMPONENTS Quick Gui REQUIRED)
# find_package(Qt5 5.15.14 REQUIRED COMPONENTS Core Widgets Gui Qml Quick WebEngine)

add_library(mymodule)
target_compile_features(mymodule PUBLIC cxx_std_23)
target_sources(mymodule
  PUBLIC
  FILE_SET CXX_MODULES
  FILES
  mymodule.cppm
)
# target_link_libraries(mymodule PUBLIC qt::qt)


add_executable(main
  main.cpp
  resources.qrc
)
target_link_libraries(main PUBLIC mymodule Qt6::Core
  Qt6::Widgets
  Qt6::Qml
  Qt6::Quick
  # Qt6::Gui
  # Qt6::WebEngine
  # Qt6::WebEngineCore
  # Qt6::WebChannelQuick
  # Qt6::WebEngineWidgets
  Qt6::WebEngineQuick
)
