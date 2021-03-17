#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
struct comp
{
	int line_num;
	int return_val;
};
struct comp std_printf[13];
struct comp  our_printf[13];
int tnum = 10;
char *str = "Bree";
int x = 0, y = 0, yy = 0, num = 1;
int len = 0;
int len2 = 0;
int min = INT_MIN;
int max = INT_MAX;
unsigned int ui;
void *addr;
int neg_addr = -999999999, pos_addr = 999999999;
//specs c s d i u o x X p + space # l h p
//STD LIBRARY PRINTF EDGE TESTS
printf("<std library printf edge cases located below>\n");
printf("--------------------------------\n");
len = printf("%s\n", NULL);                                                 // 1
std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
len = printf("%s\n", str);                                                  // 2
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
len = printf("%s\n", '\0');                                         // 3
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
len = printf("%s \n", str);                                           // 4
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
len = printf(" %s\n", str);                                              // 5
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
len = printf(" %s \n ", str);                                                  // 6
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
len = printf("%s\n", 0);                                                  // 7
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
/* len = printf("%s\n", 'c');                                                  //8
   std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++; */
len = printf("%s\n", "Bree");                                                  //9
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
len = printf("%s\n");                                             //10
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
/* len = printf("%s\n", -1000);                                            //11
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
len = printf("%s\n", 999);                                              //12
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++;
len = printf("%s\n", -999);                                             //13
std_printf[x].return_val =len, std_printf[x].line_num = num, num++, x++; */
//reset x
x = 0;
num = 0;
//OUR PRINTF EDGE TESTS
printf("<our _printf edge cases located below>\n");
printf("--------------------------------\n");
len2 = _printf("%s\n", NULL);                                         // 1
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n", str);                                          // 2
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n", '\0');                                  // 3
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s \n", str);                                   // 4
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf(" %s\n", str);                                         //5
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf(" %s \n ", str);                                         //6
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n", 0);                                         //7
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n", 'c');                                      //8
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n", "Bree");                                       //9
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n");                                     //10
/* our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n", -1000);                                   //11
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n", 999);                                      //12
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++;
len2 = _printf("%s\n", -999);                                     //13
our_printf[x].return_val =len2, our_printf[x].line_num = num, num++, x++; */
//TRANSITION TO RESULTS
printf("-----------------\n");
printf("<ran all edge cases>\n");
printf("-----------------\n");
printf("<our _printf call fails on these indexed lines in the test file>\n\n");
printf("<below are the line numbers where _printf function fails in testfile>");
printf("\n<compare this list of numbers below to the test file to see where the");
printf("\ncomments on right hand side indicate where your _printf is failing");
printf(" an edge case>\nEXAMPLE: // 1, // 2, etc...\n");
printf("-----------------\n");
//RESULTS AFTER COMPARING
for (y = 0; y < 13; y++)
{
	if (std_printf[y].return_val != our_printf[y].return_val)
	{
		if (std_printf[y].return_val > 7);
		{
			if (std_printf[y].return_val > 7);
			{
				printf("Return Val of standard printf is: %d", std_printf[y].return_val);
				printf("  Return val of our _printf is: %d  ", our_printf[y].return_val);
				printf("Test file reference: %d\n", std_printf[y].line_num);
				yy++;
			}
		}
	}
}
return (0);
}
