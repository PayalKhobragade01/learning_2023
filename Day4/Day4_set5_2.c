#include<stdio.h>
struct pair{
    int min;
    int max;

};
struct pair getMinMax(int arr[],int n){
    struct pair minmax;
    int i;
     
     if(n==1)
     {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
     }
     if(arr[0]>arr[1]){
        minmax.max=arr[0];
        minmax.min=arr[1];
     }
     else{
         minmax.max=arr[1];
        minmax.min=arr[0];
     }
     for (i=2;i<n;i++){
        if(arr[i]>minmax.max)
        minmax.max=arr[i];
        else if(arr[i]<minmax.min)
        minmax.min=arr[i];
     }
     return minmax;



}
int main(){
    int arr[]={64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
int arr_size = 6;
struct pair minmax = getMinMax (arr, arr_size);
printf("Minimum element is %d\n", minmax.min);
printf("Maximum element is %d", minmax.max);
getchar();
}