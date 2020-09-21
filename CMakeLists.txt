cmake_minimum_required(VERSION 3.0.0)
project(SimpleImServer VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)


add_subdirectory(data_model)
add_subdirectory(db_module)
add_subdirectory(socket)
add_executable(SimpleImServer main.cpp)

target_link_libraries(SimpleImServer spdlog fmt pqxx pthread data_model db_module socket tbb)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


