#include <stdio.h>

void DynamicChar() {
    char *str = malloc(100);
    if (str == NULL) {
        printf("Xotira ajratishda xato!\n");
        return 1;
    }

    strcpy(str, "Bu juda uzun string ");
    strcat(str, "va u bir nechta qatorlarga ");
    strcat(str, "bo'lingan holda yozilgan.");

    printf("4 - %s\n", str);

    free(str); // Xotirani bo'shatish
}

int main() {
    char str[] = "Bu juda uzun string "
                 "va u bir nechta qatorlarga "
                 "bo'lingan holda yozilgan.";
    printf("1 - %s\n", str);

    // 2-usul
    char str2[] = "Bu juda uzun string \
va u bir nechta qatorlarga \
bo'lingan holda yozilgan.";
    printf("2 - %s\n", str2);

    // 3-usul
    char str3[100] = "Bu juda uzun string ";
    strcat(str3, "va u bir nechta qatorlarga ");
    strcat(str3, "bo'lingan holda yozilgan.");
    printf("3 - %s\n", str3);

    // 4-usul
    DynamicChar();

    return 0;
}
