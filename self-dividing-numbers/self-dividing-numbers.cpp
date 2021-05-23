class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        //vector<int> ans(right-left);
        vector<int> ans;
        int digit, temp, i=0, flag;
        while((left<10)&&(i<(10-left))){
            ans.push_back(left+i);
            i++;
        }
        for(i=left+i;i<(right+1);i++){
            flag=1;
            temp = i;
            do{
                digit = temp%10;
                temp/=10;
                if(digit){
                    flag&=((i%digit)==0);
                }else{
                    flag=0;
                }
            }while((temp)&&(digit)&&(flag));
            if(flag){
                //ans[j]=flag*i;
                ans.push_back(i);
            }
            
        }
        
        
        return ans;
    }
};