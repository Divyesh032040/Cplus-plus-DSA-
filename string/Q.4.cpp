#include <iostream>
#include <string>
using namespace std;

void stringCombination(string &input, int index, string current) {
    if (index == input.length()) {
        cout << current << " ";
        return;
    }

    stringCombination(input, index + 1, current + input[index]);  
    stringCombination(input, index + 1, current + char(toupper(input[index])));  
    stringCombination(input, index + 1, current + '0');  
    for (char digit = '1'; digit <= '9'; digit++) {
        stringCombination(input, index + 1, current + digit); 
    }
}

int main() {
    string input = "ab";
    stringCombination(input, 0, "");

    return 0;
}
