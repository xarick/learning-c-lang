#include <stdio.h>

int main() {
    int son;
    printf("Son kiriting: ");
    if (scanf("%d", &son) != 1) {  // Kiritish xatosi yuz bersa
        printf("Xato kiritish. Oqim tozalanmoqda...\n");
        fflush(stdin);  // Oqimni tozalashga harakat qiladi (ba'zi kompilyatorlarda ishlamaydi)
    }
    printf("Siz kiritgan son: %d\n", son);

    // int ch;
    // while ((ch = getchar()) != '\n' && ch != EOF);  // Qolgan barcha belgilarni olib tashlaydi

    return 0;
}
