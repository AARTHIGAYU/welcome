#include <stdio.h>
int getMaxDiff(int *array, int size) 
{
   int i, j;   
   int maxDiff = array[1] - array[0];
   for(i = 0; i < size; i++)
   {
     for(j = i+1; j < size; j++)
     {        
       if((array[j] - array[i] > maxDiff) && (array[j] > array[i]))   
       maxDiff = array[j] - array[i];
     }    
   }          
   return maxDiff;
}    
 int main(){
    int array[10] = {7, 3, 9, 1, 0, -4, 7, 2, 5, 6}; 
    int maxDiff = getMaxDiff(array, 10);
    printf("Maximum Difference : %d", maxDiff);
 return 0;
}
