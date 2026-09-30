class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i < j ){
            if (!isalnum(s[i])){
                i=i+1;
                continue;
            }
            else if (!isalnum(s[j])){
                j=j-1;
                continue;
            }
            else if (tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};