cmake_minimum_required(VERSION 2.8)
project(tests)
enable_testing()
set(SOURCE_FILES BinTree_test.cpp )
set(BINTREE_DIR ../src)
set(BOOST_LIBRARYDIR, /usr/include/boost)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(tests ${SOURCE_FILES})
find_package(Boost
        1.54.0
        COMPONENTS
        unit_test_framework
        REQUIRED)
include_directories(${Boost_INCLUDE_DIRS} ${BINTREE_DIR})
target_link_libraries(tests ${Boost_LIBRARIES})