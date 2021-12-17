// C program to concatenate the two Strings 
// using command line arguments 

#include <stdio.h> 
#include <stdlib.h> /* atoi */ 
#include <string.h> 

// Function to concatenate the Strings 
char* concat(char dest[], char src[]) 
{ 

	// Appends the entire string 
	// of src to dest 
	strcat(dest, src); 

	// Return the concatenated String 
	return dest; 
} 

// Driver code 
int main(int argc, char* argv[]) 
{ 
	// Check if the length of args array is 1 
	if (argc == 1) 
		printf("No command line arguments found.\n"); 
	else { 

		// Get the command line arguments 
		// and concatenate them 
		printf("%s\n", concat(argv[1], argv[2])); 
	} 
	return 0; 
} 

