#include <iostream>
#include <fstream>
#include <stack>
#include <queue>

#include "ArgumentManager.h"

using namespace std;

int main(int argc, char* argv[]) {

    ArgumentManager am(argc, argv);

    //ifstream input(am.get("input"));
    //ofstream output(am.get("output"));

    ifstream input("input1.txt");
    //ofstream output("")

    stack<char> stackRead;

    return 0;
}
