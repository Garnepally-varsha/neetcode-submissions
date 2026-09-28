class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            m1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            m2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(m1[i]!=m2[i]) return false;
        }
        return true;
    }
};
