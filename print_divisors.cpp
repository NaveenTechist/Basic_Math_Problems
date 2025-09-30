#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> printDivisors(int n) {
        vector<int> empty_vector;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                empty_vector.push_back(i);
            }
        }
        return empty_vector;
    }
};
