class Solution {
public:
    vector<vector<string>>  
    groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>map;
        vector<string>new_strs(strs);
        vector<vector<string>>ans;
       for(int i=0;i<n;i++){
        sort(new_strs[i].begin(),new_strs[i].end());
        map[new_strs[i]].push_back(strs[i]);
       }
       for(auto& [key,value]:map){
            ans.push_back(value);
       }
    return ans;

    }
};
