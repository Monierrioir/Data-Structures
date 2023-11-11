#include <stdio.h>
void insertion(int arr[],int size);

int main() {
    int arr[]={7,3,5,8,2,9,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertion(arr,size);
    printf("The sorted array is: ");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
void insertion(int arr[],int size){
    int a,b,key;
    for(a=1;a<size;a++){
        key=arr[a];
        for(b=a-1;b>=0 && key <= arr[b];b--)
            arr[b+1]=arr[b];
        arr[b+1]=key;
    }
}