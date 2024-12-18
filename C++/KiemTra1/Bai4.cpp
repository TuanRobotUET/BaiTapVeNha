#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib> // For atoi

using namespace std;

int sumCSV(const char* filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Cannot open file " << filename << endl;
        return 0; // Return 0 if the file cannot be opened
    }

    string line;
    int totalSum = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string value;

        while (getline(ss, value, ',')) {
            totalSum += atoi(value.c_str()); // Convert string to integer and add to total
        }
    }

    file.close();
    return totalSum;
}

