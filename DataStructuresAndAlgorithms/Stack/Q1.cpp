class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<bool> mark(n+1);
        vector<string> ans;
        int max = 0;
        int t = target.size();

        for(int i = 0; i < t; i++){
            mark[target[i]] = 1;
            if(i == t-1) max = target[i];
        }

        for(int j = 1; j <= n; j++){
            ans.push_back("Push");
            if(j == max) break;
            if(!mark[j]) ans.push_back("Pop");
        }

        return ans;
    }
};
