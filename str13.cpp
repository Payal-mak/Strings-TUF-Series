#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    std::string longestPalindrome(const std::string& s) {
        if (s.length() <= 1) {
            return s;
        }
        
        int max_len = 1;
        std::string max_str = s.substr(0, 1);
        
        for (int i = 0; i < s.length(); ++i) {
            for (int j = i + max_len; j <= s.length(); ++j) {
                if (j - i > max_len && isPalindrome(s.substr(i, j - i))) {
                    max_len = j - i;
                    max_str = s.substr(i, j - i);
                }
            }
        }

        return max_str;
    }

private:
    bool isPalindrome(const std::string& str) {
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            ++left;
            --right;
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    string test1 = "babad";
    string test2 = "cbbd";

    cout << "Longest palindrome in \"" << test1 << "\" is \"" << solution.longestPalindrome(test1) << "\"" << endl;
    cout << "Longest palindrome in \"" << test2 << "\" is \"" << solution.longestPalindrome(test2) << "\"" << endl;

    return 0;
}
