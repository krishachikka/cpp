#include<bits/stdc++.h>
using namespace std;

// Extraction of digits
int numberExtraction(int N){
    while(N > 0){
        int last_digit = N % 10;
        N = N/10;
        cout<<last_digit;  
    }
    return 1;
}

// Find out number of digits present in the input number
int FindnoOfDigits(int N){
    int count =0;
    while(N>0){
        N = N/10;
        count++;
    }
    cout<<count;
    return 1;
}

int main(){
    int n;
    cin>>n;
    // numberExtraction(n);
    FindnoOfDigits(n);
}