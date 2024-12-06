#include <stdio.h>
#include <pthread.h>

void* myThreadFunc(void* arg) {
    printf("Thread ishlamoqda: %ld\n", pthread_self());
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Ikkita thread yaratish
    pthread_create(&thread1, NULL, myThreadFunc, NULL);
    pthread_create(&thread2, NULL, myThreadFunc, NULL);

    // Thread identifikatorlarini solishtirish
    if (pthread_equal(thread1, thread2)) {
        printf("Thread1 va Thread2 bir xil.\n");
    } else {
        printf("Thread1 va Thread2 bir xil emas.\n");
    }

    // Threadlar tugashini kutish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
