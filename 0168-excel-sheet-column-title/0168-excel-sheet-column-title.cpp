class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        while(columnNumber > 0 ){
            columnNumber--;
            
            int remender = columnNumber %26;
            
            s.push_back('A' + remender );
           columnNumber = columnNumber / 26;
        } 
        reverse(s.begin(), s.end());
        
    return s ; }
};