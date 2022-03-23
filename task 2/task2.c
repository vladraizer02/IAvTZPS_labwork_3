#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "cpuid.h"
int main()
{
 cpuinfo res = cpuid(0, 0);
 char s[13]={};
 memcpy(s,&res.ebx,12);
 for (int i = 0; s[i] != '\0'; i++) 
  putchar(s[i]);
 printf("\n");
 return 0;
}
