Yashvesh Singh 24070123138
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
        left++;
        right--;
    }

    cout << "The string is a palindrome." << endl;
    return 0;
}
output:
Enter a string: madam
The string is a palindrome.
