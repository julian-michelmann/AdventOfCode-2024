//
// Created by jmichelm on 01.12.24.
//

#include "../src/InputReader.h"
#include "InputReaderTest.h"
#include <gtest/gtest.h>

TEST(InputReaderTest, readInput) {
    const std::vector<string> input = InputReader::readInput("01", "_test");

    ASSERT_EQ(6, input.size());
    ASSERT_EQ("3   4", input.front());
    ASSERT_EQ("3   3", input.back());
}

TEST(InputReaderTest, readInputAsTwoLists) {
    const pair<std::vector<string>, std::vector<string>> input = InputReader::readInputAsTwoLists("01", "_test");

    ASSERT_EQ(6, input.first.size());
    ASSERT_EQ("3", input.first.front());
    ASSERT_EQ("2", input.first.at(2));
    ASSERT_EQ("3", input.first.back());

    ASSERT_EQ(6, input.second.size());
    ASSERT_EQ("4", input.second.front());
    ASSERT_EQ("5", input.second.at(2));
    ASSERT_EQ("3", input.second.back());
}

