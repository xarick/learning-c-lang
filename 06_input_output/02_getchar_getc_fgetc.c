#include <stdio.h>
#include <conio.h> // getch va getche uchun (windows)

// getchar() - foydalanuvchidan bitta belgi olish uchun ishlatiladi 
void getCustomChar() {
    int ch = getchar();
    if (ch != EOF) {
        printf("Siz kiritgan belgi: %c, raqam: %d\n", ch, (int)ch);
    } else {
        printf("Fayl oxiri yoki xato yuz berdi\n");
    }
}

// fgetc() - fayl oqimidan bitta belgi o'qish uchun ishlatiladi.
void getCustomFGetc() {
    FILE *file = fopen("02_file.txt", "r");
    if (file) {
        int ch = fgetc(file);  // Fayldan bitta belgi o‘qish
        if (ch != EOF) {
            printf("Fayldan olingan belgi: %c\n", ch);
        } else {
            printf("Fayl oxiri yoki xato yuz berdi\n");
        }
        fclose(file);
    } else {
        printf("Faylni ochib bo‘lmadi\n");
    }
}

// getc() - fayl oqimidan bitta belgi o'qish uchun ishlatiladi.
// getc() ba'zi tizimlarda tezroq ishlashi uchun makro sifatida ishlashi mumkin, 
// lekin fgetc() doimo standart funksiya sifatida qoladi
void getCustomGetc() {
    FILE *file = fopen("02_file.txt", "r");
    if (file) {
        int ch = getc(file);  // Fayldan bitta belgi o‘qish
        if (ch != EOF) {
            printf("Fayldan olingan belgi: %c\n", ch);
        } else {
            printf("Fayl oxiri yoki xato yuz berdi\n");
        }
        fclose(file);
    } else {
        printf("Faylni ochib bo‘lmadi\n");
    }
}

int main() {
    getCustomChar();
    getCustomFGetc();
    getCustomGetc();

    // getch()
    int belgi;
    printf("Maxfiy belgini kiriting: ");
    belgi = getch();  // Belgini ekranda ko'rsatmasdan oladi
    printf("\nSiz kiritgan belgi: %c\n", belgi);

    int belgi_che;
    printf("Belgini kiriting: ");
    belgi_che = getche();  // Belgini ekranda ko'rsatib oladi
    printf("\nSiz kiritgan belgi: %c\n", belgi_che);

    return 0;
}
