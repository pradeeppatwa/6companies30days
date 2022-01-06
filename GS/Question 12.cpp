//Program to find number of squares in a chessboard
//https://www.geeksforgeeks.org/program-to-find-number-of-squares-on-a-chessboard/
//solution :

// C++ find number of squares in a
// chessboard
#include <bits/stdc++.h>
using namespace std;

// Function to return count of squares;
long long int countSquares(int n)
{
return (n * (n + 1) / 2) * (2 * n + 1) / 3; //n * (n + 1) / 2 is evaluated first as the value n*(n+1) will always be a multiple of 2.
}                                           //Since the value of n*(n+1)*(2n+1) can cause overflow for large values of n

// Driver Code
int main()
{

int n = 4;
cout << countSquares(n);
return 0;
}
