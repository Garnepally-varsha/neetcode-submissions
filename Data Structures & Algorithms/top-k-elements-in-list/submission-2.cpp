class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<int>ans;
        vector<pair<int,int>>res;
        for(auto& [key,value]:m){
            res.push_back({key,value});
        }
        sort(res.begin(),res.end(),[](const auto& a, const auto& b ){
            return a.second>b.second;
        });
        for(int i=0;i<k;i++){
            ans.push_back(res[i].first);
        }

        return ans;
    }
};
