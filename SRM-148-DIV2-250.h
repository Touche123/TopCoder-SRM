#include <string>
#include <iostream>
using namespace std;

class DivisorDigits
{
public:

    int howMany(int number){
        int count = 0;

        string temp = to_string(number);
        for (int i = 0; i < temp.length(); i++) {
            int ia = temp[i] - '0';
            if (ia != 0 && number % ia == 0)
                count++;
        }
        return count;
    }
};