#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	char str[] = "...#\n...#\n...#\n...#\n";
	char str2[] = "....\n....\n....\n....\n";
	char str3[] = "...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n...#\n...#\n...#\n...#\n\n....\n....\n....\n####\n\n.###\n...#\n....\n....\n\n....\n..##\n.##.\n....\n";
	printf("the size of str is: %lu\n", sizeof(str));
	printf("The size of str2 is: %lu\n", sizeof(str2));
	printf("The size of str3 is: %lu\n", sizeof(str3));
	printf("The length of str is: %lu\n", strlen(str));
	printf("The length of str is: %lu\n", strlen(str2));
	printf("The length of str is: %lu\n", strlen(str3));


	return (0);
}
