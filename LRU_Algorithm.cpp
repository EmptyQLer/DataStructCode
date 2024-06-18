//
// Created by Administrator on 2024/6/7.
// LRU算法，也为一种页面置换算法，旨在降低缺页频率
// 算法思想：当发生缺页需要进行页面置换时，总是选择最久未使用的页面进行置换
//

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct LRUCache {
    int capacity;
    Node *head;
    Node *tail;
    Node **pages; // 用于快速查找页面是否存在
} LRUCache;

Node* newNode(int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = key;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

LRUCache* LRUCacheCreate(int capacity) {
    LRUCache* cache = (LRUCache*)malloc(sizeof(LRUCache));
    cache->capacity = capacity;
    cache->head = newNode(-1); // 哨兵节点
    cache->tail = newNode(-1);
    cache->head->next = cache->tail;
    cache->tail->prev = cache->head;
    cache->pages = (Node**)calloc(capacity, sizeof(Node*));
    return cache;
}

void LRUCacheInsert(LRUCache* cache, int key) {
    Node* node = newNode(key);
    if(cache->pages[key]) { // 页面已存在，先删除旧节点
        Node* oldNode = cache->pages[key];
        oldNode->prev->next = oldNode->next;
        oldNode->next->prev = oldNode->prev;
        free(oldNode);
    } else if(cache->capacity == cache->tail->val - cache->head->val - 1) { // 缓存满，淘汰尾部节点
        Node* delNode = cache->tail->prev;
        cache->tail->prev = delNode->prev;
        delNode->prev->next = cache->tail;
        free(delNode);
    }
    cache->pages[key] = node;
    node->next = cache->head->next;
    node->prev = cache->head;
    cache->head->next->prev = node;
    cache->head->next = node;
}

int main() {
    LRUCache* cache = LRUCacheCreate(2);
    LRUCacheInsert(cache, 1);
    LRUCacheInsert(cache, 2);
    LRUCacheInsert(cache, 1); // 此时2变为最近最少使用
    LRUCacheInsert(cache, 3); // 需要淘汰2，因为缓存满了且2是最久未被访问的
    return 0;
}
*/



/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    int value;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct LRUCache {
    int capacity;
    int size;
    Node* head;
    Node* tail;
    Node** hash;
} LRUCache;

LRUCache* createCache(int capacity);
void deleteNode(LRUCache* cache, Node* node);
void addNode(LRUCache* cache, Node* node);
void moveToHead(LRUCache* cache, Node* node);
void setLRU(LRUCache* cache, int key, int value);
int getLRU(LRUCache* cache, int key);
void freeCache(LRUCache* cache);

int main() {
    LRUCache* cache = createCache(3);
    setLRU(cache, 1, 10);
    setLRU(cache, 2, 20);
    setLRU(cache, 3, 30);
    printf("%d\n", getLRU(cache, 2));
    setLRU(cache, 4, 40);
    printf("%d\n", getLRU(cache, 1));
    printf("%d\n", getLRU(cache, 4));
    freeCache(cache);
    return 0;
}

LRUCache* createCache(int capacity) {
    LRUCache* cache = (LRUCache*)malloc(sizeof(LRUCache));
    cache->capacity = capacity;
    cache->size = 0;
    cache->head = NULL;
    cache->tail = NULL;
    cache->hash = static_cast<Node **>(calloc(capacity, sizeof(Node *)));
    return cache;
}

void deleteNode(LRUCache* cache, Node* node) {
    if (node->prev) {
        node->prev->next = node->next;
    } else {
        cache->head = node->next;
    }

    if (node->next) {
        node->next->prev = node->prev;
    } else {
        cache->tail = node->prev;
    }

    free(node);
}

void addNode(LRUCache* cache, Node* node) {
    node->next = cache->head;
    node->prev = NULL;
    if (cache->head != NULL) {
        cache->head->prev = node;
    }
    cache->head = node;
    if (cache->tail == NULL) {
        cache->tail = node;
    }
}

void moveToHead(LRUCache* cache, Node* node) {
    deleteNode(cache, node);
    addNode(cache, node);
}

void setLRU(LRUCache* cache, int key, int value) {
    int index = key % cache->capacity;
    if (cache->hash[index]) {
        Node* node = cache->hash[index];
        while (node) {
            if (node->key == key) {
                node->value = value;
                moveToHead(cache, node);
                return;
            }
            node = node->next;
        }
    }

    if (cache->size == cache->capacity) {
        Node* last = cache->tail;
        deleteNode(cache, last);
        cache->hash[last->key % cache->capacity] = NULL;
        cache->size--;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    addNode(cache, newNode);
    cache->hash[key % cache->capacity] = newNode;
    cache->size++;
}

int getLRU(LRUCache* cache, int key) {
    int index = key % cache->capacity;
    Node* node = cache->hash[index];
    while (node) {
        if (node->key == key) {
            moveToHead(cache, node);
            return node->value;
        }
        node = node->next;
    }
    return -1;
}

void freeCache(LRUCache* cache) {
    Node* current = cache->head;
    while (current) {
        Node* next = current->next;
        free(current);
        current = next;
    }
    free(cache->hash);
    free(cache);
}

*/