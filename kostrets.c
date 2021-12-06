#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

int main(){
    
    int A[12], i, n, k, dob1, dob2;
    float C[12];
    srand(time(NULL));
    printf("Сгенерований масив А\n");
    for(int i=0; i<12; i++){
        A[i]=100-rand()%200;
        printf("A[%i]=%i\n",i, A[i]);
    }
    printf("Введіть знначення k = ");
    scanf("%i",&k);
         if(k==0){
             printf("На нуль ділити не можна");
             exit(0);
         }
     printf("Сгенерований масив C\n");
      for(int i=0; i<12; i++){
         if (k<10){
        C[i]=A[i]/k;
        printf("C[%i]=%5.2f\n",i, C[i]);
         }
          
      }
      
     dob1=1;
     i=0;
      while(i<11){
          if(C[i]>0 || i<=11){
          dob1=C[i];
          dob2=dob1*dob1;
          i++;
          
          }
      }
      printf("dob=%i\n", dob2);
     
    return 0;
}
