class Solution {
public:
    int minPartitions(string n) {
        
        int ans;
        ans=0;
        for(auto a:n){
            int cur=a-48;
            ans=max(ans,cur);
        }
        return ans;
        
    }
};