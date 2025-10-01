#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkPerfectNumber(int num) {
        int count = 0;
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                count += i;
            }
        }
        return num == count;
    }
};
