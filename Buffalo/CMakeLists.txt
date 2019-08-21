if(UNIX)
    add_compile_definitions(BF_BUILD_LIB)
elseif(WIN32)
    add_compile_definitions(BF_BUILD_DLL)
else()
    message(${CMAKE_SYSTEM_NAME} not supported)
endif()

set(SOURCE_DIR src/Buffalo/)

set(SOURCE_FILES    ${SOURCE_DIR}/Application.cpp
                    ${SOURCE_DIR}/Log.cpp)

add_library(Buffalo SHARED ${SOURCE_FILES})