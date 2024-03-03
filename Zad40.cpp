#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void resultOperation() {
    ifstream dataFile("data.txt");
    ofstream resultFile("result.txt");

    while (!dataFile.eof()) {
        string line;
        getline(dataFile, line);
        int length = line.length();
        int sum = 0;

        for (int i = 0; i < length; ++i) {
            sum += static_cast<int>(line[i] - '0');

            resultFile << line[i];
            if (i < length - 1) {
                resultFile << "+";
            }
            else {
                resultFile << "=";
            }
        }
        resultFile << sum << '\n';
    }
    dataFile.close();
    resultFile.close();
}

int main() {
    srand(time(nullptr));

    ofstream dataFile("data.txt");
    const int range = rand() % 1000 + 1;
    if (dataFile.is_open()) {
        for (int i = 0; i < range; ++i) {
            dataFile << rand() % 999999 + 1 << "\n";
        }
        dataFile.close();
    }
    resultOperation();
}
