#include "stdafx.h"
#include <stdlib.h>
 	 
 	int main()
 	{
		char ch;
 		unsigned int N = 0;
 		int *arr, buf;
		arr=(int*)malloc(sizeof(int));
		printf ("Vvedite chisla, chtobi zavershit' vvod nazhmite Q\n"); 		
		do	{
				arr=(int*)realloc(arr, (N+2)*sizeof(int));
				scanf("%u", &arr[N]);
				N++;
			}
		while (ch = getchar() != 'Q');
		arr[N] = 0;
 	for (unsigned int j=0; j<N; j++)
 		{
 			for (unsigned int i=0; i<N-1; i++)
 			{
 				if (arr[i+1]<arr[i])
 					{
 						buf=arr[i+1];
 						arr[i+1]=arr[i];
 						arr[i]=buf;
 					}
			}
		}
 	 
 	for (unsigned int i=1; i<N; i++)
 		{
 			printf ("%u ", arr[i]);
 		}
	printf ("\n");
 	free(arr);
 	system("pause");
 	return 0;
 	}
