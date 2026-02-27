add_executable(ScreenSaver src/main.cpp)

target_link_libraries(ScreenSaver PRIVATE 
    SDL3::SDL3-shared
)

if(APPLE)
    set_target_properties(ScreenSaver PROPERTIES
        MACOSX_BUNDLE TRUE
        MACOSX_BUNDLE_GUI_IDENTIFIER "com.yourname.spaceshooter"
    )
endif()