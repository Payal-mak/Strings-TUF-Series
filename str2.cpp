#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
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
    string s = "the sky is blue";
    string result = solution.reverseWords(s);
    cout << "Original string: \"" << s << "\"" << endl;
    cout << "Reversed words: \"" << result << "\"" << endl;
    return 0;
}
