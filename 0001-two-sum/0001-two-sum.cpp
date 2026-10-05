class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j;
        for (i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(target==nums[i]+nums[j]){return{i,j};}
                }
               }
            
        return{}; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna