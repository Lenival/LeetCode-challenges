class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ini=-1,end = 0, sum=0, step_e = numbers.size();
        do{
            ini++;
            end=ini+1;
            sum=numbers[ini]+numbers[end];
            step_e = ((numbers.size()-end)>>1);
            
            while((sum != target) && (step_e!=0)){
                if ((sum > target) ){
                    if((end-step_e)>ini){
                        end -= step_e;
                    }else{
                        step_e = (end - ini)>>1;   
                    }
                }else{
                    if(end<(numbers.size()-1))
                        end += step_e;
                    step_e = (step_e)>>1;
                }
                sum=numbers[ini]+numbers[end];
            }
        }while(sum != target);
        return {ini+1,end+1};
        
    }
};