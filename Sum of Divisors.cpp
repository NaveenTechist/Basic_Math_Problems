#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int sumOfDivisors(int num) {
        int sum_of_divisors = 0;
        for(int i = 1; i * i <= num; i++){
            if(num % i == 0){
                if(num / i == i) sum_of_divisors += i;
                else sum_of_divisors += (num / i + i);
            }
        }
        return sum_of_divisors;
    }

};
