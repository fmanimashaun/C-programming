/* 02L01.c: This is my first C programme */

/* The forward / and asterisk * indicate a comment for programmer documentation
 * and will be ignored by the compiler. some compiler let you do a double slash
 * as shown here (//) for a single line comment while a combination of a slash 
 * and an asterisk as shown here can be use for a multi-line comment
 */

#include <stdio.h>
/* The #include in the above code indicate a preprocessor directive in C programming
 * that lets the C preprocessor to look for a file and place the content of the file
 * in the location the #include directive indicates. The preprocessor is a programme 
 * that does some preparation for the C compiler before the code is compiled.
 * As explained above the #include directive was for the preprocessor to look for
 * the stdio.h file and place in where it was indicated by the preprocessor as shown
 * above. The stdio.h refers to standard input-output header file. This file contains
 * numerous prototypes and macros to perform the input or output (I/O) for C programme
 * The stdio.h file is surrounded by angle brachet < and > that tells the preprocessor 
 * to look for yhe header file in a directory other the current one. However, if we want
 * the preprocessor to look for the header file in the current directory before looking
 * elsewhere, we use the double quote to wrap the header file instead of angle bracket  
 */

main()
	/* every C programme must have a main() function and only one can be in a programme
	 *the execution of a programme always start with a main() function
	 */
{
	printf("Howdy, neighour! This is my first C programme.\n");
	return 0;
}
