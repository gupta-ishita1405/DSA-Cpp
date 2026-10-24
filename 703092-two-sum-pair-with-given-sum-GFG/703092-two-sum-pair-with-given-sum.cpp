class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        sort(begin(arr),end(arr));
        int i=0;
        int j=n-1;
        while(i<j){
            int sum=arr[i]+arr[j];
            if (sum> target){
                j--;
            }
            else if(sum<target){
                i++;
            }
            else{
                return true;
            }
           
        }
         return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna