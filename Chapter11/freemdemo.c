#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int *ptr2;
    // printf("The Size of Int on My PC is %d\n",sizeof(int));
    // printf("The Size of char on My PC is %d\n",sizeof(char));
    // printf("The Size of float on My PC is %d\n",sizeof(float));
    ptr = (int*)malloc(6 * sizeof(int));
    for(int i=0; i<6; i++){
        ptr2 = (int*)malloc(600000 * sizeof(int));
        printf("Enter The Value of %d Element\n",i);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }
    for(int i=0; i<6; i++){
        printf("The Value of %d Element is %d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}