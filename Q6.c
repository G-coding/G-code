#include <stdio.h>

/*long long max(long long a, long long b) {
    return (a > b) ? a : b;
}
I can't understand what this code is for.
*/

long long number_spiral(long long y, long long x) {
    int matrix[y][x];
    int top = 0;
    int bottom = x-1;
    int left = 0;
    int right = y-1;
    int elements = 1;
    while (elements <= y*x)
    {
        for(int i = left; i <= right; i++)
        {
            matrix[top][i] = elements;
            elements++;
        }
    }
    
}

int main() {
    // Default Test Cases
    long long test_cases[3][2] = {
        {2, 3},  // Output: 8
        {1, 1},  // Output: 1
        {4, 2}   // Output: 15
    };

    // Run Test Cases
    for (int i = 0; i < 3; i++) {
        printf("%lld\n", number_spiral(test_cases[i][0], test_cases[i][1]));
    }

    return 0;
}

// Sample Output:
// 8
// 1
// 15
