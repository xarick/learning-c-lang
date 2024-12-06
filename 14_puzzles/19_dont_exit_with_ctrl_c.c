#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// SIGINT signalini ushlash uchun signal handler
void handle_sigint(int sig) {
    printf("\nSIGINT (Ctrl+C) signalini oldik, lekin dastur tugamaydi!\n");
    // Hech narsa qilmaslik; dasturni davom ettirish
}

int main() {
    // SIGINT signalini handle_sigint funksiyasiga yo'naltirish
    signal(SIGINT, handle_sigint);

    printf("Dastur ishlamoqda... Ctrl+C bosib, signalni yuboring.\n");

    // Dastur davom etadi, foydalanuvchi Ctrl+C ni bosganida u tugamaydi
    while (1) {
        // Dastur davom etmoqda, foydalanuvchi Ctrl+C ni bossa, signal ushlanadi
        sleep(6);  // Bir soniya kutish, agar signal bo'lsa, unga javob berish
    }

    return 0;
}
