#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    // printf("Enter the testcase");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        //   read the inputs
        int n, x, y;
        int A[1000000];

        // printf("Enter the three values");
        scanf("%d %d %d", &n, &x, &y);
        for (int i = 0; i < n; i++)
            scanf("%d", &A[i]);

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[j] <= x && A[j] % y == 0)
                count++;
            else
                continue;
        }
        printf("OutPut: %d\n", count);
    }

    return 0;
}
