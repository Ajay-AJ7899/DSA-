#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;

        // Step 1: keep only alphanumeric characters, convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        // Step 2: two-pointer palindrome check
        int left = 0;
        int right = cleaned.size() - 1;

        while (left < right) {
            if (cleaned[left] != cleaned[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    vector<string> tests = {
        "A man, a plan, a canal: Panama",
        "race a car",
        " ",
        "0P",
        "Madam",
        "No lemon, no melon"
    };

    for (string s : tests) {
        cout << "Input: \"" << s << "\"\n";
        cout << "Is Palindrome? "
             << (sol.isPalindrome(s) ? "true" : "false") << "\n\n";
    }

    return 0;
}
