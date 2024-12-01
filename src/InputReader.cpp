//
// Created by jmichelm on 01.12.24.
//

#include "InputReader.h"

#include <fstream>
#include <vector>

using namespace std;

vector<string> InputReader::readInput(const string &day, const string &postfix) {
    vector<string> input;
    std::ifstream file;
    string line;

    ifstream MyReadFile("../input/day" + day + postfix + ".txt");

    while (getline(MyReadFile, line)) {
        input.push_back(line);
    }

    MyReadFile.close();

    return input;
}

pair<vector<string>, vector<string> > InputReader::readInputAsTwoLists(const string &day, const string &postfix) {
    vector<string> vectorOne;
    vector<string> vectorTwo;

    const vector<string> input = readInput(day, postfix);

    for (const string &line: input) {
        const pair<string, string> split = splitByDelimiter(line, "   ");
        vectorOne.push_back(split.first);
        vectorTwo.push_back(split.second);
    }

    return make_pair(vectorOne, vectorTwo);
}

pair<string, string> InputReader::splitByDelimiter(const string &line, const string &delimiter) {
    const size_t start = 0;
    const size_t end = line.find(delimiter);

    const string frist = line.substr(start, end - start);
    const string second = line.substr(end + delimiter.length());

    return make_pair(frist, second);
}
