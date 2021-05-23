

int countOdds(int low, int high){
    return ((((high+1)-low)>>1)+(high&1&low));
}