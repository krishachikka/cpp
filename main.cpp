#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

// recursuive function
int factorial(int n){
    if(n== 1 || n==0)
        return 1;
    else    
        return n*factorial(n-1);
}

// Class
class Emp{
    public:
    int Salary;
    string name;

    void details(){
        cout<<"Name: "<<this->name<<" And Salary: "<<Salary<<endl;
    }
    void getPassword(){
        cout<<"The password is : "<<this->password<<endl;
    }

    private:
    int password = 123456;
};

class manager : public Emp{
    public:
    int empID;

    void print(){
        cout<<"Employee Id : "<<empID<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Employee Salary : "<<Salary<<endl;
    }
};
int main()
{
    cout <<"Cherry"<<endl;
// if else statement
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    {
        if (age < 65 && age >= 18)
            cout << "You are elligible to drive\n";
        else if (age < 18)
            cout << "you are not of the legal age\n";
        else if (age > 65)
            cout << "You are too old bitch\n";
        else
            cout << "Invalid number\n";
    }
// switch statement
    int age2;
    cout << "Enter any number: " << endl;
    cin >> age2;
    switch (age2)
    {
    case 15:
        cout << "You entered 15\n";
        break;
    case 24:
        cout << "You entered 24\n";
        break;
    default:
        cout << "Its neither 15 nor 24\n";
        break;
    }
// function calling
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;

// arrays
    int arr[5] = {1,4,76,34,23};
    // enhanced for loop
    for(int x : arr)
        cout<<x<<" ";
cout<<"\n";
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s;
    
// vector initialization
    vector<int> vec = {24,45,76,29,40};
    vec.push_back(69);

    for(int x : vec)
        cout<<x<<" ";
cout<<"\n";

    // vec.clear();
    cout<<vec.at(2);

    int intValue = 25;
    double doubleValue = intValue; // Implicit conversion from int to double
    cout<<intValue<<endl;
    cout<<(float) doubleValue/3 <<endl;
    cout<<(float) doubleValue;


// String
string str = "cherry";
cout<<"Length of the string is "<<str.length()<<endl;
cout<<"Substring :"<<str.substr(0,3)<<endl;

manager obj;
obj.name = "Cherry";
obj.Salary = 500000;
obj.empID = 111;
obj.details();
obj.getPassword();
obj.print();
    return 0;
}
