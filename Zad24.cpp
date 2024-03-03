//Program to check if a Char input in an Array is a Palindrome
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    constexpr int MAX = 30;
    char phraseArray[MAX];

    cout << "Enter a phrase (max " << MAX << " characters):\n";
    cin.getline(phraseArray, MAX);

    const unsigned long phraseLength = strlen(phraseArray);

    bool isPalindrome = true;
    for(int i = 0; i < phraseLength/2; i++){
        if (tolower(phraseArray[i]) != tolower(phraseArray[phraseLength - i - 1])) {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) {
        cout << "Phrase is a palindrome.";
    }
    else {
        cout << "Phrase is not a palindrome.";
    }
    return 0;
}