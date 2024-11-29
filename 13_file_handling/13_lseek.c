// lseek(): Fayl ko'rsatkichini siljitish

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("test.txt", O_RDONLY);  // Faylni o'qish uchun ochish
    if (fd == -1) {
        perror("Faylni ochishda xatolik");
        return 1;
    }

    // Fayl ko'rsatkichini boshidan 10 baytga siljitish
    off_t new_pos = lseek(fd, 10, SEEK_SET);
    if (new_pos == -1) {
        perror("Siljitishda xatolik");
        close(fd);
        return 1;
    }

    // Joriy pozitsiyani tekshirish
    printf("Fayl ko'rsatkichining yangi pozitsiyasi: %ld\n", new_pos);

    // Fayldan o'qish
    char buffer[20];
    ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1) {
        perror("Fayldan o'qishda xatolik");
        close(fd);
        return 1;
    }

    // O'qilgan ma'lumotni ekranga chiqarish
    buffer[bytes_read] = '\0';  // Null terminator qo'yish
    printf("O'qilgan ma'lumot: %s\n", buffer);

    // Faylni yopish
    close(fd);

    return 0;
}
