/*
Take the day no and print the corresponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/

#include <iostream>
using namespace std;
int main(){
    int day;
    cout << "Enter 1-7 any number to print that day";
    cin >> day;
    switch (day)
    {
        case 1:
            cout << "Monday \n";
            break;
        case 2:
            cout << "Tuesday \n";
            break;
        case 3:
            cout << "Wednesday \n";
            break;
        case 4:
            cout << "Thrusday \n";
            break;
        case 5:
            cout << "Friday \n";
            break;
        case 6:
            cout << "Saturday \n";
            break;
        case 7:
            cout << "Sunday \n";
            break;
        default:
            cout << "Choose between 1-7 only";
            break;
    }
}