#include <iostream>
using namespace std;
int main(){
    int arr[3][5]; //This 3 is row and 5 is column 
    arr[1][3]=34;
    cout << arr[1][3] << "\n";
    cout << arr[1][4] << "\n"; //This one stores garbage value coz we assigned only [1][3] in the array
    return 0;
}