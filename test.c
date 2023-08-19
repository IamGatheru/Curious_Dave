/**
 * Testing some stdint.h macros
 *
 */

#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]){
	printf("%ld", INT_FAST64_MAX);
	return 0;
}

