#include <emscripten.h>

int main()
{
    int i, counter = 0;

    for (i = 0; i <= 1000000000; ++i)
    {
        counter = i + 1;
    }
    EM_ASM({
        console.log("done!", $0);
    }, counter);
    return 0;
}