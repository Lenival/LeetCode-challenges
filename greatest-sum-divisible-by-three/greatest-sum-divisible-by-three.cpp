class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int remainder, sum=0, temp;
        int minors[2][2]= {{0,0},{0,0}};
        
        for(auto it = nums.begin();it!=nums.end();++it){
            sum+=(*it);
            remainder = (*it)%3;
            if(remainder){
                
                if(((*it)<(minors[remainder-1][1]))||(!(minors[remainder-1][1])))
                    minors[remainder-1][1] = (*it); //minors[remainder-1][0];
                
                if(((*it)<(minors[remainder-1][0]))||(!(minors[remainder-1][0]))){
                    temp = minors[remainder-1][0];
                    minors[remainder-1][0] = (*it);
                    minors[remainder-1][1] = temp;
                }
            }
        }
        remainder = sum%3;
        
        if(remainder){
            if(minors[remainder==2][0] < ((minors[remainder!=2][0] + minors[remainder!=2][1]))){
                sum -= minors[remainder==2][0];
            }else{
                if(minors[remainder!=2][1]){
                    sum -= minors[remainder!=2][0] + minors[remainder!=2][1];                
                }else{
                    sum -= minors[remainder==2][0];
                }
            }
        }
        
        return sum*(!(sum%3));
    }
};