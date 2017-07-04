#include <stdio.h>

int main(){

    int a, b;
    printf("Eto podobie programmy opredelyaet kakoe chislo bol'she");
    scanf("%d%d",&a,&b);

    if (a>b)

        printf("%d>%d",a,b);

    else if(b>a)

        printf("%d>%d",b,a);

    else

        printf("%d=%d",a,b);

}
