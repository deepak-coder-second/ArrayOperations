#include <stdio.h>

int main(){
    //variable declaration
    int a[50];
    int i,j,size,temp;

    //get size from user
    printf("Enter size:");
    scanf("%d",&size);

    //get array elements from user
    printf("array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    //print array elements
    printf("\nArray before sorting:");
    for(i=0;i<size;i++){
        printf("[%d]",a[i]);
    }

    //select elements and compare and swap

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){

            if(a[i]>a[j]){
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

    //print array after sorting

    printf("\nArray after sorting:");
    for(i=0;i<size;i++){
        printf("[%d]",a[i]);
    }
    printf("\n");

    return 0;
}