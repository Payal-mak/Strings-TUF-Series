#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Create mappings for characters in 's' and 't'
        int mappingS[256] = {0}; // Initialize to zero for all characters
        int mappingT[256] = {0}; // Initialize to zero for all characters
        int length = s.size();    // Get the size of the strings
      
        // Loop through each character in both strings
        for (int i = 0; i < length; ++i) {
            char charS = s[i]; // Character from string 's'
            char charT = t[i]; // Character from string 't'
          
            // Check if the current mapping does not match
            if (mappingS[charS] != mappingT[charT]) {
                return false; // If mappings don't match, strings are not isomorphic
            }
          
            // Update the mappings for the current characters
            // We use i + 1 because the default value is 0 
            // and we want to differentiate between uninitialized and first character (at 0 index)
            mappingS[charS] = mappingT[charT] = i + 1;
        }
      
        // If all mappings matched, strings are isomorphic
        return true;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "egg";
    string t1 = "add";
    bool result1 = solution.isIsomorphic(s1, t1);
    cout << "Is \"" << s1 << "\" isomorphic to \"" << t1 << "\"? " << (result1 ? "Yes" : "No") << endl;

    return 0;
}
