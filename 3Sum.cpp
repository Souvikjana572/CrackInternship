class Solution {

public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> >ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            // int sum=0-nums[i];
            if(i>0 && nums[i]==nums[i-1]) continue;
            int start=i+1,end=nums.size()-1;
            while(start<end){
                if(nums[start]+nums[end]+nums[i]==0){
                    vector<int>temp={nums[i],nums[start],nums[end]};
                    ans.push_back(temp);
                    start++;end--;
                    while(start<end && nums[start]==nums[start-1])start++;
                    while(start<end && nums[end]==nums[end+1])end--;
                }
                else if(nums[start]+nums[end]+nums[i]>0){
                    end--;
                }
                else start++;
            }
        }
        return ans;
    }
};
