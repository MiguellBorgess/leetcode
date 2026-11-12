class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> check(n);
        vector<int> ans;

        for(int i = 0; i < n; i++){
            check[nums[i]-1] = 1;
        }

        for(int i = 0; i < n; i++){
            if(!check[i]) ans.push_back(i+1);
        }
        
        return ans;
    }
};
