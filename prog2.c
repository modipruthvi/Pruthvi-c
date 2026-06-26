#include <stdio.h>

int main() {
    char str[100];
    int i;
    
    printf("Enter a sentence: ");
    gets(str);  

    printf("Vowels in the sentence: ");
    for (i = 0; i < str; i++) 
	{
        char ch = str[i];
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u'  )
		{
            printf("%c ", ch);
        }
    }
    printf("\n");

    return 0;
}

