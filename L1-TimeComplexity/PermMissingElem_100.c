// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C90
    long int s1=N+N+N,s2=A[N-1];
    
    if(N==0)
        return 1;
    else if (N >1)
    {
        
        int i=N-2;
        do
        {
            s1+=i;
            s2+=A[i];
        }while(--i>=0);
    }
    return (s1-s2);
}