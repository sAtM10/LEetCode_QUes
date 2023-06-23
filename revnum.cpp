// 7. Reverse number question Leetcode
//CPP

class Solution {
public:
    int reverse(long long x) {
        long long revnum = 0;
        if(x<INT_MIN){
            return 0;
        }
        if(x>0){
            while(x>0){
            int ld = x%10;
            revnum = (revnum*10)+ld;
            x =x/10;
        }

        }
        else{
            long long y;
            y = x*(-1);
            while(y>0){
                int ld=y%10;
                revnum = (revnum*10)+ld;
                y=y/10;
            }
            revnum = revnum*(-1);

        }
        if(revnum>INT_MAX || revnum<INT_MIN){
            return 0;
        }
        return revnum;
    }
};
