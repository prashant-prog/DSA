#include <iostream>
using namespace std;
int main(){
    int a ,b;
    cout << "Enter number a and b : ";
    cin >> a >> b;
    cout << "Before Swap the values of A and B: " << endl << "A: " << a<< endl << "B: " << b<<endl; 
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "After Swap the value of A and B: " << endl << "A: " << a<< endl << "B: " << b << endl;
    return 0;

}