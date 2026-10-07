class Solution {
public:
    string decodeMessage(string key, string message) {
        
        pair<char, char> p[26];
        int temp = 0;

        for (int i = 0; i < key.size(); i++) {

            if (key[i] != ' ') {

                bool found = false;

                for (int j = 0; j < temp; j++) {
                    if (p[j].first == key[i]) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    p[temp].first = key[i];
                    p[temp].second = 'a' + temp;
                    temp++;
                }
            }
        }

        for (int i = 0; i < message.length(); i++) {

            if (message[i] != ' ') {

                for (int j = 0; j < 26; j++) {

                    if (message[i] == p[j].first) {
                        message[i] = p[j].second;
                        break;
                    }
                }
            }
        }

        return message;
    }
};