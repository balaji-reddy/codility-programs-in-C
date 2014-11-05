// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C90
    int i=N-1,j=0,k=0;

    do
    {
        if (A[i]==0)
        {
            j+=k;
            if (j>1000000000)return -1;
        }
        else
            k += 1;
    }while(--i>=0);
    
    return j;
}