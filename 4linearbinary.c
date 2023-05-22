// #include<stdio.h>
// #include<conio.h>

// // int linear(int arr[],int element,int size){
// //     for(int i=0;i<=size;i++){
// //       if(element==arr[i]) {
// //           return i;
        
// //       } 
      
// //     }
// //     return -1;
 
// // }



// int binary(int arr[],int element,int size)
// {
//     int low=0;
//     int mid;
//     int high=size-1;

//     while(low<=high)
//     {
//     mid=low+high/2;
       
    
//         if (element==arr[mid]){
//             return mid;
        
//         }
//         if (arr[mid]<element){
//             low=mid+1;
//         }



//         else{
//             high=mid-1;
//         }
//         /* code */
//     }
//     return -1;



// }


// int main()
// {
//     int arr[]={20,30,40,50,60,5,10};//for binary
//     int size=7;
//     int element=60;
    
//     // printf("element is found at index %d" , linear(arr,element,size)  );


//     printf("element is  found at index %d",binary(arr,element,size));
// return 0;
    
// }



// //for self practice

// // #include<stdio.h>
// // #include<conio.h>

// // int linear(int arr[],int element,int size)
// // {
// //     for(int i=0;i<=size;i++)
// //         {
// //             if (element==arr[i])
// //             {
// //                 return i;
// //             }
            
// //         }
// //         return -1;

// // }


// // int main()
// // {
// //     int arr[]={3,8,6,2,5,4};
// //     int size=
// // }



#include <stdio.h>  
int binarySearch(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {        mid = (beg + end)/2;    
/* if the item to be searched is present at middle */  
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    
            /* if the item to be searched is smaller than middle, then it can only be in left subarray */  
        else if(a[mid] < val)     
        {  
            return binarySearch(a, mid+1, end, val);    
        }    
            /* if the item to be searched is greater than middle, then it can only be in right subarray */  
        else     
        {  
            return binarySearch(a, beg, mid-1, val);    
        }          
    }    
    return -1;     
}   
int main() {  
  int a[] = {11, 14, 25, 30, 40, 41, 52, 57, 70}; // given array  
  int val = 52; // value to be searched  
  int n = sizeof(a) / sizeof(a[0]); // size of array  
  int res = binarySearch(a, 0, n-1, val); // Store result  
  printf("The elements of the array are - ");  
  for (int i = 0; i < n; i++)  
  printf("%d ", a[i]);   
  printf("\nElement to be searched is - %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array", res);  
  return 0;  
}  