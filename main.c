#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

int main(){
    
    int A[12];
    float C[12];
    srand(time(NULL));
    printf("Сгенерований масив А\n");
    for(int i=0; i<12; i++){
        A[i]=100-rand()%200;
        printf("A[%i]=%i\n",i, A[i]);
    }
     printf("Сгенерований масив C\n");
     for(int i=0; i<12; i++){
        C[i]=A[i]%3;
        
        printf("C[%i]=%5.2f\n",i, C[i]);
     }
    return 0;
}
