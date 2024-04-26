#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    for (int t = 0; t < T; t++) {
       int M1, M2, D;
       scanf("%d %d %d", &M1, &M2, &D);

     int total = M1 + M2;
     float new_days = (float)D * M1 / total;
     int days_saved= D - (int)new_days;

     printf("%d\n", days_saved);
    }

    return 0;
}
