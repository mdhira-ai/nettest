cmake_minimum_required(VERSION 3.10.0)
project(nettg VERSION 0.1.0 LANGUAGES C CXX)



# Enable vcpkg integration
set(CMAKE_PREFIX_PATH "/home/kali/Desktop/c_programing/vcpkg/installed/x64-linux/share/")
find_package(cpr REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

add_executable(nettg main.cpp)
target_link_libraries(nettg cpr::cpr nlohmann_json::nlohmann_json)
