class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        
        unordered_map<int,int>mp;
        for(auto it=m.begin();it!=m.end();it++){
            if(mp[it->second]==1)
                return false;
            mp[it->second]++;
        }
        return true;
    }
};
