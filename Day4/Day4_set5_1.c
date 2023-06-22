#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function to return sum of elements
//in an array of size n

int sum(int arr[],int n){
    // base case
    if(n==0){
        return 0;
    }
    else{
        // recursily calling the function
        return arr[0]+sum(arr+1,n-1);
    }

}
int main(){
    int arr[]={12,84,20,36,64,56,72,10,45,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",sum(arr,n));

    return 0;
}