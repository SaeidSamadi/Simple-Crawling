cmake_minimum_required(VERSION 3.1)

set(CXX_DISABLE_WERROR 1)
set(CMAKE_CXX_STANDARD 11)

set(PROJECT_NAME Crawling)
set(PROJECT_DESCRIPTION "Crawling")
set(PROJECT_URL "")

project(${PROJECT_NAME} CXX)

find_package(mc_rtc REQUIRED)

add_subdirectory(src)

set(AROBASE "@")
configure_file(etc/Crawling.in.conf "${CMAKE_CURRENT_BINARY_DIR}/etc/Crawling.conf")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/etc/Crawling.conf" DESTINATION "${MC_CONTROLLER_INSTALL_PREFIX}/etc")

