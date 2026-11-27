class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end = s.size() - 1;
        while(start<=end){
            if(!isalnum(static_cast<unsigned char>(s[start]))){
                start++;
                continue;
            }
            else if(!isalnum(static_cast<unsigned char>(s[end]))){
                end--;
                continue;
            }
            if(tolower(static_cast<unsigned char>(s[start])) == tolower(static_cast<unsigned char>(s[end]))){
                start++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }
};
