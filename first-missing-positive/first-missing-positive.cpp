class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int minor = INT_MAX, temp=0;
        std::sort(nums.begin(), nums.end());
        
        for(auto it_nums = nums.begin(); it_nums!=nums.end();it_nums++){
            if((*it_nums-temp)>1){
                return temp+1;
            }else{
                if(*it_nums>temp)
                    temp = *it_nums;
            }
        }
        return temp+1;
    }
};