#include <stdio.h>
#include <string.h>
#include "STD_TYPES.h"





void encrypt (u8 data[], int key )
{
	int i;
	for (i=0; i<strlen (data); i++)
	{
		data[i] = data[i] - key;
		
	}
	

}




void decrypt (u8 data[], int key)
{
	
	int i;
	for (i=0; i<strlen (data); i++)
	{
		data[i] = data[i] + key;
		
	}
	
	
	
	
}













