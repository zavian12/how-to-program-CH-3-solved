#include<stdio.h>
main()
{
	 for (int i=1;i<=10;i++)
	 {
	 	 for(int j=1;j<=10;j++)
	 	 {
	 	 	 if(i==1||j==1||i==10||j==10)
	 	 	 {
	 	 	 	 printf("*");
			   }
	 	 else {
	 	 	 printf(" ");
		  }
	 	 	  
		 
		  }
		  printf("\n");
	 	
	 }
}