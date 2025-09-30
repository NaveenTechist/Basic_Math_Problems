#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countRepeatingDigits(int num) {
        int count = 0;
        int arr[10] = {0};
        while(num != 0){
            int last_digit = num % 10;
            arr[last_digit]++;
            num /= 10;
        }
        for(int i = 0; i < 10; i++){
            if(arr[i] > 1) count ++;
        }
        return count;
    }
};
