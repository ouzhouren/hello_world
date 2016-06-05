#include <stdio.h>
#include "hello.h"

static char print_flag = 1;
#define PR_INFO		if (print_flag) printf

void print_hello(void)
{
	PR_INFO("%s: hello world\n", __func__);
}

int main(char argc, char *argv[])
{
	print_hello();
	return 0;
}
