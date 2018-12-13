#include "stdafx.h"

#include "stdio.h"

void sample()
{
    int x = 10;
    int& r = x; // x の参照を作る

    r = 99; // 参照元の x も書き換わる

    printf("%d", x); // 99
}

int _tmain(int argc, _TCHAR* argv[])
{
    sample();
	return 0;
}

