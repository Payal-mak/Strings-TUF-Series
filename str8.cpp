#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        // Map to store the frequency of each character
        unordered_map<char, int> mp;
        // Priority queue to sort characters by frequency
        priority_queue<pair<int, char>> pq;
        // String to store the result
        string ans = "";

        // Count the frequency of each character in the string
        for (char ch : s) {
            mp[ch]++;
        }

        // Push characters and their frequencies into the priority queue
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        // Build the result string based on frequency
        while (!pq.empty()) {
            auto temp = pq.top();
            int freq = temp.first;
            char ch = temp.second;

            ans += string(freq, ch);
            pq.pop();
        }

        return ans;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "tree";
    string result1 = solution.frequencySort(s1);
    cout << "Frequency sorted string of \"" << s1 << "\": \"" << result1 << "\"" << endl;

    return 0;
}
