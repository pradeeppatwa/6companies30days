// Stickler Thief

int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int incl=arr[0];
       int excl=0;
       int new_excl;
       for(int i=1;i<n;i++){
         new_excl=(incl>excl) ? incl : excl;
           incl=excl+arr[i];
           excl=new_excl;
       }
       return ((incl>excl) ? incl : excl);
    }
