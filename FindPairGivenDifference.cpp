Class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
            if(x==0 && mpp[arr[i]]==2){
                return 1;
            }
            
        }
        if(x==0){
            return -1;
        }
        for(auto it: mpp){
            if(mpp.find(x+it.first)!=mpp.end()){
                    return 1;
            }
        }
        return -1;
    }
};
