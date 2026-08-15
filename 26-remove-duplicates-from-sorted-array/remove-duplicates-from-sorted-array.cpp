class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        // k tracks the index of the last unique element placed
        int k = 0;
        
        // Traverse the array starting from the second element
        for (int i = 1; i < nums.size(); ++i) {
            // Found a new unique element
            if (nums[i] != nums[k]) {
                k++;
                nums[k] = nums[i]; // Move unique element forward
            }
        }
        
        // Return the number of unique elements (1-based count)
        return k + 1;
    }
};