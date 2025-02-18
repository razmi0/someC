
// Struct declaration and definition
struct Input
{
    double n1;
    char operator;
    double n2;
};

double calculate(struct Input input)
{
    double result;
    switch (input.operator)
    {
    case '+':
        result = input.n1 + input.n2;
        break;
    case '-':
        result = input.n1 - input.n2;
        break;
    case '*':
        result = input.n1 * input.n2;
        break;
    case '/':
        if (input.n2 != 0)
            result = input.n1 / input.n2;
        else
        {
            printf("Error: Division by zero!\n");
            return -1;
        }
        break;
    default:
        printf("Error: Invalid operator!\n");
        return -1;
    }
    return result;
}

double logTask(int size)
{
    int dummy[size];
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        dummy[i] = i;
        printf("%zu", i);
    }
    printf("\n");

    return 0;
}

typedef struct
{
    double n1;
    char operator;
    double n2;
} Input;