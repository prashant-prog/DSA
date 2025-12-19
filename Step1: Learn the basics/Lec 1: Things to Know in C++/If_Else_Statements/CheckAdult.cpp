#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age>=18){
        cout << "You are an Adult";
    }    
    else{
        cout << "You are not an Adult";
    }
    return 0;
}
