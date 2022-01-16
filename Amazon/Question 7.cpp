//First non-repeating character in a stream
//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

//solution : 

class Solution { 
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue<int> q;
		    string temp="";
		    int arr[26]={0};
		    for(int i=0; i<A.size() ; i++){
		        arr[A[i]-'a']++;
		        if(arr[A[i]-'a']==1){        //aa-a != 1
		            q.push(A[i]);
		        }
		        while(!q.empty() && arr[q.front()-'a']!=1){
		            q.pop();
		        }
		        if(q.empty()){               //if any letter is repeated and their is no new letter then print #
		            A[i]='#';
		        }else{
		            A[i]=q.front();
		        }
		    }
		    return A;
		    
		}

};
 
