//Find Missing And Repeating
//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#

//solution :

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int i=0;
        while(i<n)
        {
            while(arr[i]!=arr[arr[i]-1] && i<n)//to check missing num
            swap(arr[i],arr[arr[i]-1]);
            i++;
        }
        int *a=new int[2];
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1) //to check repeated num
            {
                a[0]=arr[i];
                a[1]=i+1;
            }
        }
        return a;
    }
};
