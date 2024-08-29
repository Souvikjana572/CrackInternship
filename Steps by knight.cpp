class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    int row[8]={-2,-2,2,2,1,-1,1,-1};
      int col[8]={ -1,1, -1,1,-2,-2,2,2};
    int n;
    bool valid(int i, int j){
        return i<n&&j<n&&i>=0&&j>=0;
    }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    if(KnightPos[0]==TargetPos[0]&&KnightPos[1]==TargetPos[1])return 0;
	    
	    n=N;
	    vector<vector<bool>> visited(N, vector<bool>(N, 0));
	   queue<pair<pair<int, int>, int>> q;
	    q.push(make_pair(make_pair(KnightPos[0]-1,KnightPos[1]-1),0));
	    while(!q.empty()){
	        int i=q.front().first.first;
	        int j=q.front().first.second;
	        int dist=q.front().second;
	        q.pop();
	        if(i==TargetPos[0]-1&&j==TargetPos[1]-1)
	        return dist;
	        for(int k=0;k<8;k++){
	            if(valid(i+row[k],j+col[k]) && !visited[i+row[k]][j+col[k]]){
	                q.push({{i+row[k],j+col[k]},dist+1});
	                visited[i+row[k]][j+col[k]]=1;
	            }
	        }
	    }
	    return -1;
	}
};
