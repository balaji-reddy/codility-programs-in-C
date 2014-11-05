// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {

   int i=0,r[N];
   
   memset(r,0,(sizeof(r)));
   
   for(i=0;i<N;i++)
   {
       if(( A[i] > 0) && (A[i] <= N)) r[A[i]-1]=A[i];
   }

   for(i=0;i<N;i++)
   {
       if( r[i] != (i+1)) return (i+1);
   }
     
   return (N+1);
}
