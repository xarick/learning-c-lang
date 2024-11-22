#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// strdup funksiyasi kiritilgan satrni ko‘chiradi va yangi xotira ajratib, natijani qaytaradi.
void strDumpCustom() {
    const char *original = "Hello, world!";
    char *copy = strdup(original);

    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy); // Ajratilgan xotirani bo'shatish
    } else {
        printf("Memory allocation failed.\n");
    }
}

// strndup funksiyasi strdup funksiyasiga o‘xshaydi, ammo bu yerda dasturchi satrning nechta belgisi ko‘chirilishi kerakligini ko‘rsatadi
void strNDumpCustom () {
    const char *original = "Hello, world!";
    char *copy = strndup(original, 5); // Faqatgina dastlabki 5 belgi ko‘chiriladi

    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Partial Copy: %s\n", copy);
        free(copy); // Ajratilgan xotirani bo'shatish
    } else {
        printf("Memory allocation failed.\n");
    }
}

int main() {
    strDumpCustom();
    strNDumpCustom();

    // const char *original = "Hello, world!";
    // char *copy = my_strndup(original, 5); // Faqat 5 belgini nusxalash

    return 0;
}

// strdup() — satrni to‘liq nusxalash uchun qulay.
// strndup() — satrning qismini nusxalash uchun ishlatiladi.


// custom func
// char *my_strndup(const char *str, size_t n) {
//     size_t len = strnlen(str, n); // Satr uzunligini topish (n chegarasi bilan)
//     char *copy = malloc(len + 1); // Yangi satr uchun xotira ajratish
//     if (copy) {
//         memcpy(copy, str, len); // Belgilarni nusxalash
//         copy[len] = '\0'; // Yangi satrni null bilan tugatish
//     }
//     return copy;
// }