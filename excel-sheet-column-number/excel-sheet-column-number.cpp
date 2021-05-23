class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int columnNumber=0;
        for ( string::iterator it=columnTitle.begin(); it!=columnTitle.end(); ++it)
            columnNumber = 26*columnNumber + ((*it)-64);
        return columnNumber;
    }
};