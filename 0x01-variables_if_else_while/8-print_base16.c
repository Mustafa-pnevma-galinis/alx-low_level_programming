#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include<string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	 int cnt = 0;

	while (cnt < 48){
		if (cnt<10){
			putchar(cnt + '0');
		}
		else if (cnt > 41){
			putchar(cnt -10 + 'A');
		}
		cnt++;
	}
	return (0);
}
