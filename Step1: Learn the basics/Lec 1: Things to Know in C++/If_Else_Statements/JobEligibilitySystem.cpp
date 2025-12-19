/*
Take the age from the user and then decide accordingly
1. If age <18,
print-> not eligible for job
2. If age >= 18,
print-> "eligble for job"
3. If age >= 55 and age <= 57,
print-> "eligible for job, but retirement soon."
4. If age 57
print-> "retirement time"
*/

#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    if (age>57)
    {
        cout << "Retirement Time\n";
    }
    else if (age>=55 && age <= 57)
    {
        cout << "You are eligible for job but retirement soon\n";
    }
    else if (age>=18)
    {
        cout<<"You are eligble for job\n";
    }
    else if (age<18)
    {
        cout<< "You are not eligible for job \n";
    }
    
    
   
    
    
    return 0;
}