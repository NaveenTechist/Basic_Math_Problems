#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int secondLargestDigit(int num) {
        int second_large_num = -1;
        int first_large_num = -1;
        set<int> s;
        while(num != 0){
            int last_digit = num % 10;
            if(s.find(last_digit) == s.end()){
                s.insert(last_digit);
                if(last_digit > first_large_num){
                    second_large_num = first_large_num;
                    first_large_num = last_digit;
                }
                else if(last_digit > second_large_num){
                    second_large_num = last_digit;
                }
            }
            num /= 10;
        }
        return second_large_num;
        
        // int size = int(to_string(num).size());
        // if(size == 1) return -1;
        // set<int> unique_values;
        // while( num > 0){
        //     int last_digit = num % 10;
        //     unique_values.insert(last_digit);
        //     num /= 10;
        // }
        // auto it = unique_values.end();
        // advance(it, -2);
        // return unique_values.size() == 1 ? -1 : *it;
    }
};
