// Sorting Array of Strings
// https://www.hackerrank.com/challenges/sorting-array-of-strings/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    
    if (strcmp(a,b)>0)
        return 1;
    else 
        return 0;
     
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    if (strcmp(a,b)>0)
        return 0;
    else 
        return 1;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int la=0,lb=0;
    int *f = (int *)malloc(27*sizeof(int));
    
    for(int i=0;i<26;i++)
        f[i]=0;

    int lena=strlen(a);
    int lenb=strlen(b);

    for(int i=0;i<lena;i++)
    {
        f[a[i]-97]++;
        if (f[a[i]-97]==1)
            la++;       
    }

    for(int i=0;i<26;i++)
        f[i]=0;
    for(int i=0;i<lenb;i++)
    {
        f[b[i]-97]++;
        if (f[b[i]-97]==1)
            lb++;       
    }
    
    if (lb<la) return 1;
    else if (lb==la) return lexicographic_sort(a, b);  
    else return 0;
     
    
}

int sort_by_length(const char* a, const char* b) {
    int la,lb;
    la = strlen(a);
    lb = strlen(b);
    if (lb<la)
        return 1;
    else if (lb==la)
        return lexicographic_sort(a, b);  
    else 
        return 0;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i,j,l,flag=1;
    for(i=0;i<len&&flag;i++)
    {
        flag=0;
        l = strlen(arr[i]);
        for(j=0;j<len-1-i;j++)
            if ((*cmp_func)(arr[j],arr[j+1]))
            {
                char *temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}