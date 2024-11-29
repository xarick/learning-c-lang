#include <stdio.h>
#include <stdlib.h>

// Strukturani e'lon qilish
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {1, "Ali", 85.5};
    struct Student s2;

    // Faylni yozish rejimida ochamiz
    FILE *fp = fopen("student2.dat", "wb");
    if (fp == NULL) {
        printf("Fayl ochishda xatolik yuz berdi!\n");
        return 1;
    }

    // Strukturani faylga yozish
    fwrite(&s1, sizeof(struct Student), 1, fp);
    fclose(fp);
    printf("Ma'lumot faylga muvaffaqiyatli yozildi.\n");

    // Faylni o'qish rejimida ochamiz
    fp = fopen("student.dat", "rb");
    if (fp == NULL) {
        printf("Fayl ochishda xatolik yuz berdi!\n");
        return 1;
    }

    // Strukturani fayldan o'qish
    fread(&s2, sizeof(struct Student), 1, fp);
    fclose(fp);

    // O'qilgan ma'lumotni ko'rsatish
    printf("Fayldan o'qilgan ma'lumot:\n");
    printf("ID: %d\n", s2.id);
    printf("Ism: %s\n", s2.name);
    printf("Baholar: %.2f\n", s2.marks);

    return 0;
}
