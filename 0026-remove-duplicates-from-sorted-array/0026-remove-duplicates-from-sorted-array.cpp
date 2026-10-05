class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i= 0;
        int unique=1;
        int j=1;
        int n=nums.size();
        while(j<n){
            if(nums[j]==nums[j-1]){
                j++;
                continue;
            }
            nums[i+1]=nums[j];
            unique ++;
            i ++;
            j ++;
        }
        return unique;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna