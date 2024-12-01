//
// Created by jmichelm on 30.11.24.
//

#include "PartOne.h"

#include <vector>

using namespace std;

PartOne::PartOne() = default;

long PartOne::solve(const pair<vector<string>, vector<string> > &input) {
    vector<string> firstList = input.first;
    vector<string> secondList = input.second;

    ranges::sort(firstList);
    ranges::sort(secondList);

    vector<long> differences;

    for (long i = 0; i < firstList.size(); i++) {
        long result = abs(stoi(firstList[i]) - stoi(secondList[i]));

        differences.push_back(result);
    }

    long result = 0;
    for (const long difference: differences) {
        result += difference;
    }

    return result;
}
