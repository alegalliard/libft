#include <libft.h>

/*
str1 − This is the first string to be compared.

str2 − This is the second string to be compared.

n − The maximum number of characters to be compared
*/

int strncmp(const char *str1, const char *str2, size_t max)
{

}

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");

   ret = strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 é menor q str2");
   } else if(ret > 0) {
      printf("str2 é menor q str1");
   } else {
      printf("str1 é igual a str2");
   }
   
   return(0);
}