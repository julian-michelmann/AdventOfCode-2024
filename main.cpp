#include <iostream>

#include "src/InputReader.h"
#include "src/day01/PartOne.h"
#include "src/day01/PartTwo.h"

int main() {
    pair<vector<string>, vector<string> > input = InputReader::readInputAsTwoLists("01");
    std::cout << "Day 01 Part 01:" << std::endl;
    std::cout << PartOne::solve(input) << std::endl;

    std::cout << "Day 02 Part 02:" << std::endl;
    std::cout << PartTwo::solve(input) << std::endl;;

    return 0;
}
