#include <stdio.h>

int main() {
	int c;
	FILE *fp;
	fp = fopen("test.txt", "r");
	if (fp) {
    	while ((c = getc(fp)) != EOF)
        	putchar(c);
    	fclose(fp);
	}
}
