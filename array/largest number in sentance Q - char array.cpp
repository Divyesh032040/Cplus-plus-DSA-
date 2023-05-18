#include<iostream>
using namespace std;

int main() {
    // largest number of characters in a sentence
    const int maxSize = 100;
    char arr[maxSize];

    cin.getline(arr, maxSize);

    int i = 0;
    int currLen = 0;
    int maxLen = 0;

    while (arr[i] != '\0') {
        if (arr[i] == ' ') {
            if (currLen > maxLen) {
                maxLen = currLen;
            }
            currLen = 0;
        } else {
            currLen++;
        }
        i++;
    }

    if (currLen > maxLen) {
        maxLen = currLen;
    }

    cout << maxLen << endl;

    return 0;
}
