#include <stdio.h>
#include "atm_function.h"

int
main ()
{
  int pin;
  int pins = 9999;
  int pinTries = 1;
  int reciept;
  int options;
  int options2;
  int balance = 300000;
  int fastCashChoice;
  printf ("Enter your pin:");	// the pin is 9999
  scanf ("%d", &pin);
  while (pinTries <= 3)
    {
      if (pin == pins)
	{
	  printf ("Savings or Current(1 for Savings,2 for Current):");
	  // 1 is equal to yes and 2 is equal to no
	  scanf ("%d", &reciept);
	  printf ("Choose from the following:\n");
	  printf
	    ("1. Fast cash\n2. Withdraw\n3. Deposit\n4. Check balence\n5. Get card back\n");
	  scanf ("%d", &options);
	  while (options <= 5)
	    {
	      switch (options)
		{
		case 1:
		  fastCash (fastCashChoice);
		  balance = balance - fastCashChoice;
		  break;

		case 2:
		  withdraw (balance);
		  break;

		case 3:
		  deposit (balance);
		  break;

		case 4:
		  checkBalence (balance);
		  break;

		case 5:
		  options2 == 2;
		  break;
		}
	      printf ("Would you like another transaction(1 for Yes,2 for No): ");	// 1 is equal to yes and 2 is equal to no
	      scanf ("%d", &options2);
	      if (options2 == 1)
		{
		  printf
		    ("1. Fast cash\n2. Withdraw\n3. Deposit\n4. Check balence\n5. Get card back\n");
		  scanf ("%d", &options);
		}

	      else
		{
		  options = 5;
		  pinTries = 4;
		  printf ("Thank you for useing this ATM, GoodBye\n");
		  break;
		}

	    }
	}

      else if (pin != pins)
	{
	  printf ("Invalid pin, try again:");
	  scanf ("%d", &pin);
	  pinTries++;
	}

      if (pinTries == 3)
	{
	  printf ("Sorry, you cant continue, please contact your bank");
	}
    }
  return 0;
}
