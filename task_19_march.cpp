//user input tabel number
#include <stdio.h>
main()
{
    int num,i;
	while(i=1) 
    {
        printf("\n\nEnter a number of tabel: ");
        scanf("%d",&num);
		for(i = 1; i <= 10; i++)
        {
            printf("\n%d * %d = %d", num, i, num * i);
        }
    }
}
