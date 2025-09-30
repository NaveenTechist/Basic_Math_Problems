#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int ProductOfDigits(int num) {
        int product = 1;
        while(num != 0){
            product *= (num % 10);
            num /= 10;
        }
        return product;
    }
};
