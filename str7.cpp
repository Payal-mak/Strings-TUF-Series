#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths are not equal, s and t cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Frequency array to count occurrences of each character in the alphabet
        int freq[26] = {0};

        // Increase frequency for characters in s, decrease for characters in t
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        // Check if all frequencies are zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        // If all frequencies are zero, s and t are anagrams
        return true;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "anagram";
    string t1 = "nagaram";
    bool result1 = solution.isAnagram(s1, t1);
    cout << "Is \"" << s1 << "\" an anagram of \"" << t1 << "\"? " << (result1 ? "Yes" : "No") << endl;

    return 0;
}
