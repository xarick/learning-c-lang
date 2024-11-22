#include <stdio.h>
#include <string.h>

// star oxiri \0 bilan tugaydi
int main() {
    // char str[20] = "Salom, Dunyo!";
    // char str[] = {'S', 'a', 'l', 'o', 'm', '\0'};

    char str[50];

    // printf("Satr kiriting: ");
    // scanf("%s", str);  // Satrni kiritish (faqat bo'shliq bo'lmagan matn)
    // printf("Siz kiritgan satr: %s\n", str);

    printf("Satr kiriting: ");
    fgets(str, sizeof(str), stdin);  // Bo'shliq va bir nechta so'zlarni o'qish
    printf("Siz kiritgan satr: %s", str);

    // strlen() - Satr uzunligini topadi.
    printf("Siz kiritgan satr uzunligi: %d\n", strlen(str));

    // strcpy() - Satrni nusxalash.
    char str1[20], str2[20] = "Salom";
    strcpy(str1, str2);  // str1 = "Salom"

    // strcat() - Satrlarni birlashtirish
    strcat(str1, str2);  // str1 = "SalomSalom"

    // strcmp() - Satrlarni taqqoslash.
    if (strcmp(str1, str2) == 0) {
        printf("Satrlar teng.\n");
    }

    return 0;
}
