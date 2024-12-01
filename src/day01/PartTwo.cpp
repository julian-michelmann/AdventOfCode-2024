//
// Created by jmichelm on 01.12.24.
//

#include "PartTwo.h"
#include <map>

using namespace std;

long PartTwo::solve(const pair<vector<string>, vector<string> > &input) {
    vector<string> firstList = input.first;
    vector<string> secondList = input.second;

    long result = 0;

    for (const auto &number: firstList) {
        long amountOfOccurrences = count(secondList.begin(), secondList.end(), number);

        result += stol(number) * amountOfOccurrences;
    }

    return result;
}
