#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    char a[3], b[3];
	    scanf("%s", &a);
	    scanf("%s", &b);
	    if(((a[0] == 'b' || b[0] == 'b') && (a[1] == 'o' || b[1] == 'o') && (a[2]== 'b' || b[2] == 'b')) 
	    || ((a[0] == 'o' || b[0] == 'o') && (a[1] == 'b' || b[1]== 'b') && (a[2] == 'b' || b[2] == 'b')) 
	    || ((a[0] == 'b' || b[0] == 'b') &&(a[1] == 'b' || b[1] == 'b') && (a[2] == 'o' || b[2] == 'o')))
	        printf("yes\n");
	        else
	        printf("no\n");
	}
	return 0;
}

