//1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int numberOfDigits(int n){
        int cnt = 0;
        while(n > 0){
        n /= 10;
        cnt++;
        }
     return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i<nums.size() ; i++){
            if(numberOfDigits(nums[i])%2==0){
                result++;
            }
        }
        return result;
    }
};
