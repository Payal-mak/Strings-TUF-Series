#include <iostream>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i = 0;

        // Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;
        
        // Determine the sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) 
            sign = (s[i++] == '+') ? 1 : -1;
        else if (i < n && !isdigit(s[i])) return 0;

        long long num = 0;
        // Process digits
        while (i < n && isdigit(s[i])) {
            num = num * 10 + s[i] - '0';
            if (sign == 1 && num > INT_MAX) 
                return INT_MAX;
            else if (sign == -1 && -num < INT_MIN)
                return INT_MIN;
            i++;
        }
        return sign * num;
    }
};

int main() {
    Solution solution;
    string test1 = "42";
    string test2 = "   -42";
    cout << "Input: \"" << test1 << "\" => Output: " << solution.myAtoi(test1) << endl;
    cout << "Input: \"" << test2 << "\" => Output: " << solution.myAtoi(test2) << endl;

    return 0;
}
