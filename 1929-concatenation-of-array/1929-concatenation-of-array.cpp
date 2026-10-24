class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>answer;
        int n=nums.size();
        for (int i =0;i<n;i++){
            answer.push_back(nums[i]);

        }
        for (int i =0;i<n;i++){
            answer.push_back(nums[i]);

        }
        return answer ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna