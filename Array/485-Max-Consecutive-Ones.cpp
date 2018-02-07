class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cons = 0;
        int tmp_cons = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == 1){
                ++tmp_cons;
            }
            else{
                max_cons = max(max_cons, tmp_cons);
                tmp_cons = 0;
            }
        }
        max_cons = max(max_cons, tmp_cons);
        return max_cons;
    }
};
