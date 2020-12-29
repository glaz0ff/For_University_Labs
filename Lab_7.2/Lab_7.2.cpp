
#include <iostream>
using namespace std;


int sum(int n...) {
    int s;
    s = 0;
    int* p = &n;
    for (; n != 0; n--) {
        if (n % 2 == 0) {
            s -=(*p * (*(p+2)));
        }
        else
            s += (*p * (*(p+2)));
    }
    return(s);
}

int main()
{
    cout << sum(5, 2, 1, 6, 3, 4);
    cout << sum(10, 2, 1, 6, 3, 4, 23, 0, 54, 9, 8);
    cout << sum(12, 2, 7, 8, 0, 15, 1, 6, 3, 4, 5, 9, 10);

    return(0);
}

