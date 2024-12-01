cmake_minimum_required(VERSION 3.30)
project(advent_of_code_2024)

set(CMAKE_CXX_STANDARD 20)

# Add main application target
add_executable(advent_of_code_2024
        main.cpp
        src/day01/PartOne.cpp
        src/day01/PartOne.h
        src/InputReader.cpp
        src/InputReader.h
        src/day01/PartTwo.cpp
        src/day01/PartTwo.h
)

file(GLOB_RECURSE SOURCES
        "src/*.cpp"
)

add_executable(google_tests
        ${SOURCES}
        test/InputReaderTest.cpp
        test/InputReaderTest.h
        test/day01/PartOneTest.cpp
        test/day01/PartOneTest.h
        test/day01/PartTwoTest.cpp
        test/day01/PartTwoTest.h
)

find_package(GTest REQUIRED)
target_link_libraries(google_tests GTest::gtest GTest::gtest_main)

enable_testing()
add_test(NAME google_tests COMMAND google_tests)
