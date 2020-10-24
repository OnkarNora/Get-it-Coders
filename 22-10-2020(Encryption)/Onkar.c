// Roll No. 02 Div : B
// https://www.hackerrank.com/challenges/encryption/problem
// Encryption

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encryption(char* s) {

    int i,j=0,count=0;
    int len_s = strlen(s);

    int r = floor(sqrt((double)len_s));
    int c = ceil(sqrt((double)len_s));

    while(r*c<len_s)
        r++;
        
    char **res = (char**)malloc((r)*sizeof(char*));

    for(i = 0; i < r; i++)
        res[i] = malloc((c) * sizeof(char));

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            res[i][j] = s[count];
            count++;
        }
        res[i][j]='\0';
    }

    count=0;
    char *result = (char*)malloc((len_s+c)*sizeof(char));
    
    for(j=0;j<c;j++)
    {
        for(i=0;i<r&&res[i][j]!='\0';i++)
        {
            
            result[count] = res[i][j];
            count++;
        }
        result[count]=' ';
        
        count++;
    }
    result[count-1]='\0';
    return result;
}

int main()
{
    char *s=(char*)malloc(82*sizeof(char));

    scanf("%s",s);

    char* result = encryption(s);

    printf("%s\n", result);

    return 0;
}

/*Sample Output:
wclwfoznbmyycxvaxagjhtexdkwjqhlojykopldsxesbbnezqmixfpujbssrbfhlgubvfhpfliimvmnnyny                                                                              bawobphfy
wmgjpnull cyjqlejgi lyhhdzbui wctlsqsbm fxeoxmsvv ovxjeirfm zadysxbhn nxkkbffpn bawobphfy
*/
