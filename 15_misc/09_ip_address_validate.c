#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Oktetni tekshiruvchi funksiya
int isValidOctet(const char *str) {
    int len = strlen(str);

    // Bo'sh yoki uzunlik 0 bo'lsa, noto'g'ri
    if (len == 0 || len > 3) return 0;

    // Har bir belgini raqam ekanligini tekshirish
    for (int i = 0; i < len; i++) {
        if (!isdigit(str[i])) return 0;
    }

    // Oktet qiymatini son sifatida o'qish
    int num = atoi(str);

    // Qiymat 0-255 oralig'ida bo'lishi kerak
    if (num < 0 || num > 255) return 0;

    // 0 bilan boshlanadigan ko'p xonali raqam noto'g'ri
    if (len > 1 && str[0] == '0') return 0;

    return 1;
}

// IP manzilni tekshiruvchi funksiya
int isValidIP(const char *ip) {
    char ipCopy[20]; // Kiritilgan IP manzil nusxasini olish
    strcpy(ipCopy, ip);

    // IPni "." bo'yicha bo'lish
    char *token = strtok(ipCopy, ".");
    int count = 0;

    while (token != NULL) {
        // Har bir oktetni tekshirish
        if (!isValidOctet(token)) return 0;
        count++;
        token = strtok(NULL, ".");
    }

    // 4 ta oktet mavjud bo'lishi kerak
    return count == 4;
}

int main() {
    char ip[20];
    printf("IP manzilni kiriting: ");
    scanf("%s", ip);

    if (isValidIP(ip)) {
        printf("Kiritilgan IP manzil to'g'ri.\n");
    } else {
        printf("Kiritilgan IP manzil noto'g'ri.\n");
    }

    return 0;
}
