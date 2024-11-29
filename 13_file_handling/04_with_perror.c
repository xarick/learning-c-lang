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
    FILE *fp = fopen("student.dat", "wb");
    if (fp == NULL) {
        perror("Fayl ochishda xatolik yuz berdi");
        return 1;
    }

    // Strukturani faylga yozish
    if (fwrite(&s1, sizeof(struct Student), 1, fp) != 1) {
        perror("Yozishda xatolik yuz berdi");
        fclose(fp);
        return 1;
    }
    fclose(fp);
    printf("Ma'lumot faylga muvaffaqiyatli yozildi.\n");

    // Faylni o'qish rejimida ochamiz
    fp = fopen("student.dat", "rb");
    if (fp == NULL) {
        perror("Fayl ochishda xatolik yuz berdi");
        return 1;
    }

    // Strukturani fayldan o'qish
    if (fread(&s2, sizeof(struct Student), 1, fp) != 1) {
        perror("O'qishda xatolik yuz berdi");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    // O'qilgan ma'lumotni ko'rsatish
    printf("Fayldan o'qilgan ma'lumot:\n");
    printf("ID: %d\n", s2.id);
    printf("Ism: %s\n", s2.name);
    printf("Baholar: %.2f\n", s2.marks);

    return 0;
}
