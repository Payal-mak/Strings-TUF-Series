#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
           return "";
        }
            
        for(int i = 0; i < strs[0].size(); i++){
            // i: index of character in the first string
            for(int j = 1; j < strs.size(); j++){
                // j: index of string in the vector
                if(i >= strs[j].size() || strs[0][i] != strs[j][i]){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    string result1 = solution.longestCommonPrefix(strs1);
    cout << "Longest common prefix: \"" << result1 << "\"" << endl;

    return 0;
}
