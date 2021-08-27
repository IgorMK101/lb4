#include "stdio.h"// бібліотеки//
#include "math.h"
int main (void){//старт кода//
int j, i, s, p = 0;
int n ;
int x ; // в водим змінні //
printf("vvedit naturalbne chuclo n =");
scanf("%d",&n);
printf("vvedit cile chuclo x =");
scanf("%d",&x);
for (i = 1; i <= n; i++)//задаєм значення 1
{ 
for (s = 1, j = 1;j <= i; j++) // задаєм значення 2 
{
s *= (i*pow(j,x));//рішення   що справа//
}
p += s;//відповідь яка має получитись
}
printf("p=%d\n", p);//вивід відповіді//
return 0;
}