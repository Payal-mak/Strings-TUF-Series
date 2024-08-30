#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string result;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (count > 0) {
                    result += s[i];
                }
                count++;
            } else {
                count--;
                if (count > 0) {
                    result += s[i];
                }
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    string s = "(()())(())";
    string result = solution.removeOuterParentheses(s);
    cout << "Original string: " << s << endl;
    cout << "After removing outer parentheses: " << result << endl;
    return 0;
}
