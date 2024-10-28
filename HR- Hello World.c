#include <stdio.h>
int main() 
{
    char sentence[100];
    printf("Enter a sentence: ");
    scanf("%99[^\n]", sentence);
    printf("%s\n", sentence);
    return 0;
}