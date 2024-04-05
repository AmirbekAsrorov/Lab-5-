#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string str) {
    if (str.length() == 0 || str.length() == 1) {
        return true;
    }
    if (str[0] != str[str.length() - 1]) {
        return false;
    }
    return isPalindrome(str.substr(1, str.length() - 2));
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    if (isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}
