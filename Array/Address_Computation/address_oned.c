#include <stdio.h>
int main (){
    int l;
    printf("Enter the size of array\n");
    scanf("%d", &l);
    int *point;
    int a[l];
    point = a;
    printf("%p\n", point);
    printf("Enter the elements of array\n");
    for (int i = 0; i < l; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter elements you want to find address of\n");
    int ele;
    scanf("%d", &ele);
    for( int i = 0; i < l; i++){
        if(a[i] == ele){
            break;
        } else {
            point++;
        }
    }
    printf("The address of element is %p\n", point);
    return 0;
}