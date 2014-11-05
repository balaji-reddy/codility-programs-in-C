// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int Y, int D) {
    // write your code in C90
    int r=0;
    
    if(Y>X)
    {   
        r=(Y-X)/D;
        if((X+(r*D)) < Y) r++;
    }
    
    return r;
}