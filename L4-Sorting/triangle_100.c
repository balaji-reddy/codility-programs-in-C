// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");


int compfunc(const void* a, const void* b)
{  
    return *(int*)a > *(int*)b ; 
}

int solution(int A[], int N) {
    // write your code in C90

    if(N>2)
    {     
        int i=0;
        
        // Sort the array elements in ascending order
        qsort(A,N, sizeof(A[0]), compfunc);
        
        do
        {
            if ((A[i] >= 0) && (A[i] > (A[i+2] - A[i+1]))) 
                return 1;
        }while((++i)<(N-2));
    }
    
    return 0;
}
