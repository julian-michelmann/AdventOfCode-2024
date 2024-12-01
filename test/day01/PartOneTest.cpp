//
// Created by jmichelm on 01.12.24.
//

#include "PartOneTest.h"
#include <gtest/gtest.h>
#include "../../src/day01/PartOne.h"
#include "../../src/InputReader.h"


TEST(PartOneTest, solve) {
    const pair<vector<string>, vector<string> > input = InputReader::readInputAsTwoLists("01", "_test");

    const long result = PartOne::solve(input);

    ASSERT_EQ(11, result);
}
