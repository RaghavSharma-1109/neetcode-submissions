class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool dup=false;
        unordered_set<int> du;
        for(int x: nums){
            if(du.count(x)){
                dup=true;
                break;
            }
            du.insert(x);
        }
        return dup;
    }
};