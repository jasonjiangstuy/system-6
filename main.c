#include "stdio.h"
#include "time.h"
int main() {
  int int_array[10];
  int_array[0] = 0;
  int pointer = 0;
  srand( time(NULL));
  for (pointer = 0; pointer < sizeof(int_array); pointer++){
    if (pointer == 0){
      int_array[pointer] = 0;
    }else{
      int_array[pointer] = rand();
    }
  }
  for (pointer = 0; pointer < sizeof(int_array) / sizeof(int_array[0]); pointer++){
    printf("Element %d of the first_array: %d\n", pointer, int_array[pointer]);
  }

  int int_arrayp2[10];
  int *firstarray = int_array;
  int *secondarray = int_arrayp2;
  for (pointer = 0; pointer < 10; pointer ++ ){
    //note cannot find size of array from pointer
    *(secondarray+pointer) = *(firstarray + (9 - pointer));
  }
  for (pointer = 0; pointer < sizeof(int_arrayp2) / sizeof(int_arrayp2[0]); pointer++){
    printf("Element %d of the second_array: %d\n", pointer, *(secondarray + pointer));
  }
  return 0;
}
