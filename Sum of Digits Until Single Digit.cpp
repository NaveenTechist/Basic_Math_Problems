
#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int sumOfDigits(int num) {
       if(num == 0) return 0;
        return  (num % 9 == 0) ? 9 : (num % 9);
    }
};
