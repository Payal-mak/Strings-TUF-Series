#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDepth(const string& s) {
        int maxDepth = 0;
        int currentDepth = 0;

        for (char c : s) {
            if (c == '(') {
                currentDepth++;
                maxDepth = max(maxDepth, currentDepth);
            } else if (c == ')') {
                currentDepth--;
            }
        }
        return maxDepth;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "(1+(2*3)+((8)/4))+1";
    int result1 = solution.maxDepth(s1);
    cout << "Max depth of \"" << s1 << "\": " << result1 << endl;

    return 0;
}
