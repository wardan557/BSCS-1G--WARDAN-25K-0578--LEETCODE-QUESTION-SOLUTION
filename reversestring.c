#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    int size = strlen(s);
    int i = 0, j = size - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    printf("[");
    int k;
    for ( k = 0; k < size; k++) {
        printf("\"%c\"", s[k]);
        if (k < size - 1)
            printf(",");
    }
    printf("]\n");

    return 0;
}

