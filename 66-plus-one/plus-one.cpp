class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // Return early if no carry is generated
            }
            digits[i] = 0; // If digit is 9, it becomes 0 and carries 1 to the left
        }
        
        // If all digits were 9 (e.g., [9, 9, 9] -> [1, 0, 0, 0])
        digits.insert(digits.begin(), 1);
        return digits;
        
    }
};