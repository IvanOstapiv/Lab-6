#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int Sum(float row, int b[]); //функція для суми, після мін. числа
int Dob(float cow, int c[]); //функція для добутку від'ємних елементів

int main(void)
{
  const int  m=5, Low=-100, High=100;
  srand(time(0));
  int a[m];
  for (int i = 0; i < m; i++)
a[i]=Low+rand()%(High-Low+1);    //Рандомні числа
for (int i = 0; i < m; i++)
{
printf("a[%d]=%d\t",i, a[i]);    //вивід масива
printf("\n");
}
int b=Sum( m, a);                //Виклик підпрограми
printf("Сума елементів масиву, розташованих після мінімального елемента = %d\n\n",b);    
int c=Dob( m, a);               //Виклик підпрограми
printf("Добуток від’ємних елементів масиву = %d",c);
}
int Sum(float row, int b[])    //підпрограма
{
int f=0;
int min = b[0], mi, sum=0;
for(int i = 0; i < row; i++) //обчислення мін. числа
{
 if(min > b[i])
 {
 min = b[i];
 }
}
for(int i = 0; i < row; i++) //обчислення індекса мін. числа
{
 if(min==b[i])
 {
 mi = i;
 }
}
for(int i = 0; i < row; i++) //сума чисел після мін. числа
{
 if(i>mi)
 {
 sum+=b[i];
 }
}
return sum;               
}
int Dob(float cow, int c[])   //підпрограма
{
int h=1;
for (int i = 0; i < cow; i++)
{
 if(c[i]<0)
 {
   h*=c[i];
 }
}
return h;
}
