#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size = 256; // Katta matn uchun joy ajratish
    char *dynamicText = (char *)malloc(size * sizeof(char));

    if (dynamicText == NULL) {
        printf("Xotira ajratishda xatolik\n");
        return 1;
    }

    strcpy(dynamicText, "Bu yerda juda uzun matn saqlanishi mumkin.");
    printf("%s\n", dynamicText);

    free(dynamicText);  // Xotirani bo'shatish
    return 0;
}
