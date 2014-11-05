// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C90
    long int s_r=0,s_l=A[0],sum=A[0];
    int i,min=11111111,r;
    
    for(i=1;i<N;i++)
        sum+=A[i];
    
    for(i=1;i<N;i++)
    {
        s_r=sum-s_l;
        r=(int)(s_l-s_r);
        if(r<0) r=-r;
        if(min>r)min=r;
        if(min==0)break;
        s_l=sum-s_r+A[i];
    } 
    return min;
}