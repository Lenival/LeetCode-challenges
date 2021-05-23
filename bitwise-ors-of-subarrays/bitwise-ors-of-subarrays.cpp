class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int temp, start=0, step, end = arr.size();
        unordered_set<int> processed_set(arr.begin(),arr.end());
        vector<int> reference_arr(end);        
        auto it_set = processed_set.end();
        for(step=0; step<end-1; step++){
            temp=arr[step];
            for(start = step+1; (start < end) ; start++ ){
                temp |= arr[start];
                if((temp==reference_arr[start])&&(step>0)){
                    break;
                }
				reference_arr[start] = temp;
                 processed_set.insert(temp);
            }
        }
        return processed_set.size();
    }
};