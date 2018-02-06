class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;

        vector<int> ret;
        while(i != j) {
            int sum = nums[i] + nums[j];
            if (sum == target) {
                ret.push_back(i);
                ret.push_back(j);
                return ret;
            }else if(sum > target){
                j--;
            }else{
                i++;
            }
        }
        return ret;
    }
};
