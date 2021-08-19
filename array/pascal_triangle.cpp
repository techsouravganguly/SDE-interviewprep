class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> ans1(i);
            ans1[0] = 1, ans1[i-1] = 1;
            for(int j=1;j<i-1;j++){
                ans1[j] = ans[i-2][j-1]+ans[i-2][j];
            }
            ans.push_back(ans1);
        }
        return ans;
        
    }
};
