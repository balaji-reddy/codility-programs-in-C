// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int A[], int N) {
    // write your code in C90
        // write your code in C90
    int i,cnt=0,r[X+1];
    
    for(i=0;i<X+1;i++)
        r[i]=0;
        
    for(i=0;i<N;i++)
    {
        if (r[A[i]] == 0)
        {
            r[A[i]]=A[i];
            cnt++;
        }
        
        if (cnt==X)
            return i;
    }     
    return -1;
}
