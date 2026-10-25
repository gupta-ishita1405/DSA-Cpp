class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0 , maxsum=INT_MIN;
        for(int x:nums){
            currsum += x;
            maxsum= max(currsum,maxsum);
            if(currsum<0) currsum =0;
        }
        return maxsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna