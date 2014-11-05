// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
struct Results solution(int N, int A[], int M) {
    struct Results result;
    // write your code in C90
    int i,k=0,max_v=0;
    
    result.C =(int*)(malloc(N*sizeof(int)));
    result.L = N;   
    memset(result.C, 0, N*sizeof(int));  

    for(i=0;i<M;i++)
    {      
        if (A[i] > N)    
            max_v=k;
        else
        {
            if(result.C[A[i]-1] < max_v)
                result.C[A[i]-1]=max_v;
            
            result.C[A[i]-1]+=1; 
            
            if(result.C[A[i]-1] > k)
                k=result.C[A[i]-1];
        }   
    }

    for(i=0;i<N;i++)
    {
        if(result.C[i] < max_v)
            result.C[i]=max_v;
    }
                    
    return result;
}