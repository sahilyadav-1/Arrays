class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        int sum=0;
        int i=0;
        int j=0;
        for(i=0;i<len;i++){
            for(j=i+1;j<len;j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    return{i,j};
                }
            }
        }
        return{-1,-1};
    }
};
