#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {  // Check if the digit is odd
                return num.substr(0, i + 1);  // Return the substring from start to the current odd digit
            }
        }
        return "";  // If no odd digit is found, return an empty string
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    string num1 = "35427";
    string result1 = solution.largestOddNumber(num1);
    cout << "Original string: \"" << num1 << "\"" << endl;
    cout << "Largest odd number: \"" << result1 << "\"" << endl;
    
    // Test case 2
    string num2 = "42068";
    string result2 = solution.largestOddNumber(num2);
    cout << "Original string: \"" << num2 << "\"" << endl;
    cout << "Largest odd number: \"" << result2 << "\"" << endl;

    // Test case 3
    string num3 = "123456789";
    string result3 = solution.largestOddNumber(num3);
    cout << "Original string: \"" << num3 << "\"" << endl;
    cout << "Largest odd number: \"" << result3 << "\"" << endl;

    return 0;
}
