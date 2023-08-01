//2520. Count the Digits That Divide a Number
class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count =0;
        while(n){
            int r = n%10;
            n=n/10;
            if(num%r==0){
                count++;
            }
        }
        return count;
        
    }
};
