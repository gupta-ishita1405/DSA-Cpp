class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int>count(26,0);
        for(int c:s){
            count[c-'a']++;
        }
        for (int c:t){
            count[c-'a']--;
        }
        for(int x:count){
            if(x!=0) return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna