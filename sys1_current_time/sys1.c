#include <stdio.h>
#include <time.h>

int main(void)
{
    long nt = time(NULL);
    printf("%s",ctime(&nt));
    printf("%d\n",nt);
    return 0;
}