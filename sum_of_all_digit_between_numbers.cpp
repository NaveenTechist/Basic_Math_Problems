#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int calculateDigitSum(int N1, int N2) {
        int count = 0;
        for(int i = N1; i <= N2; i++){
            int temp = i;
            while(temp != 0){
                int last_digit = temp % 10;
                count += last_digit;
                temp /= 10;
            }
        }
        return count;
    }
};
