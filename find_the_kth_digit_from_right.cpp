#include <bits/stdc++.h>
using namespace std;
#include <cmath>

class solution {
public:
    int kthDigit(int A, int B, int k) {
        int final_var = (int)pow(A, B);
        int right_var = 0;
        for(int i = 1; i <= k; i++){
            right_var = final_var % 10;
            final_var /= 10;
        }
        return right_var;
    }
};
