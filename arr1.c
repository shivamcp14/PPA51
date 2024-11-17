#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30};  // consider base address of arr as 100
    int no = 2;

    // Print values
    printf("%d\n", arr[0]);      
    printf("%d\n", arr[no]);       
    printf("%d\n", arr[3-1]);     
    printf("%d\n", arr[4]);        
    printf("%d\n", 2[arr]);        

    // Print addresses
    printf("%p\n", (void *)arr);    
    printf("%p\n", (void *)(arr + 1));    
    printf("%p\n", (void *)(&arr + 1));   
    printf("%p\n", (void *)(arr + 3));    
    printf("%p\n", (void *)(&arr[3]));    
    printf("%p\n", (void *)(&arr[5]));    

    return 0;
}
