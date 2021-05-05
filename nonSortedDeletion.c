#include <stdio.h>

int main(){
    //variable declaration
    int a[50];
    int i,pos,size,option;

    //get size from user
    printf("Enter size:");
    scanf("%d",&size);

     //get array elements from user
    printf("array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    //print array elements
    printf("\nArray elements are:");
    for(i=0;i<size;i++){
        printf("[%d]",a[i]);
    }

    //ask user to whether he want to delete an element or not
    printf("\nDo you want to delete any number?\n\tif yes enter1: ");
    scanf("%d",&option);

    if(option==1){
        //get position of that element
        printf("\n Enter position number:");
        scanf("%d",&pos);

        //swap the element with the last element
        a[pos-1] = a[size-1];
        //decrease the size by 1
        size--;



        //print array after element was deleted
        printf("\nArray after deletion:");
        for(i=0;i<size;i++){
            printf("[%d]",a[i]);
        }
        printf("\n");
    }

    return 0;
}