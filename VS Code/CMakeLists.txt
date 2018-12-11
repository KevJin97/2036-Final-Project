cmake_minimum_required(VERSION 3.6)
project(2036SkeletonCmake)

set(EXECUTABLE_NAME "2036SkeletonCmake")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
find_package(SFML 2 REQUIRED system window graphics network audio)
include_directories(${SFML_INCLUDE_DIR})

set(SOURCE_FILES
        main.cpp
        Game.cpp Game.h GameObject.cpp GameObject.h
        AnimatedGameObject.cpp AnimatedGameObject.h
        RegularGameObject.cpp RegularGameObject.h)

file(COPY "build/Mario.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/MasterChiefOriginal.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/MasterChiefOriginal1.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/Covenant1.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/Hunter.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/ChiefShip.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/Map.jpg" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/Crates.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/ChiefDance.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/shot2.png" DESTINATION "${CMAKE_BINARY_DIR}")
file(COPY "build/shot5.png" DESTINATION "${CMAKE_BINARY_DIR}")

add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})
target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})




