#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Sum(float row, int b[]);//Функція, яка додає парні елем. масиву

int main(void)
{
  const int  m=5, Low=-100, High=100;
  srand(time(0));
  int a[m];
  for (int i = 0; i < m; i++)
a[i]=Low+rand()%(High-Low+1);  //рандомні числа
for (int i = 0; i < m; i++)
{
printf("a[%d]=%d\t",i, a[i]);  //вивід масива
printf("\n");
}
int b=Sum( m, a);              //виклик підпрограми
printf("Сума парних елементів одновимірного масиву = %d\n",b);
}
int Sum(float row, int b[])    //підпрограма
{
int h=0;
for (int i = 0; i < row; i++)
{
 if(b[i]%2==0)                 //Якщо парні елементи
 {
   h+=b[i];                    //Додаємо
 }
}
return h;
}
