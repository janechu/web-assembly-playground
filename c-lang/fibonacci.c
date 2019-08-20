#include <emscripten.h>

int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    n = 1000;
    EM_ASM({
        console.log("Fibonacci Series: ");
    });
    for (i = 1; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    EM_ASM({
        console.log($0);
    }, t1);
    return 0;
}