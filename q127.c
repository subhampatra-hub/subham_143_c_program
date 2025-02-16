#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>  
struct Student { 
    char* name; 
    int id; 
    char age; 
};  
int comparator(const void* p, const void* q) 
{ 
    return strcmp(((struct Student*)p)->name, 
                  ((struct Student*)q)->name); 
} 
int main() 
{ 
    int i = 0, n = 5; 
  
    struct Student arr[n];
    arr[0].id = 1; 
    arr[0].name = "subham"; 
    arr[0].age = 22; 
  
    arr[1].id = 2; 
    arr[1].name = "saurav"; 
    arr[1].age = 23; 
  
    arr[2].id = 3; 
    arr[2].name = "swadina"; 
    arr[2].age = 23; 
  
    arr[3].id = 4; 
    arr[3].name = "chandan"; 
    arr[3].age = 9; 
  
    arr[4].id = 5; 
    arr[4].name = "suraz"; 
    arr[4].age = 10; 
    printf("Unsorted Student Records:\n"); 
    for (i = 0; i < n; i++) { 
        printf("Id = %d, Name = %s, Age = %d \n", 
               arr[i].id, arr[i].name, arr[i].age); 
    } 
    qsort(arr, n, sizeof(struct Student), comparator); 
    printf("\n\nStudent Records sorted by Name:\n"); 
    for (i = 0; i < n; i++) { 
        printf("Id = %d, Name = %s, Age = %d \n", 
               arr[i].id, arr[i].name, arr[i].age); 
    } 
  
    return 0; 
} 