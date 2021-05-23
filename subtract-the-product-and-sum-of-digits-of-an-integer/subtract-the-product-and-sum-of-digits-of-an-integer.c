

int subtractProductAndSum(int n){
        int P=1,S=0,digit=0;
        
        while(n!=0){
            digit = n%10;
            n/=10;
            P*=digit;
            S+=digit;
        }
        return P-S;
}