#include<bits/stdc++.h>
#include <cmath>
using namespace std;

class solution {
public:
    bool checkAutomorphicNumber(int num) {
      int square_value = int(pow(num, 2));
      string s = to_string(square_value);
      int input_size = to_string(num).size();
      int final_value = stoi(s.substr(s.size() - input_size));
      return final_value == num;
    }
};
