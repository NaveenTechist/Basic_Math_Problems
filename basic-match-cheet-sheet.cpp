#include<bits/stdc++.h>
using namespace std;
 
int main() {
    //PRINT LAST TO FIRST ELEMENTS
//     int n;
//     cin >> n;
//     int count = 0; 
//   while(n!= 0){
//       int last_digit = n % 10;
//       n = n / 10;
//       cout << last_digit << endl;
//       count += 1;
//   }
//   cout << count << endl;

//REVERSE
//     int num;
//     cin >> num;
//     int n2  = num;
//     int rev = 0;
//     while(num != 0){
//         int last_digit = num % 10;
//         rev = (rev * 10) + last_digit;
//         num  = num / 10;
//     }
// cout << rev << endl;
// //PALINDROME
// if(n2 == rev) {
//     cout << "TRUE" << endl;
// }else{
//     cout << "FALSE" << endl;    
//     }
    
    
    //DIVISOR 
    // int num;
    // cin >> num;
    // for(int i = 1; i <= num; i++){
    //     if(num % i == 0){
    //         cout << i << endl;
    //     }
    // }
    
    //TIME COMPLEXITY
    
//     int num;
//     cin >> num;
    
//     vector<int> divi;
//     for(int i = 1; i * i <= num; i++){
//         if(num % i == 0){
//         divi.push_back(i);
//       if(i != num/i)  divi.push_back(num/i);    
//         }
//     }
    
//     sort(divi.begin(), divi.end());

// for(auto each : divi){
//     cout << each << endl; 
// }

int num;
cin >> num;
int primeCount = 0;

for(int i = 1; i * i <= num; i++){
    if(num % i == 0 ){
        primeCount++;
        if(i != num/ i) primeCount ++;
    }
}

if(primeCount == 2){
    cout << "Prime Number" << endl;
}else{
    cout << "Not Prime Number" << endl;
}
  return 0;
}
