class Solution {
public:
    
    int removePalindromeSub(string s) {
        int ans=1;
        int j=s.size()-1;
       
          for (int i =0;i<s.size();i++){
             if(s[i]==s[j]){
                 j--;
             }
             else if(s[i]!=s[j]){
                  return ans+1;
             } 
         }  
        ans=1;
        return ans; 
    }
};