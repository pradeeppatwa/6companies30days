//845. Longest Mountain in Array
//https://leetcode.com/problems/longest-mountain-in-array/

//solution :

class Solution {
public:
    int longestMountain(vector<int>& a) {
        int ans=0,c=0,n=a.size();
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])  //If nos are same then we skip it   a[i] is next  & a[i-1] is previous
                c=0;            //counter
            else if(a[i]>a[i-1]) //if next>prev we increase the count
                c++;            // counting the length how many nums are less than peak num
            //Else we first calculate count of next<prev and update the final ans
            else if(c>0)           
            {
                    while(i<n and a[i]<a[i-1])
                    {
                        c++; i++;        //
                    }
                    ans = max(ans,c+1);
                    c=0 ;i--;
            }
        }
        return ans;
    }
};


//
