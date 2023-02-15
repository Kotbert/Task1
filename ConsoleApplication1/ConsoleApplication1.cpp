#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string inputString = "Success";
    string repeatList = "";
    string result = "";
    string indexedString = "";
    for (char c : inputString) {
        indexedString += tolower(c);
    }
    for (int i = 0; i < indexedString.length(); i++) {
        char someVal = indexedString[i];
        if (repeatList.find(someVal) != string::npos) {
            result += ')';
        }
        else {
            for (int y = i; y < indexedString.length(); y++) {
                if (y == indexedString.length() - 1) {
                    result += '(';
                }
                if (y != i && someVal == indexedString[y]) {
                    repeatList += indexedString[i];
                    result += ')';
                    break;
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}