#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int lcm(int A, int B) {
        int small = min(A, B);
        int great = max(A, B);
        int i = great;
        while(true){
            if(i % small == 0) return i;
            i += great;
        }
    }

};
