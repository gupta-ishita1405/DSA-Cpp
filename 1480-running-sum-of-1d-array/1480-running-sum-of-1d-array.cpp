class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>answer;
        int n=nums.size();
        for (int i =0;i<n;i++){
            int sum=0;
            for(int j=0;j<=i;j++){
                sum=sum+nums[j];
            }
            answer.push_back(sum);
        }

        return answer;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna