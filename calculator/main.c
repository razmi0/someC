#include <stdio.h>
#include "main.h"

int main()
{
    double output;
    output = logTask(1000000);
    return 0;
}

// int main()
// {
//     struct Input input;
//     double output;

//     // Get user input
//     printf("Enter an operation (e.g., 5 + 3): ");
//     scanf("%lf %c %lf", &input.n1, &input.operator, & input.n2);

//     // Perform the calculation
//     output = logTask(10);

//     if (output == -1)
//     {
//         return 1;
//     }

//     // Display the output
//     printf("Output: %.2lf\n", output);
//     return 0;
// }
