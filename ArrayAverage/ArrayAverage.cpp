#include <iostream>

float avgoflst(int lst[], int size) {
    int i;
    int sum = 0;

    int avg = lst[0];
    for (i = 0; i < size; ++i) {
        sum += lst[i];
    }
    avg = (float)sum / size;
    return avg;
};
int main()
{
    int lst[] = { 4,6,7,1,3,23 };
    printf("%3.0f\n", avgoflst(lst, 6));
    return 0;
}
