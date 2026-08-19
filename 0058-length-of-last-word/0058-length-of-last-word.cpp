class Solution {
public:
    int lengthOfLastWord(string s) {
        int count  = 0 ; 
        for(int i =s.size() -1  ; i >=  0  ; i--){
            
            if (!isalpha(s[i])){
                
                if (count  == 0){
                    
                }
                else {
                    return count ;
                }}
            else {

                    count ++;
                }
                
            

        }
    return count  ;}
};