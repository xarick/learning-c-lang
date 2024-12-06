#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// Thread funksiyasi: raqamlarni chop etish
void *printNumbers(void *arg) {
    for (int i = 1; i <= 5; i++) {
        printf("Raqam: %d\n", i);
        sleep(1); // 1 soniya kutish
    }
    return NULL;
}

// Thread funksiyasi: matn chop etish
void *printMessage(void *arg) {
    for (int i = 0; i < 5; i++) {
        printf("Xabar: Hello, World!\n");
        sleep(1); // 1 soniya kutish
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Threadlarni yaratish
    pthread_create(&thread1, NULL, printNumbers, NULL);
    pthread_create(&thread2, NULL, printMessage, NULL);

    // Threadlar tugashini kutish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Barcha threadlar tugadi.\n");
    return 0;
}
