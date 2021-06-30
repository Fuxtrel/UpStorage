cmake_minimum_required(VERSION 3.5)

project(UpStorage VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)



set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(UNIX)
    set(CMAKE_PREFIX_PATH "/home/alex/Qt/5.15.2/gcc_64")
endif()



# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check https://doc.qt.io/qt/deployment-android.html for more information.
# They need to be set before the find_package( ...) calls below.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(OpenSSL REQUIRED)
find_package(QT NAMES Qt5 Qt6 COMPONENTS Widgets Svg Charts REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Network Widgets Svg Charts REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        fields_values.cpp
        fields_values.h
        graph.qrc
        graphics.cpp graphics.h customshadoweffect.cpp customshadoweffect.h)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(UpStorage
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(UpStorage SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(UpStorage
            ${PROJECT_SOURCES}
        )
    endif()
endif()

include_directories (${OpenSSL_INCLUDE_DIRS})
link_directories(UpStorage ${OpenSSL_LIBRARY_DIRS})
target_link_libraries(UpStorage PRIVATE Qt${QT_VERSION_MAJOR}::Network Qt${QT_VERSION_MAJOR}::Widgets OpenSSL::SSL Qt${QT_VERSION_MAJOR}::Svg Qt${QT_VERSION_MAJOR}::Charts)

set_target_properties(UpStorage PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(UpStorage)
endif()

