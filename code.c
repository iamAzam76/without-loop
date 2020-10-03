#include <stdio.h>

int main() {
int i=1;
x:
if(i<=10)
{
    printf("looping without any loop\n");
    i++;
    goto x;
}
    return 0;
}
