#include <stdio.h>
#include <string.h>
#include <zlib.h>

int compress(char* chars, int size) {
    uLong sourcelen = strlen(chars)+1;
    uLong size = compressBound(sourcelen);
    Bytef *compressedData = (Bytef *)malloc(size);
}

int main() {
    char chars[] = {'a','a','b','b','c','c','c'};
    int size = sizeof(chars) / sizeof(chars[0]);
    int newSize = compress(chars, size);
    printf("New length: %d\n", newSize);
    for (int i = 0; i < newSize; i++) {
        printf("%c ", chars[i]);
    }
    printf("\n");
    return 0;
}
