#include<stdio.h>
void main()
{
 int t,f,c;
 int n;
 printf("--------- Welcome ---------\n");
 printf("Press 1 for Thali\nPress 2 for Fast Food\nPress 3 for Biscuits and Chocolates\nPress 4 for Chips and Namkeens\n");
 scanf("%d",&n);
 switch(n)
 {
  case 1:
	 printf("Choose Thali\n");
	 printf("Press 1 for Normal Thali Rs.50\nPress 2 for Special Thali Rs.60\nPress 3 for Samnbhar Dosa Rs.70\nPress 4 for Chote Bhatura Rs.80\n");
	 scanf("%d",&t);
			switch(t)
			 {
			  case 1:
				 printf("Your bill for Thali Rs.50/-\n");
				 break;
			  case 2:
				 printf("Your bill for Special Thali Rs.60/-\n");
				 break;
			  case 3:
				 printf("Your bill for Sambhar Dosa Rs.70/-\n");
				 break;
			  case 4:
				 printf("Your bill for Chole Bhatura Rs.80/-\n");
				 break;
			 }
			 break;

  case 2:
	 printf("Choose Fast Food\n");
	 printf("Press 1 for Samosa Rs.5\nPress 2 for Jalebi Rs.5\nPress 3 for Noodles Rs.10\nPress 4 for Cream Roll Rs.10\n");
	 scanf("%d",&f);
			 switch(f)
			 {
			  case 1:
				 printf("Your bill for Samosa Rs.5/-\n");
				 break;
			  case 2:
				 printf("Your bill for Jalebi Rs.5/-\n");
				 break;
			  case 3:
				 printf("Your bill for Noodles Rs.10/-\n");
				 break;
			  case 4:
				 printf("Your bill for Cream Roll Rs.10/-\n");
				 break;
			 }
			 break;
  case 3:
	 printf("Choose Sweets \n");
	 printf("Press 1 for Cakes Rs.20\nPress 2 for Pastry Rs.15\n");
	 scanf("%d",&c);
			switch(c)
			 {
			  case 1:
				 printf("Your bill for Cakes Rs.20/-\n");
				 break;
			  case 2:
				 printf("Your bill for Pastries Rs.15/-\n");
				 break;
			 }
			 break;
}
printf("\nH A V E\nA\nG R E A T\nD A Y\n");
}