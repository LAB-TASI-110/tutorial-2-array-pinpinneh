#include <stdio.h>
#include <float.h>

int main()
{
    int n;
    int current_val;
    int prev_val;
    int min_val;
    int max_val;
    double min_avg = DBL_MAX;
    double min_avg = DBL_MAX;


    scanf("%d", &n);

    if (n > 0)
    {
        scanf("%d", &current_val);
        min_val = current_val;
        max_val = current_val;
        prev_val = current_val;

        for (int i = 1; i < n; i++)
        {
            scanf("%d", &current_val);

            if (current_val < min_val)
            {
                min_val = current_val;
            }

            if (current_val > max_val)
            {
                max_val = current_val;
            }

            if (i >= 1)
            {
                double current_avg = (double)(prev_val + current_val) / 2.0;
                if (current_avg < min_avg)
                {
                    min_avg = current_avg;
                }
            }
            if (current_avg > max_avg)
            {
                max_avg = current_avg;
            }
        }
        prev_val = current_val;
    }

    printf("hasil dari bilangan yang di masukkan adalah\n");
    printf("%d\n", min_val);
    printf("%d\n", max_val);

    if (n >= 2)
    {
        printf("%.2f\n", min_avg);
        printf("%.2f\n", max_avg);
    }
}

return 0;
}
