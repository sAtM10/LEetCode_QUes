//977. Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>one; 
        for(int i = 0 ; i<nums.size() ; i++){
            int num = nums[i];
            one.push_back(num*num); 
        }
        sort(one.begin(),one.end());
        return one;
    }
};
