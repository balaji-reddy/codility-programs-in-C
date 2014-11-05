// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");


int max(int a , int b)
{
	return (a>b?a:b);
}

int min(int a , int b)
{
	return (a<b?a:b);
}

int solution(int A[], int N) {
    // write your code in C90
    
    int r=0,i,t=0;
    long long int max_nums[N],min_nums[N];
   
   	memset(max_nums,0,sizeof(max_nums));
   	memset(min_nums,0,sizeof(min_nums));
    
    for (i = 0; i < N; i++)
    {
        max_nums[max(0, i-A[i])]++;
        min_nums[min(N-1, i+A[i])]++;
    }
    
    for (i=0;i<N;i++)
    {
        if (max_nums[i] > 0)
        {
            r+=(t*max_nums[i]);
            r+=((max_nums[i]*(max_nums[i]-1))>>1);
            
            if(r > 10000000)
                return -1;

            t+=max_nums[i];
        }
        t-=min_nums[i];
    }
    
    return r;
}
