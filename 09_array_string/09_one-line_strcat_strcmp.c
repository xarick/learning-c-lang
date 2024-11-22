#include <stdio.h>
#include <string.h>

// Makro aniqlash (menda ishlamadi)
#define STRCAT(dest, src) ({ char *d = dest + strlen(dest); while((*d++ = *src++)); dest; })
#define STRCMP(s1, s2) ({ while(*s1 && (*s1 == *s2)) { s1++; s2++; } *(unsigned char *)s1 - *(unsigned char *)s2; })

int main() {
    // STRCAT sinovi
    char str1[50] = "Salom, ";
    char str2[] = "Dunyo!";
    STRCAT(str1, str2);
    printf("Birlashtirilgan satr: %s\n", str1); // Natija: Salom, Dunyo!

    // STRCMP sinovi
    char str3[] = "Salom";
    char str4[] = "Salom";
    char str5[] = "Dunyo";

    printf("Taqqoslash 1: %d\n", STRCMP(str3, str4)); // Natija: 0 (teng)
    printf("Taqqoslash 2: %d\n", STRCMP(str3, str5)); // Natija: > 0 (farqli)

    return 0;
}
