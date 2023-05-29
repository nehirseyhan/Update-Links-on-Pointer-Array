#include "pointerUpdate.h"

void update(int * arr[], int length){
int i, *oldindex[100],newindex[100];
for(i=0;i<length;i++)
{
    oldindex[i] = arr[i];
    newindex[i] = *arr[i] % length;
}  
for(i=0;i<length;i++)
{
    arr[i] = oldindex[newindex[i]];
}
}