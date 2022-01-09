//IPL 2021 - Match Day 2
//https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/

//Solution :
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        multiset<int> st;
        vector <int> ans;
        
        for (int i = 0 ; i <k ; i++){
            st.insert(arr[i]);             //insert every num in st set
        }
        
        ans.push_back(*st.rbegin());      //st.rbegin ->  returns a reverse iterator pointing to the last element in the container.
        
        for (int i = k; i<n ; i++){         //k is size of array
            st.erase(st.find(arr[i-k]));     //erase i-k 
            st.insert(arr[i]);
            
            ans.push_back(*st.rbegin());   //push_back() function is used to push elements into a vector from the back.
        }
        return ans;
    }
};



/*
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
       vector<int> ans;
        deque<int> dq;
        int i=0;
        while(i < n){
            while(!dq.empty() and dq.front() == i-k) dq.pop_front();
            
            while(!dq.empty() and arr[dq.back()] < arr[i]) dq.pop_back();
            
            dq.push_back(i);
            
            if(i >= k-1) ans.push_back(arr[dq.front()]);
            
            i++;
        }
        return ans;
    }
};

*/
