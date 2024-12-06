#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock; // Mutex obyekti
int commonResource = 0; // Umumiy resurs

void *increment(void *arg) {
    pthread_mutex_lock(&lock); // Mutexni qulfga olish
    for (int i = 0; i < 5; i++) {
        commonResource++;
        printf("Thread %ld: commonResource = %d\n", (long)arg, commonResource);
    }
    pthread_mutex_unlock(&lock); // Mutexni ochish
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Mutexni boshlash
    pthread_mutex_init(&lock, NULL);

    // Threadlarni yaratish
    pthread_create(&thread1, NULL, increment, (void *)1);
    pthread_create(&thread2, NULL, increment, (void *)2);

    // Threadlar tugashini kutish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Mutexni yo'q qilish
    pthread_mutex_destroy(&lock);

    printf("Final commonResource = %d\n", commonResource);
    return 0;
}
