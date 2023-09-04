#include<stdio.h>
main()
{
	char month;
	printf("\n enter value of month= ");
	scanf("%c",&month);	
	switch(month)
	{
		case 'a' :
			    printf("January");
			    break;
		case 'b' :
			    printf("February");
			    break;
		case 'c' :
			    printf("March");
			    break;	
		case 'd' :
			    printf("April");
			    break;
		case 'e' :
			    printf("May");
			    break;
		case 'f' :
			    printf("June");
			    break;
		case 'g' :
			    printf("July");
			    break;
		case 'h' :
			    printf("August");
			    break;
		case 'i' :
			    printf("September");
			    break;
		case 'j' :
			    printf("Octomber");
			    break;
		case 'k' :
			    printf("November");
			    break;
		case 'l' :
			    printf("December");
			    break;
		default :
		         printf("Plz Enter Valid month!");																						    
	}
}
