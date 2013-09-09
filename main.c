#include <stdio.h>
#include <time.h>

int main()
{
    clock_t t;
    
    //memset(t, 0, sizeof(clock_t));
    
    t = clock();
    
    printf("%d\n", t);
    
    return 0;
}


