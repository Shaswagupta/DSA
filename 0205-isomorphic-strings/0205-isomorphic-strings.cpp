class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char map1[256] = {};
        char map2[256] = {};

        for (int i = 0; i < s.size(); i++){
            if(map1[s[i]] !=  0 && map1[s[i]] != t[i]){
                return false;
            }
            if(map2[t[i]] !=  0 && map2[t[i]] != s[i]){
                return false;
            }
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }
    return true; }
};