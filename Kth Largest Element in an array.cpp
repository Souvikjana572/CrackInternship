class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>a;
        for(int i=0;i<nums.size();i++)
            a.push(nums[i]);
        for(int i=0;i<k-1;i++){
            a.pop();
        }
        return a.top();
    }
};
