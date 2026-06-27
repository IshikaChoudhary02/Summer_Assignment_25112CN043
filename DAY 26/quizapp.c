#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Kolkata 4.Chennai\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Q2. 5 + 7 = ?\n");
    printf("1.10 2.12 3.15 4.20\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("Your Score = %d/2\n", score);

    return 0;
}