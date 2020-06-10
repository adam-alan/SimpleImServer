cmake_minimum_required(VERSION 3.0.0)
project(SimpleImServer VERSION 0.1.0)

include(CTest)
enable_testing()

message(${PROJECT_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 17)
message(${CMAKE_CURRENT_LIST_DIR})
message(${CMAKE_BINARY_DIR})

add_subdirectory(infrastructure)
add_subdirectory(application)
add_subdirectory(socket)
add_executable(SimpleImServer main.cpp)

target_link_libraries(SimpleImServer spdlog fmt pqxx pthread Infrastructure Application Socket)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


