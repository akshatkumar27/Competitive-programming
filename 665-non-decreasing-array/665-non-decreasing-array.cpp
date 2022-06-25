class Solution {
public:
    bool checkPossibility(vector<int>& nums) 
    
    {
        int conflict=0;
        int n=nums.size();
        if(n<=2) return true;
        
        for(int i=1;i<=n-1;i++)
        {
            if(nums[i-1]>nums[i]) 
            {
                if(conflict==1)
                    return false;
                if(i-2>=0 && i+1<n && nums[i-2]>nums[i] && nums[i-1]>nums[i+1])
                    return false;
                
                 conflict++; 
            }
        }
        return true;
    }
};