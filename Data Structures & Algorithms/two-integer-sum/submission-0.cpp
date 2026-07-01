class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        

        map<int, int>indices;

        for( int i = 0 ; i < n ; i++){
            int rem = target - nums[i];

            if( indices.find(rem) != indices.end()){
                return {indices[rem], i };
            }
            indices[nums[i]] =i;
        }
        return {};
        
    }
};
