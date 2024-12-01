//
// Created by jmichelm on 01.12.24.
//

#include "PartTwoTest.h"
#include <gtest/gtest.h>
#include "../../src/InputReader.h"
#include "../../src/day01/PartTwo.h"


TEST(PartTwoTest, solve) {
    const pair<vector<string>, vector<string> > input = InputReader::readInputAsTwoLists("01", "_test");

    const long result = PartTwo::solve(input);

    ASSERT_EQ(31, result);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
