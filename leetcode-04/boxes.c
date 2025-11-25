#include <stdio.h>
typedef struct {
    int length;
    int width;
    int height;
} Box;
int main() {
    int n;
    scanf("%d", &n);
    Box boxes[n];   
    int volumes[n]; 
    int count = 0;  
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);

        if (boxes[i].height < 41) {
            volumes[count++] = boxes[i].length * boxes[i].width * boxes[i].height;
        }
    }
    for (i = 0; i < count; i++) {
        printf("%d\n", volumes[i]);
    }
    return 0;
}

