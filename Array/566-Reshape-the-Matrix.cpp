class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums.size() * nums[0].size() != r * c) return nums;
        vector<vector<int>> ret;
        ret.resize(r);
        int curr_r = 0, curr_c = 0;
        for(int i=0; i<nums.size(); ++i){
            for(int j=0; j<nums[i].size(); ++j){
                if(curr_c == 0) ret[curr_r].resize(c);
                ret[curr_r][curr_c] = nums[i][j];
                curr_c = (curr_c + 1) % c;
                if(curr_c == 0) ++curr_r;
            }
        }
        return ret;
    }
};
