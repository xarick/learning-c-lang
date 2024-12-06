#include <stdio.h>

int main() {
    char buffer[100]; // Bu erda chiqish uchun xotira ajratiladi
    setbuf(stdout, buffer); // stdout uchun bu xotiraga yozish

    printf("Bu ekranga chiqadigan matn.\n");

    // Chiqishni ko'rsatish
    printf("Bufferda saqlangan matn: %s\n", buffer);

    printf("Bu chiqishni darhol ko'rsatadi.");
    fflush(stdout); // Darhol chiqarishni amalga oshiradi
    
    return 0;
}
