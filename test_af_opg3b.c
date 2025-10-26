#include <stdio.h>
#include <assert.h>
#include "exercise3.h"

int main() {
    
    // Lov 1: 
    queue q1;
    initialize(&q1);
    assert(empty(&q1));
    printf("godkendt: Køen er tom\n");
    
    // Lov 2: 
    queue q2;
    initialize(&q2);
    int x = 42;
    enqueue(&q2, x);
    int y = dequeue(&q2);
    assert(x == y && empty(&q2));
    printf("godkendt: x=%d, y=%d\n", x, y);
    
    // Lov 3: 
    queue q3;
    initialize(&q3);
    int x0 = 10, x1 = 20;
    enqueue(&q3, x0);
    enqueue(&q3, x1);
    int y0 = dequeue(&q3);
    int y1 = dequeue(&q3);
    assert(x0 == y0 && x1 == y1 && empty(&q3));
    printf("godkendt: x0=%d→y0=%d, x1=%d→y1=%d\n", x0, y0, x1, y1);
    
    printf(" Alle tre love godkendt JUHUU!!!\n");
    return 0;
}
