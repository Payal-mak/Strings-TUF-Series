#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        return s.length() == goal.length() && (s + s).find(goal) != string::npos;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "abcde";
    string goal1 = "cdeab";
    bool result1 = solution.rotateString(s1, goal1);
    cout << "Can \"" << s1 << "\" be rotated to become \"" << goal1 << "\"? " << (result1 ? "Yes" : "No") << endl;

    return 0;
}
