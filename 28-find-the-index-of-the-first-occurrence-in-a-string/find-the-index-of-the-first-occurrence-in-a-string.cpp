class Solution {
public:
    int strStr(string haystack, string needle) {
    int n = haystack.length();
        int m = needle.length();
        
        // If needle is longer than haystack, it can't be a substring
        if (m > n) return -1;
        
        // Slide a window of size m across haystack
        for (int i = 0; i <= n - m; ++i) {
            // Check if substring starting at index i matches needle
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        
        return -1;    
    }
};