#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(const string& s) {
        string ans = "";
        int i = 0;
        int n = s.size();

        while (i < n) {
            // Skip spaces
            while (i < n && s[i] == ' ') {
                i++;
            }
            
            // Collect a word
            string temp = "";
            while (i < n && s[i] != ' ') {
                temp += s[i];
                i++;
            }
            
            // Add the word to the result in reverse order
            if (temp.size() > 0) {
                if (ans.size() > 0) {
                    ans = temp + " " + ans;
                } else {
                    ans = temp;
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;
    string test1 = "the sky is blue";
    string test2 = "  hello world  ";

    cout << "Reversed words in \"" << test1 << "\" is \"" << solution.reverseWords(test1) << "\"" << endl;
    cout << "Reversed words in \"" << test2 << "\" is \"" << solution.reverseWords(test2) << "\"" << endl;
    return 0;
}
