#include <stdio.h>

int main() {
int i=0;
x:
if(i<10)
{
    printf("looping without any loop!!!!!!\n");
    i++;
    goto x;
}
    return 0;
}
