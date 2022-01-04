//Distributing M items in a circle of size N starting from K-th position
//https://www.geeksforgeeks.org/distributing-m-items-circle-size-n-starting-k-th-position/
//solution:

// C++ program to find the position where
// last item is delivered.
#include <bits/stdc++.h>
using namespace std;

// n ==> Size of circle
// m ==> Number of items
// k ==> Initial position
int lastPosition(int n, int m, int k)
{
    // n - k + 1 is number of positions
    // before we reach beginning of circle
  int ans = (m+k-1)%n;
    if(ans == 0){
      return n;
    }
  return ans;
}

int main() {
  cout<<lastPosition(5,8,2)<<endl;
}


/*Input : N = 5 // Size of circle
        M = 2 // Number of items
        K = 1 // Starting position
Output : 2
The first item will be given to 1st 
position. Second (or last) item will 
be delivered to 2nd position

Input : N = 5 
        M = 8 
        K = 2
Output : 4
The last item will be delivered to 
4th position
*/
  
