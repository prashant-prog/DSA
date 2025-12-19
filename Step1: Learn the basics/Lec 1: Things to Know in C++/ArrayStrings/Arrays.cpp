#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout << "\n Enter element "<<i+1 << "\n";
        cin >> arr[i];
    }
    cout << "[ ";
    for(int i = 0; i<5;i++){
        cout << "\t"<< arr[i] << "\t";
    }
    cout << " ]\n";
}