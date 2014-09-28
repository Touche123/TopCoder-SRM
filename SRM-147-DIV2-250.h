#include <string>
using namespace std;

class CCipher {
public:
    string decode(string cipherText, int shift) {
        string temp = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string res;
        for(int a = 0; a < cipherText.length(); a++)
        {
            int index = temp.find(cipherText[a]);
            int newIndex = index - shift;
            if(newIndex < 0)
                newIndex += temp.length();
            res.push_back(temp[newIndex]);
        }
        return res;
    }
};