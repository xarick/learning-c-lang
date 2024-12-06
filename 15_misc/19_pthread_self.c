#include <stdio.h>
#include <pthread.h>

void* myThreadFunc(void* arg) {
    pthread_t threadId = pthread_self();  // Joriy thread identifikatorini olish
    printf("Joriy Thread ID: %ld\n", threadId);
    return NULL;
}

int main() {
    pthread_t thread;

    // Yangi thread yaratish
    pthread_create(&thread, NULL, myThreadFunc, NULL);

    // Main thread identifikatorini olish
    pthread_t mainThreadId = pthread_self();
    printf("Main Thread ID: %ld\n", mainThreadId);

    // Threadni kutish
    pthread_join(thread, NULL);

    return 0;
}
