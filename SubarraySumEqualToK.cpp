class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int sum=0;
        int total=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(m.count(sum-k)){
                total+=m[sum-k];
                m[sum]++;

            }
            else
            m[sum]++;
        }
        return total;
    }
};
