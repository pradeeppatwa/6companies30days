// Rotate by 90 degree

void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    for(auto &i: matrix)
   {
       reverse(i.begin(),i.end());
   }
   for(int i=0; i<matrix.size(); i++)
   {
       for(int j=i; j<matrix[i].size(); j++)
       {
           swap(matrix[i][j],matrix[j][i]);
       }
   }
    
}
