// Power Of Numbers

 long long power(int N,int R)
   {
     

   if(R==0)
   {
       return 1;
   }
   
   long long k=power(N,R/2)%1000000007;
   long long k2=(k*k)%1000000007;
   
   if(R&1)
   {
       return ((N*k2)% 1000000007);
   }
   
   
   
   return k2 % 1000000007;
   
  
   }
