#include <unistd.h>
/**
 * main - represent Entry Point to the program
 *
 * Return: 0 to stop the program
 */
void my_putchar(char c) {
    write(1, &c, 1);
}

void print_combinations() {
    int i = 0;
    int j = 0;

    while (i < 10) {
        j = i + 1;
        while (j < 10) {
            my_putchar(i + '0');
            my_putchar(',');
            my_putchar(' ');
            my_putchar(j + '0');
            if (i != 8 || j != 9) {
                my_putchar(',');
                my_putchar(' ');
            }
            j++;
        }
        i++;
    }
}

int main() {
    print_combinations();
    return 0;
}
