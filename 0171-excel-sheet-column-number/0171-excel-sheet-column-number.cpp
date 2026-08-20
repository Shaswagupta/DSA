class Solution {
public:
    int titleToNumber(string columnTitle) {
        int f = 0;
        int i = 0;
        while(i < columnTitle.size()){
            f = f*26 + (columnTitle[i] - 'A' + 1);
            i++;
        }
        
        return f;
    }
};