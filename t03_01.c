#include <stdio.h>

int main() {
    int n;
    int current_val;
    int min_val;
    int max_val;

    scanf("%d", &n);

    if (n > 0) {
        scanf("%d", &current_val);
        min_val = current_val;
        max_val = current_val;

        for (int i = 1; i < n; i++) {
            scanf("%d", &current_val);

            if (current_val < min_val) {
                min_val = current_val;
            }

            if (current_val > max_val) {
                max_val = current_val;
            }
        }

        printf("%d\n", min_val);
        printf("%d\n", max_val);
    }

    return 0;
}
