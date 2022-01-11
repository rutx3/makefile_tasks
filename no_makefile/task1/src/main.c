#include <stdio.h>
#include "../lib/file_reader.h"

int main(void)
{
	char *line;
	dump_file("../data/example_file.txt");
	get_first_line("../data/example_file.txt", &line);
	printf("First line:%s\n", line);
	return 0;
}
