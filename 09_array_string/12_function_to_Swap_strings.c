#include <stdio.h>

//  Pointerlar yordamida ikki satrni almashtirish
void swapStringsPointer(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

//  Massivlar yordamida ikki satrni almashtirish
void swapStringsArray(char str1[], char str2[]) {
    char temp[100]; // Yordamchi massiv
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char *str1 = "Hello";
    char *str2 = "World";
    printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);
    swapStringsPointer(&str1, &str2);
    printf("After swap: str1 = %s, str2 = %s\n", str1, str2);

    char str1M[100] = "Hello";
    char str2M[100] = "World";
    printf("Before swap: str1 = %s, str2 = %s\n", str1M, str2M);
    swapStringsArray(str1M, str2M);
    printf("After swap: str1 = %s, str2 = %s\n", str1M, str2M);

    return 0;
}


// Qaysi usulni tanlash kerak?
// Agar pointerlar bilan ishlayotgan bo‘lsangiz va katta o‘lchamli satrlar bo‘lsa, birinchi usul yaxshiroq.
// Agar massivlar bilan ishlayotgan bo‘lsangiz va cheklangan o‘lcham bo‘lsa, ikkinchi usulni qo‘llashingiz mumkin.