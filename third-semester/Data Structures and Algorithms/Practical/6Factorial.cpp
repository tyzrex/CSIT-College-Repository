#include<iostream>

using namespace std;

long int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;
}