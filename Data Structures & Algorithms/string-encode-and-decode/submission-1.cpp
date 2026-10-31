
class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs.size();i++){
            s+=to_string(strs[i].size())+'#'+strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        
        string num="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
               int n=stoi(num);
               string sub=s.substr(i+1,n);
               ans.push_back(sub);
               num=""; 
               i+=n;
            }else{
            num+=s[i];
            }
        }
        return ans;
    }
};
