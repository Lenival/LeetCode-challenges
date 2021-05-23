

int reverse(int x){
        int temp=0, residue, absolute, index=9, flag=1, remainder=0;
        int ref[10]={9,4,6,3,8,4,7,4,1,2};
        
        if(x == (-2147483648)){
            return 0;
        }else{
            absolute = x>>31;
            absolute = (absolute^x)-absolute;
        }
        
        flag = (absolute>1000000002);
        residue = absolute;
        
        for(;(residue!=0)&&(!(index<0));index--){
            remainder=residue%10;
            temp=10*temp+remainder;
            residue/=10;
            
            
            if((flag)&&((remainder>=ref[index]))){
                if(remainder>ref[index]){
                    return 0;
                }
            }else{
                flag=0;
            }
            
        }
        if(x<0)
            temp = -temp;
        return ((1-flag)*temp);
}