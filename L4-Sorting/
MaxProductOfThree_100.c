

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int compfunc(const void* a, const void* b)
{  
    return *(int*)a > *(int*)b ; 
}

int solution(int A[], int N) {
    // write your code in C90
    int p=0,r=0,k[6],i,j,m,t=6,mul;
    
    // Sort the array elements in non-decreasing order
    qsort(A,N, sizeof(A[0]), compfunc);
    
    if(N<6)
    {
        t=N;
        
        for(i=0;i<6;i++)
        {
            if ((A[i] != 0) &&(i<N))
                k[i]=A[i];
            else
                k[i]=0;
        }
    }
    else
    {
        k[0]=A[0];
        k[1]=A[1];
        k[2]=A[2];
        k[3]=A[N-3];
        k[4]=A[N-2];
        k[5]=A[N-1];   
    }
    
    //make combinations first 3 and last 3
    for(i=0;i<t-2;i++)
    {
        for(m=i+1;m<t-1;m++)
        {
            for(j=i+2;j<t;j++)
            {
                mul=(k[i]*k[m]*k[j]);
                
                if(p==0)
                {
                     r=mul; 
                     p=1;
                }
                else if ( mul > r)
                      r=mul;
            }
        }
    }
    return r;
}

