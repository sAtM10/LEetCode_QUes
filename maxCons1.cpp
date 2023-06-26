//485. Max Consecutive Ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int m = 0;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==0){
              count = 0;
            }
            else{
                count++;
                m = max(count,m);
            }
        }
        return m;
        return 0;
    }
};
