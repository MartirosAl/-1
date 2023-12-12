#include <stdio.h>
#include <string.h>


int main()
{
   system("chcp 1251");
   system("cls");

   char str[100];
   int i, length, n;
   printf("Введите строку: ");
   gets(str);
   
   length = strlen(str) - 1;

   for (i = 0; i < length; i++)
      if (str[i] == ' ')
      {
         n = length + 2;
         while (str[i + 1] != ' ')
         {
            str[n] = str[n - 1];
            n--;
         }
         length++;
         i++;
      }
   printf("\nВывод:%s \n", str);
   return 0;
}