# Update Links on Pointer Array
Given an integer array and a pointer array, the code changes the addresses in pointer array such that each will point to the new address with a simple formula. Formula is this: 

New address  =  val mod length, where val is initial value that it refers and length is the array length. 

For instance, first pointer will point 4th index at the integer array, since it points 14, then 14 mod 5 = 4.

Second pointer will point 3rd index at the integer array, since it points 8, then 8 mod 5 = 3.

Third pointer will point 1st index at the integer array, since it points 6, then 6 mod 5 = 1.

#### Example
```C
int arr[5] = {14,8,6,5,12};
int *ptrs[5], i=0;
for(i=0; i < 5; i++) 
   ptrs[i] = arr+i;
  
for(i=0; i < 5; i++)   //This code part prints integer array in order.
   printf("%d ", *ptrs[i]);
  ```
   And output will be:

12 5 8 14 6
