cmake_minimum_required(VERSION 3.16)
project(tt-no-wm CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ttnowm
    src/main.cpp
    src/fetcher.cpp
    src/cleaner.cpp
    src/queue.cpp
)

target_include_directories(ttnowm PRIVATE include)

if(WIN32)
    target_link_libraries(ttnowm PRIVATE userenv)
endif()
