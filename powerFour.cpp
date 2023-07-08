// 342. Power of Four
class Solution {
public:
    bool isPowerOfFour(int n) {
        long ans = 0;
        for(int i = 0; i<31 ; i++){
            ans = pow(4,i);
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};
