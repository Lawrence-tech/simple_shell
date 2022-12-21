#include <stdio.h>
#include "shell.h"

/**
  *main - provides parent Id
  *Return: int pid
  */

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}
