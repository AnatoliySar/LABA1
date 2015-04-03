#include "stdafx.h"
#include <stdlib.h>
 	 
 	int main()
 	{
		char ch;
 		unsigned int N = 0;
 		unsigned char *arr, buf;
		arr=(unsigned char*)malloc(sizeof(int));
		printf ("Vvedite chisla, chtobi zavershit' vvod nazhmite Q\n"); 		
		do	{
			N++;
			arr=(unsigned char*)realloc(arr, N*sizeof(unsigned int));
			scanf("%u", &arr[N]);
			}
		while (ch = getchar() != 'Q');
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
 	 
 	for (unsigned int i=0; i<N-1; i++)
 		{
 			printf ("%u ", arr[i]);
 		}
	printf ("\n");
 	free(arr);
 	system("pause");
 	return 0;
 	}