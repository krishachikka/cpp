#include<bits/stdc++.h>
using namespace std;

void printSquare(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0 ; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void leftTriangle(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=i; j++){
            cout<<"* ";
        }
        cout<< endl;
    }
}

void leftNumTriangle(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void leftNumTriangle2(int n){
    for(int i = 1; i<=n; i++){
        for(int j =1; j <=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void upperleftTriangle(int n){
    for(int i = 0; i < n ; i++){
        for(int j = n; j > i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void upperleftNumTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int j = 1; j <=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pyramid(int n){
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n-i-1; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*";
        }
        for(int j = 0; j< n-i-1; j++){
            cout<<" ";
        }
            cout<<endl;
    }
}

void ultaPyramid(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j= 0; j < 2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    for(int i = 0; i < 2*n-1; i++){
        if(i < n){
            for(int j = 0; j <= i; j++){
                cout<<"*";
            }
        }
        else{
            for(int j = 0; j < 2*n-i-1; j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern11(int n){
    for(int i = 0; i <n; i++){
        int start;
        if(i % 2 == 0) start =0;
        else start =1;
        for(int j=0; j<=i;j++){
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}

void pattern12(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <=i; j++){
            cout<<j;
        }
        for(int j = 1; j <= 2*(n-i); j++){
            cout<<" ";
        }
        for(int j = i; j>0 ; j--){
            cout<<j;
        }
        cout<<endl;    
    }
}

void pattern13(int n){
    int num = 1;
    for(int i = 0; i <n; i++){
        for(int j = 0; j <= i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A'+i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch < 'A'+n-i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    for(int i = 0; i<n; i++){
        char ch = 'A'+i;
        for(int j = 0; j <=i; j++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1 ; j++){
            cout<<".";
        }
        // for(char ch = 'A'; ch <= 'A'+ i; ch++){
        //     cout<<ch;
        // }
        // for(char ch = 'A'+ i ; ch > 'A'; ch--){
        //     cout<<ch;
        // }
        char ch = 'A';
        int k = (2*i+1) / 2;
        for(int j = 1; j <= 2*i+1 ; j++){
            cout<<ch;
            if(j <= k) ch++;
            else ch--;
        }

        for(int j = 0; j < n-i-1 ; j++){
            cout<<".";
        }
        cout<<endl;
    }
}

void pattern18(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A'+n-i-1;
        for(int j = 0; j <=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

void pattern19(int n){
    for (int i=0; i< n ; i++){
        for(int j=n-i; j > 0; j--){
            cout<<"*";
        }
        for(int j = 0; j < 2*i;j++){
            cout<<" ";
        }
        for(int j=n-i; j > 0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=0; i< n ; i++){
        for(int j=0; j <=i; j++){
            cout<<"*";
        }
        for(int j = 2*(n-i)-1; j >1;j--){
            cout<<" ";
        }
        for(int j=0; j <=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern20(int n){
for(int i = 0; i<n; i++){
        if(i == 0 || i == n-1){
            for(int j = 0; j<n; j++){
                cout<<". ";
            }
        }
        else{
            for(int j = 0; j<n; j++){
                if(j==0 || j==n-1){
                    cout<<". ";
                }else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}

// void pattern21(int n){
//     for(int i = 0; i <n; i++){
//         for
//     }
// }

int main(){
    int n;
    cin>>n;
    // printSquare(n);
    // leftTriangle(n);
    // leftNumTriangle(n);
    // leftNumTriangle2(n);
    // upperleftTriangle(n);
    // upperleftNumTriangle(n);
    // pyramid(n);
    // ultaPyramid(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    pattern20(n);

        return 0;
}