#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

   if(argc < 2)
   {
      
      int numArr[10] = {1, 5, 3, 2, 8, 6, 7, 9, 4, 0};

      printf("Default No-Arguments Array: ");
      for(size_t i = 0; i < 10; i++){
         printf("[%d]", numArr[i]);
      }

      for(size_t i = 0; i < 10; i++)
      {
         for(size_t j = i + 1; j < 10; j++)
         {
            if(numArr[i] > numArr[j]){
               int temp = numArr[i];
               numArr[i] = numArr[j];
               numArr[j] = temp;
            }
         }
      
      }

      printf("\nDefault Sorted No-Arguments Array: ");
      for(size_t i = 0 ; i < 10; i++){
         printf("[%d]", numArr[i]);
      }

   } else {
      int cmdArr[sizeof(int) + argc];

      for(int i = 1; i < argc; i++)
      {
         cmdArr[i - 1] = atoi(argv[i]);
      }

      printf("Arguments you put: ");
      for(int i = 1; i < argc; i++)
      {
         printf("[%d]", cmdArr[i - 1]);
      }

      for(int i = 1; i < argc; i++)
      {
         for(int j = i + 1; j < argc; j++)
         {
            if(cmdArr[i - 1] > cmdArr[j])
            {
               int temp = cmdArr[i - 1];
               cmdArr[i - 1] = cmdArr[j];
               cmdArr[j] = temp;
            }
         }
      }
   
      printf("\nYour arguments sorted: ");
      for(int i = 1; i < argc; i++)
      {
         printf("[%d]", cmdArr[i - 1]);
      }
   }

   

   putchar('\n');
   
   return 0;
}
