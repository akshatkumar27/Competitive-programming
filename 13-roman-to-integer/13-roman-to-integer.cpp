class Solution {
public:
    int romanToInt(string s) {
     
    unordered_map<char, int> roman;
    
    roman.insert({'M',1000});
    roman.insert({'D',500});
    roman.insert({'C',100});
    roman.insert({'L',50});
    roman.insert({'X',10});
    roman.insert({'V',5});
    roman.insert({'I',1});

	int res = roman[s.back()];
       
	for(int i = s.size()-2;i>=0; i--) {
		if(roman[s[i]] < roman[s[i + 1]]) 
            res -= roman[s[i]];
		else 
            res += roman[s[i]];
	}
	return res;
    }
};