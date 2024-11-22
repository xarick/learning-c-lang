// char str[] = "Hello";
// char *str = "Hello";

// Xotirada joylashuvi
// Global yoki statik massivlar – data segmentda saqlanadi.
// Lokal massivlar – stackda saqlanadi.
// Pointer orqali saqlangan satrlar – text segment (faqat o‘qish uchun).
// Dinamik ravishda ajratilgan satrlar – heapda saqlanadi.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(6 * sizeof(char)); // 6 bayt ajratiladi
    strcpy(str, "Hello");
    printf("String: %s\n", str);
    free(str); // Xotirani bo‘shatish kerak

    char str2[] = "Static";
    printf("%s\n", str2); 

    char *str3 = "ReadOnly";
    printf("%s\n", str3);

    // dinamik xotira
    char *str4 = (char *)malloc(10);
    strcpy(str4, "Dynamic");
    printf("%s\n", str4);
    free(str4);

    return 0;
}
