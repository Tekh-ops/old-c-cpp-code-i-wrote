#include <stdio.h>
#include <stdarg.h>

#include "lib.h"
#include "lib2.h"

int fun(const char *__format, ...)
{
    int __retval;
    __builtin_va_list __local_argv;
    __builtin_va_start(__local_argv, __format);
    __retval = __mingw_vfprintf(stdout, __format, __local_argv);
    __builtin_va_end(__local_argv);
    return __retval;
}

int function(int star, ...)
{
}

int main()
{
    //char string[6];

    fun("Nothing!\n%d\n", num);
    /*scanf("%s", &string);
    fun("%s is the best\n%d", string, num);*/

    function(22, 553, 35, 3, 78);
    function(23, 42);

    return 0;
}
