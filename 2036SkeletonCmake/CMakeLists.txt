
cmake_minimum_required(VERSION 3.2)
project(2036SkeletonCmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(2036SkeletonCmake
        build/content/Mario.jpg
        build/content/Mario.png
        build/2036SkeletonCmake
        build/cmake_install.cmake
        build/CMakeCache.txt
        build/Makefile
        build/Mario.jpg
        build/Mario.png
        cmake/FindSFML.cmake
        cmake-build-debug/content/Mario.png
        cmake-build-debug/2036SkeletonCmake
        cmake-build-debug/2036SkeletonCmake.cbp
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/Mario.jpg
        cmake-build-debug/Mario.png
        CMakeLists.txt
        Game.cpp
        Game.h
        GameObject.cpp
        GameObject.h
        main.cpp)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(2036SkeletonCmake ${SFML_LIBRARIES})
endif()
