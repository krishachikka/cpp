#include <iostream>

//compiler reads line wise for c++

//forward declaration of function
int square(int x);

//intial declaration of the func is also valid
int factorial(int x){
    if(x==0){
        return 1;
    }
    return factorial(x-1)*x;
};

void cherry(); //pure declaration

int main(){
    int x {}; //proper initialization;
    std::cout<<"Enter the Integer: ";
    std::cin>>x;
    std::cout<<"Factorial of "<<x<<" is "<<factorial(x)<<"\n"; //callee
    int a{square(x)}; //variable definition
    std::cout<<"Square of "<<x<<" is "<<a; //calling func
    return 0;
}

//if we write the user defined function after main func, forward declaration is a must
int square(int a){
    return a*a;  
    //the scope of variable a ends here, its a local scope
}