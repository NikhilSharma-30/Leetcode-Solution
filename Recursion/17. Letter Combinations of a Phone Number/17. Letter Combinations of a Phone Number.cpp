class Solution {
public:
    unordered_map<char,string>mp={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    void solve(int i,string digits,vector<string>&ans,string curr){
        int n=digits.size();
        if(curr.size()>n){
            return;
        }
        if(curr.size()==n){
            ans.push_back(curr);
            return;
        }
        if(i>=n) return;
        if(digits[i]!='7' && digits[i]!='9'){
            string s=mp[digits[i]];
            for(int k=0;k<3;k++){
                curr.push_back(s[k]);
                solve(i+1,digits,ans,curr);
                curr.pop_back();
            }
        }
        else{
            string s=mp[digits[i]];
            for(int k=0;k<4;k++){
                curr.push_back(s[k]);
                solve(i+1,digits,ans,curr);
                curr.pop_back();
            }
        }
        return;

    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        vector<string>ans;
        int n=digits.size();
        string curr="";
        solve(0,digits,ans,curr);
        return ans;
        
    }
};
