class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2);
        vector<int> count(n+1, 0);

        for(int i = 0; i < n; i++){
            count[nums[i]]++;
        }

        for(int j = 1; j <= n; j++){
            if(count[j] > 1) ans[0] = j;
            if(count[j] < 1) ans[1] = j;
        }

        return ans;
    }
};
