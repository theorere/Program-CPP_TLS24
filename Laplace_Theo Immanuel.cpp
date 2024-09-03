#include <cstdio>
using namespace std;

int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("\n");

    if (n < 0) {
        if (n % 2 == 0) {
            printf("Negative even number");
        }
        else {
            printf("Negative odd number");
        }
    }
    else if (n > 0) {
        if (n % 2 == 0) {
            printf("Positive even number");
        }
        else {
            printf("Positive odd number");
        }
    }
    else {
        printf("Zero");
    }
}
