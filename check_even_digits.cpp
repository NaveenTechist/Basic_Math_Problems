#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkEvenDigits(int num) {
        bool even_or_not = true;
        while(num != 0){
            int last_digit =  num % 10;
            if(last_digit % 2 != 0){
                even_or_not = false;
                break;
            }
            num /= 10;
        }
        return even_or_not;
    }

};
