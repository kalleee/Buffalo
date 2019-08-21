include_directories(../Buffalo/src)
add_executable(Sandbox src/SandboxApp.cpp)
target_link_libraries(Sandbox Buffalo)