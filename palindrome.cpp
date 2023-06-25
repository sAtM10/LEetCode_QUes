//9. Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        long long pal = 0;
        int dup = x;
        while(x>0){
            int ld = x%10;
            pal = (pal*10)+ld;
            x=x/10;
        }
        if(dup == pal){
            return true;
        }
        return false;
    }
};
