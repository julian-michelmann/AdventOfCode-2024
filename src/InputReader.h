//
// Created by jmichelm on 01.12.24.
//

#ifndef INPUTREADER_H
#define INPUTREADER_H
#include <string>
#include <vector>

using namespace std;

class InputReader {
public:
    static vector<string> readInput(const string &day, const string &postfix = "");

    static std::pair<vector<string>, vector<string> >
    readInputAsTwoLists(const string &day, const string &postfix = "");

private:
    static pair<string, string> splitByDelimiter(const string &line, const string &delimiter);
};

#endif //INPUTREADER_H
