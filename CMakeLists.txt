project(Buffalo)
cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)

include_directories(Buffalo/vendor/spdlog/include)

if(UNIX)
    add_compile_definitions(BF_PLATFORM_LINUX)
elseif(WIN32)
    add_compile_definitions(BF_PLATFORM_WINDOWS)
else()
    message(${CMAKE_SYSTEM_NAME} not supported)
endif()

add_subdirectory(Sandbox)
add_subdirectory(Buffalo)