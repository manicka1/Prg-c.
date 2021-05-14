#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>

int main()
{
    char str[] ="ABCDEFGHIJKLMNOPQRSTUVXYZ";
    int length = strlen(str);
    char code;
    printf("\n tisknou znaky v str:\n");
    for (int i = 0; i < length; i++)
    printf("%c: %d\n", str[i], str[i]);
    for (int i = 0; i < length; i++)
    {
        if('A' < str[i] && str[i] < 'Z')
        {
            code = str[i] + 4;
            if(code > 'Z') code = code - 26;
        }
        else code = str[i];
        printf("%c",code);
    
    }
    return 0;
}
