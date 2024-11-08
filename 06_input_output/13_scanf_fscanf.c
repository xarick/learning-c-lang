#include <stdio.h>

int main() {
    // int yosh;
    // printf("Yoshingizni kiriting: ");
    // scanf("%d", &yosh);
    // printf("Sizning yoshingiz: %d\n", yosh);

    FILE *file;
    int yosh;

    file = fopen("08_fayl.txt", "r"); // Faylni ochish (faqat o'qish rejimida)
    if (file == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    fscanf(file, "%d", &yosh); // Fayldan yoshni o'qish
    printf("Fayldan o'qilgan yosh: %d\n", yosh);

    fclose(file); // Faylni yopish
    return 0;
}
