// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
//#include <stdio.h>

int solution(int A[], int N) {
    // write your code in C90
    int i=N-1,j,retVal=0,t[N][2];
    memset(t,0,sizeof(t[0][0])*N*2);
    
    if (N > 1)
    {
        do
        {
            for(j=0;j<N;j++)
            {
                if ((t[j][0] == A[i])&&( t[j][1] == 1))
                    break;
                else
                {
                    if (t[j][1] == 0)
                    {
                        t[j][0]=A[i];
                        t[j][1]=1;
                        retVal++; 
                        break;
                    }   
                }
            }       
        }while (i--);
    }
    else if (N == 1)
        retVal=1;
    
    return retVal;
}
