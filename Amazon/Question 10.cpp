//Nuts and Bolts Problem 
//https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1
//solution :

class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    sort(nuts,nuts+n);
	    sort(bolts,bolts+n);
	}

};
 /* sort(arr, arr + n) Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
