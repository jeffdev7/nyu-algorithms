#include <iostream>

int maxabsinlst(int lst[], int size) {
    int i;
    int max = lst[0];
    for (i = 1; i < size; ++i) {
        if (lst[i] > max)
            max = lst[i];
    }
    return max;
};

int main()
{
    int lst[] = { 5,7,9,45,23,89 };
    int n = sizeof(lst) / sizeof(lst[0]);

    printf("%i\n", maxabsinlst(lst, 6));
    return 0;
}
