#include <stdio.h>
int main ()
{
int i, o; /*i for the inner loop and o for outer*/
int num;
for (i=1; i<=20; i++) 
{
num= i;
for(o=1; o=10; o++)
{
printf("%3d\t", (num*o));
}
printf("\n");
}
return 0;
}
