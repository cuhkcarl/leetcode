class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        if(nums.size() == 1){
            return 0;
        }
        // 保证第一第二大的数索引不能重合，否则下面有可能找不到第二大（第一个数就为第一大的情况下）
        int first_index = nums[0] > nums[1] ? 0 : 1;
        int second_index = 1 - first_index;
        // 找第一第二大索引
        for(int i=2; i<nums.size(); ++i){
            if(nums[i] >= nums[first_index]){
                second_index = first_index;
                first_index = i;
            }else if(nums[i] >= nums[second_index]){
                second_index = i;
            }
        }
        cout << first_index << second_index;

        if(nums[first_index] < nums[second_index] * 2){
            return -1;
        }
        return first_index;
    }
};
