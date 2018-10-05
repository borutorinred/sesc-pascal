#include <stdio.h>

long long fact(long long f)
{
    if ( f == 0 ) 
        return 1;
    return(f * fact(f - 1));
}

int main(int argc, char const *argv[])
{
	long long y, x;
	scanf("%lli%lli", &y, &x);

	printf("%lli\n", fact(y - 1) / fact(y - x) / fact(x - 1));
	return 0;
}
