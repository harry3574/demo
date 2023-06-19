#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void shuffle(char* str) {
    int length = strlen(str);
    srand(time(NULL));

    for (int i = length - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Remove newline character if present

    shuffle(input);

    printf("Shuffled string: %s\n", input);

    return 0;
}

