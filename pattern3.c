#include <stdio.h>
int main()
{
  int N;
    scanf("%d", &N);

    // First half of the pattern
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
    if (i % 2 == 1) {
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("#");
            }
        }
    else {
        for (int j = 0; j < 2 * i - 1; j++) {
          printf("-");
            }
    }
    printf("\n");
  }
  for (int i = N - 1; i >= 1; i--) {
    for (int j = 0; j < N - i; j++) {
       printf(" ");
        }
  
    if (i % 2 == 1) {
      for (int j = 0; j < 2 * i - 1; j++) {
         printf("#");
            }
        } 
    else {
        for (int j = 0; j < 2 * i - 1; j++) {
                printf("-");
            }
        }
        printf("\n");
    }
return 0;
}
