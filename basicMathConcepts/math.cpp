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

int reverseNumber(int N) {
    int revNum = 0;
    while (N > 0) {
        int lastdigit = N % 10; 
        N = N / 10; 
        revNum = (revNum * 10) + lastdigit; 
    }
    // cout << revNum;
    return revNum;
}

int checkPalindrome(int n){
    int a = reverseNumber(n);
    if(a == n){
        cout<<"Its a palindrome";
    }else{
        cout<<"womp womp";
    }
}

int checkArmstrongNumber(int n){
    int og = n;
    int sum = 0;
    while(n > 0){
        int lastdigit = n % 10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n = n/10;
    }
    if(sum == og){
        cout<<"Its an armstrong number";
    }else{
        cout<<"womp womp";
    }
}

int divisors(int n){
    for(int i = 1; i <= n ; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
    for(int i = 1; i <= squ)
}

int main(){
    int n;
    cin>>n;
    // numberExtraction(n);
    // FindnoOfDigits(n);
    // reverseNumber(n);
    // checkPalindrome(n);
    // checkArmstrongNumber(n);
    divisors(n);

    return 0;
}