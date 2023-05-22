







#include<stdio.h>



int  minArr(int arr[],int n){
      
     int min = arr[0];
     for (int i = 0; i < n; i++){
     
          if(arr[i]<min)
          {
               // arr[i]=min;
               min=arr[i];

               
          }

          
     }
          printf("%d is the smallest number",min);
     

}





int  maxArr(int arr[],int n){
      
     int max = arr[0];
     for (int i = 0; i < n; i++){
     
          if(arr[i]>max)
          {
               
               max=arr[i];

               
          }

          
     }
          printf("%d is the largest number",max);
     

}


int main()
{
int arr[] = {34,23,24,7,343,34};


     
     // printf("the min element in the arr is %d", maxArr(arr,6));//wrong way
      minArr(arr,6);//right way

 maxArr(arr,6);//right way

     return 0;
}
