#include<stdio.h>
int sortselection(float* salaries, int size);
void printSalaries(float* salaries, int size);
int swap(float *salaries[],float *salaries[minIndex])
int main() {
    float salaries[] = {20.0f, 10.0f, 15.0f, 12.0f, 13.0f};
    int salariiesCount = 5;
    printf("Before Sort:\n");printSalaries(salaries, salariiesCount);
    sortInsertion(salaries, salariiesCount);
    printf("after Sort:\n");printSalaries(salaries, salariiesCount);
    return 0;
}
void printSalaries(float* salaries, int size) {
    for(int I = 0; I < size; I++) {
        printf("%.2f ", salaries[I]);
    }
    printf("\n");
}  
int sortselection(float* salaries, int size) {
    for(int I = 0; I < (size-1); I++) {
        int minIndex = I;
        for(J=I+1;J<size;J++){
            if(salaries[J]<salaries[minIndex]){
                minIndex=J;
            }
        }
        if(I!=minIndex){
          swap(float &salaries[I],&salaries[minIndex]);
        }
