#include <stdio.h>
main()
{
int symbol;
int a,b,c;

scanf("%d",&symbol);

switch (symbol) {
case 1:scanf("%d%d",&a,&b);
c=a+b;

printf("%d+%d=%d",a,b,c);

continue;

case 2:



scanf("%d%d",&a,&b);

c=a-b;

printf("%d-%d=%d",a,b,c);

break;

case 3:

scanf("%d%d",&a,&b);

c=a*b;

printf("%d*%d=%d",a,b,c);

break;


case 4:


scanf("%d%d",a,b);


c=a/b;


printf("%d/%d=%d",a,b,c);


default:break;

}

getchar();

}
