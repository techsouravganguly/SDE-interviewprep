class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int a1 = INT_MIN, a2 = INT_MIN;
        int c1=0, c2=0;
        for(int i=0;i<nums.size();i++){
            if(a1 == nums[i] ) c1++;
            else if(a2 == nums[i])c2++;
            else if(c1==0){
                a1 = nums[i];
                c1 = 1;
            }
            else if(c2==0){
                a2 = nums[i];
                c2 = 1;
            }
            else{
                c1--;
                c2--;
            }
            
        }
        c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(a1==nums[i]) c1++;
            if(a2==nums[i]) c2++;
        }
        
        if(c1>nums.size()/3)
            ans.push_back(a1);
        if(c2>nums.size()/3)
            ans.push_back(a2);
            return ans;
        }

};
