// Designer pdf viewer
// https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
// Onkar Nora

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int designerPdfViewer(int h_count, int h[], char* word) {
    int i,max = h[word[0]-97];

    for(i=0;word[i]!='\0';i++)
    {
        if (h[word[i]-97] > max)
            max = h[word[i]-97];
    }

    return max*i;

}

int main()
{
    int h[26],h_count=26;
    char word[10];

    for(int i=0;i<26;i++)
        scanf("%d",&h[i]);

    scanf("\n%s",word);

    printf("%d",designerPdfViewer(h_count, h, word));

    return 0;
}