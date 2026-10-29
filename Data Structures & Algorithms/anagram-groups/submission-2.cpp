class Solution {
public:
    vector<vector<string>>  
    groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>map;
    
        vector<vector<string>>ans;
       for(int i=0;i<n;i++){
        string k=strs[i];
        sort(k.begin(),k.end());
        map[k].push_back(strs[i]);
       }
       for(auto& [key,value]:map){
            ans.push_back(value);
       }
    return ans;

    }
};
