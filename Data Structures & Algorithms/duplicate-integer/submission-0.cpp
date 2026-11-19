class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool dup=false;
        unordered_set<int> du;
        for(int x: nums){
            int temp = x;
            if(du.count(temp)){
                dup=true;
                break;
            }
            du.insert(temp);
        }
        return dup;
    }
};