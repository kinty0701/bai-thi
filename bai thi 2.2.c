#include<stdio.h>
#include<string.h>
int main() {
   char string[100];
  
   printf("Nhap chuoi ky tu in hoa: \n");
   gets(string);
  
   strlwr(string);
   printf("Chuoi chu in thuong la: %s\n", string);
  
   return (0);
}

