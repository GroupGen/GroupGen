add_executable(GroupGen
    main.cpp
    ui/ui.qrc
)

target_link_libraries(GroupGen PUBLIC
    Qt5::Core
    Qt5::Gui
    Qt5::Quick
)

target_include_directories(GroupGen PUBLIC
    "${PROJECT_SOURCE_DIR}/src"
)
