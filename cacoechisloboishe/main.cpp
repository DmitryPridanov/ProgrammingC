#include <stdio.h>
#include <windows.h>
int main(){
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int a, b;

printf("Eto podobie programmy opredelaet cacoe chislo bolshe ");

scanf("%d%d",&a,&b);

if (a>b){printf("%d>%d",a,b);
}
else if(b>a) {
printf("%d>%d",b,a);

}

else{

printf("%d=%d",a,b);

 }
 }
