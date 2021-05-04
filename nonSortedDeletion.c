#include <stdio.h>

int main(){
    //variable declaration
    int a[50];
    int i,pos,size,option;

    printf("Enter size:");
    scanf("%d",&size);

    printf("array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nArray elements are:");
    for(i=0;i<size;i++){
        printf("[%d]",a[i]);
    }

    printf("\nDo you want to delete any number?\n\tif yes enter1: ");
    scanf("%d",&option);

    if(option==1){
        printf("\n Enter position number:");
        scanf("%d",&pos);

        a[pos-1] = a[size-1];
        size--;

        printf("\nArray after deletion:");
        for(i=0;i<size;i++){
            printf("[%d]",a[i]);
        }
        printf("\n");
    }

    return 0;
}