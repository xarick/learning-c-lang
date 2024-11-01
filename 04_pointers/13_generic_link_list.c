#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bog‘langan ro‘yxat tugunining strukturasi
struct Node {
    void *data;              // Har qanday turdagi ma'lumotni saqlash uchun void pointer
    struct Node *next;       // Keyingi tugunga ishora
};

// Yangi tugun yaratish uchun funksiya
struct Node* createNode(void *data, size_t dataSize) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = malloc(dataSize);       // Ma'lumot uchun xotira ajratish
    newNode->next = NULL;

    // Ma'lumotni o'z ichiga olish
    memcpy(newNode->data, data, dataSize);
    return newNode;
}

// Ro'yxatga yangi tugun qo'shish funksiyasi
void push(struct Node** head, void *data, size_t dataSize) {
    struct Node* newNode = createNode(data, dataSize);
    newNode->next = *head;
    *head = newNode;
}

// Ma'lumotlarni chiqarish funksiyasi
void printList(struct Node *node, void (*fptr)(void *)) {
    while (node != NULL) {
        (*fptr)(node->data);      // Ma'lumotni chiqarish uchun funksiya ko'rsatgichi
        node = node->next;
    }
}

// Butun sonlarni chop etish funksiyasi
void printInt(void *data) {
    printf("%d -> ", *(int *)data);
}

// Qatorlarni chop etish funksiyasi
void printStr(void *data) {
    printf("%s -> ", (char *)data);
}

int main() {
    struct Node *head = NULL;

    // Butun sonlarni ro'yxatga qo'shish
    int intData[] = {10, 20, 30};
    for (int i = 0; i < 3; i++)
        push(&head, &intData[i], sizeof(intData[i]));

    printf("Integer Linked List: ");
    printList(head, printInt);
    printf("NULL\n");

    // Qatorlarni ro'yxatga qo'shish
    struct Node *stringHead = NULL;
    char *strData[] = {"salom", "dunyo", "C tili"};
    for (int i = 0; i < 3; i++)
        push(&stringHead, strData[i], strlen(strData[i]) + 1);

    printf("String Linked List: ");
    printList(stringHead, printStr);
    printf("NULL\n");

    return 0;
}
