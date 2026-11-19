class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> du;
        for(int x: nums){
            if(du.count(x)){
                return true;
            }
            du.insert(x);
        }
        return false;
    }
};