another solution 
next_permutation(nums.begin(), nums.end());

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==0||nums.size()<=1) return;
        int i = nums.size()-2;
        while(i>=0 && nums[i]>=nums[i+1]) i--;
        if(i>=0){
            int j = nums.size()-1;
            while(nums[j]<=nums[i]) j--;
            int tmp;
            tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
        }
        reverse(nums.begin()+i+1,nums.end());
    }
};
