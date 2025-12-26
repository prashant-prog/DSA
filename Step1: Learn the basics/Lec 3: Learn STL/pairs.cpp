#include <iostream>
#include <utility>
using namespace std;
int main()
{
   {
      pair<int, int> p = {1, 3};
      cout << p.first << " " << p.second;
   }
   {
      pair<int, pair<int, int>> p = {1, {2, 3}};
      cout << p.first << " " << p.second.second << " " << p.second.first<<endl;
   }
   {
      pair<int, int> arr[] = {{12, 13}, {132, 1233}, {233, 345}};
      size_t size = sizeof(arr) / sizeof(arr[0]);
      for (size_t i = 0; i < size; i++)
      {
         cout << arr[i].first << " " << arr[i].second << endl;
      }
   }
}