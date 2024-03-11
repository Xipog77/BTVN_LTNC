#include <stdio.h>

void update(int *a,int *b) {
    int temp1 = *a + *b, temp2 = *a - *b;
    if (temp2 < 0) temp2 = -temp2;
    *a = temp1;
    *b = temp2;
    return;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
