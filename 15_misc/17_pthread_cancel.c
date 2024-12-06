#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* myThreadFunc(void* arg) {
    printf("Thread ishlayapti...\n");
    while (1) {
        // Thread doimiy ishlayapti
    }
    return NULL;
}

int main() {
    pthread_t thread;

    // Thread yaratish
    if (pthread_create(&thread, NULL, myThreadFunc, NULL) != 0) {
        perror("Thread yaratishda xatolik");
        return 1;
    }

    // 2 soniya kutish
    sleep(2);

    // Threadni bekor qilish
    printf("Threadni bekor qilish...\n");
    pthread_cancel(thread);

    // Thread tugashini kutish
    if (pthread_join(thread, NULL) != 0) {
        perror("Threadni biriktirishda xatolik");
        return 1;
    }

    printf("Thread bekor qilindi.\n");
    return 0;
}
