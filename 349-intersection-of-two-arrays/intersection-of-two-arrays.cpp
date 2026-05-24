class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int> mp;

        for(int x:nums1){
            mp[x]=1;
        }
        for(int x:nums2){
            if(mp.count(x)){
                v.push_back(x);
                mp.erase(x);
            }
        }
        return v;
        
    }
};