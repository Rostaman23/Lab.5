#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

int main(){
    int dim;
    printf("Input DIM =");
    scanf("%i", &dim);
    printf("\n");
    int A[dim],k,i;
    float C[dim], dob;
    srand(time(NULL));
    printf("Сгенерований масив А\n");
    for(int i=0; i<dim; i++){
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
      for(int i=0; i<dim; i++){
         if (k<10){
             
        C[i]=A[i]%k;
        printf("C[%i]=%f\n",i, C[i]);
         }
     
     }
     dob=1;
      i=0;
      while(i<dim){
          if(C[i]>0)
          dob=dob*C[i];
          i++;
      }
      printf("dob=%f\n", dob);
    return 0;
}

