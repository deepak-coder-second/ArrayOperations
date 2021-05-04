#include <stdio.h>

int main(){
    //variable declaration
    int a[50];
    int i,pos,size,temp;

    printf("Enter size:");
    scanf("%d",&size);

    printf("array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nArray element:");
    for(i=0;i<size;i++){
        printf("[%d]",a[i]);
    }

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