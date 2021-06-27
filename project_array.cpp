
#include <iostream>
using namespace std;
 
int main()
{
   int a[50],n;
   cout<<"no of elements";
   cin>>n;
   cout << "Enter elements: ";

   for(int i = 0; i < n; ++i)
      cin >> a[i];

   cout << "You entered: ";
   for(int i = 0; i < n; ++i)
      cout << endl << *(a + i);

   return 0;
}