#include <stdio.h>

int main(){
    //declaration of variables
    int arr[50];
    int size,i,pos,num,option;

    //get size from user
    printf("Enter size of array: ");
    scanf("%d",&size);

    //check boundary condition
   if(size>50){
       printf("Invalid size: ");
   }else{
       //get array elements from user
       printf("Enter elements of array:");
       for(i=0;i<size;i++){
           scanf("%d",&arr[i]);
       }

        //print array elements
       printf("\nArray elements are: ");
       for(i=0;i<size;i++){
           printf("<%d>",arr[i]);
       }
        //ask user to continue or not
       printf("\nDo you want to enter any elements more? Enter 1 for yes  or 0 for no");
       scanf("%d",&option);

       if(option==1){
           //get the postion of new number
           printf("\nEnter postion :");
           scanf("%d",&pos);
           //get the new number
           printf("\nEnter number:");
           scanf("%d",&num);

            //swap the elements
           for(i=size-1;i>=pos-1;i--){
               arr[i+1]= arr[i];
           }
            
           arr[pos-1]=num;
           //increase the size of array after inserting new number
          size++;

            printf("\nArray elements are After entering new number: ");
            for(i=0;i<size;i++){
                    printf("[%d]",arr[i]);
            }
            printf("\n");


       }else{
           printf("\nFinal Array elements are: ");
           for(i=0;i<size;i++){
              printf("[%d]",arr[i]);
           }
       }

   }

    
    return 0; 
}
