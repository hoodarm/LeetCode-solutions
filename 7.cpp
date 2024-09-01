#include <bits/stdc++.h>
using namespace std;

int reverse (int x){
    if (x==-2147483648)
        return 0;
    long answer = 0; 
    if (x==0)
        return answer;
    long k = 1;
    while (true){
        if (x%(long)(pow(10,k))!=0){
            x = (long)x/(long)(pow(10,k-1));
            break;
        }
        k++;
    }
    bool isNegative = false;
    if (x<0){
        x = abs(x);
        isNegative = true;
    }
    long numberOfDigits = floor(log10(x)) + 1;
    for (int i = 1; i<=numberOfDigits; i++){
        long remainder = x%(long)(pow(10,i));
        long quotient = (long)remainder/(long)(pow(10,i-1));
        answer = answer + quotient*(pow(10,numberOfDigits - i));
    }
    if (isNegative == true){
        answer= answer*(-1);
    }
    if(answer>INT_MAX || answer<INT_MIN)
        return 0;
    return int(answer);
}

int main(){
    int k = reverse (1534236461);
    cout << k << endl;
}