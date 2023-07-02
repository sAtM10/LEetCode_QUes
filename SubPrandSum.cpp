//1281. Subtract the Product and Sum of Digits of an Integer
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while(n!=0){
            int ld = n%10;
            sum = sum + ld;
            product = product*ld;
            n=n/10;
        }
        return product - sum;
    }
};
