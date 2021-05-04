#include <stdio.h>

int main(){
    //variable declaration
    int a[50];
    int i,j,size,temp;

    printf("Enter size:");
    scanf("%d",&size);

    printf("array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nArray before sorting:");
    for(i=0;i<size;i++){
        printf("[%d]",a[i]);
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){

            if(a[i]>a[j]){
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

    printf("\nArray after sorting:");
    for(i=0;i<size;i++){
        printf("[%d]",a[i]);
    }
    printf("\n");

    return 0;
}