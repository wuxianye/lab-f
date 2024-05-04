//Include


#include <stdio.h>
#include <string.h>
#include "domain.h"

// Main function
int main(void) {

	// Read user input
#define LEN 4
char user_input[LEN];
printf("Enter a domain including the . (e.g. .uk): ");
fgets(user_input, LEN, stdin);

// Enter your code under here
//  Use strcmp(user_input, country_codes[0],domain) to compare the text in user input to the text in country_codes[0].domain
user_input[strcspn(user_input, "\n")] = 0;

int found = 0; 
for (int i = 0; i < sizeof(country_codes) / sizeof(country_codes[0]); i++) {
if (strcmp(user_input, country_codes[i].domain) == 0) {
printf("This is the domain for: %s\n", country_codes[i].country);
found = 1;
break;
}
}

// If no match is found, print a prompt message
if (!found) {
	printf("Domain not found.\n");
}

//	 //Do not edit below here
	return 0;
}