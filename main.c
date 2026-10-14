#include <stdio.h>

void printName() { // All team members must enter their names here in their own branch
	printf("<Your Name please>");
}

int add(int a, int b) {
	return 0; // One team member must focus on implementing this function that takes in two numbers and returns their sum
}

int main() {
	char operation;

	while (1) {
		// menu
		printf("---Unspecified Application v-3.14---\n");
		printf("a) Print Names\n");
		printf("b) Add numbers\n");
		printf("c) Exit\n");
		printf("Selected Option (a, b, c) : ");
		scanf("%c", &operation);
	
		if (operation == 'A') { // There appears to be some bug in this if condition... one team member should focus on fixing this
			printName();
		} else if (operation == 'b') {
	
			// input
			int a, b;
			printf("a = ");
			scanf("%d", &a);
			printf("b = ");
			scanf("%d", &b);
	
			// output
			printf("a + b = %d\n", add(a, b));

		} else if (operation == 'c') {
			printf("Quitting...");
			break;
		} // currently, the app doesn't say anything if you enter an invalid input, one team member must make it output an error message
	}
	return 0;
}
