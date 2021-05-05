#include <stdio.h>

int main(){
    //variable declaration
    int a[50];
    int i,pos,size,temp;

    //get size of array from user
    printf("Enter size:");
    scanf("%d",&size);

    //get array elements
    printf("array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    //get array elements
    printf("\nArray element:");
    for(i=0;i<size;i++){
        printf("[%d]",a[i]);
    }

    //get postion of element want to delete
    printf("\n Enter position number:");
    scanf("%d",&pos);

    if(pos<=0 || pos>size){
        printf("Invalid position");
    }else{
        for(i=pos-1;i<size-1;i++){
            a[i] = a[i+1];
        }
        size--;

        printf("\nArray after deletion:");
        for(i=0;i<size;i++){
            printf("[%d]",a[i]);
        }
        printf("\n");
    }

    

    return 0;
}