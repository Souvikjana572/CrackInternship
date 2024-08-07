class Solution {
public:
    int climbStairs(int n) {
        int ans,first=1,second=1;
        for(int i=1;i<n;i++){
            ans=first+second;
            second=first;
            first=ans;
        }
        return first;
    }
};
