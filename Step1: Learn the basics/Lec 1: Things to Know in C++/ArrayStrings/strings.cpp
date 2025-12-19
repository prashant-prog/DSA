#include<iostream>
#include <string>
using namespace std;
int main(){
    string name = "Prashant";
    int len = name.size();
    cout << name[0] << "\n"<< "Length of String: " << len ;
    cout << "Last string character is: " << name[len-1];
    return 0;
}