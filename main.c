/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int i = 1;
int f = 0;
char ca;char ch;
void fifty (char a);
void
main ()
{
  printf ("Welcome to\n");

  for (int i = 0; i <= 10000; i++);

  printf ("KAUN BANEGA CROREPATI\n");

  printf ("The rules of the game:\n");

  printf
    ("1. The game has total 10 questions.\n2.Four options will be displayed, you have to choose any one of it.\n3. You are given a lifeline also i.e 50-50");

  printf ("Lets start the game\n");

  
  int amt = 0;

  switch (i)

    {
    case 1:
      printf ("Question for Rs10000 is on your screen\n");

      printf
	("What is the capital of India\nA.Mumbai\tB.Kolkata\nC.Bengaluru\tD.New Delhi\nYou can use your 50-50 lifeline if you dont know the answer, type Y to use it else type N");
      
      scanf ("%c", &ca);
      if (ca == 'Y')
	{f = 1;
	  fifty ('D');
	  
	}
	else printf("You have used your lifeline\n");
      
printf("Enter your final answer\n");
scanf("%c",&ch);
      if (ch == 'D')

	{
	  printf ("Correct answer, you have won Rs 10000");

	  i++;
	  amt = 10000;
	}

      else
	{
	  printf ("Regret!You lost");

	  break;
	}
    case 2:
      printf ("Question for Rs 20000 is on your screen\n");

      printf
	("Who was awarded nobel prize for literature in 2017?\nA.Richard Thaler\tB.Kazuo Ishiguro\nC.Shobha Dey\tD.Dale Carnegie\n");
      printf
	("You can use your 50-50 lifeline if you dont know the answer, type Y to use it else type N");
      scanf ("%c", &ca);
      if (f == 0)
	{
	  if (ca == 'Y')
	    {
	      fifty ('B');
	      f = 1;
	    }
	}
      else
	printf ("You have already used 50-50");
      
      

      if (ch == 'B')

	{
	  printf ("Correct answer, you have won Rs 20000");

	  i++;
	  amt = amt + 20000;
	}

      else
	{
	  printf ("Regret!You lost");

	  break;
	}


    }
}

void
fifty (char a)
{
  printf ("You have opted for 50-50 and your new options are:\n");
  if (a == 'A')
    printf ("choose from A and D\n");
  else if (a == 'B')
    printf ("choose from B and D\n");
  else if (a == 'C')
    printf ("choose from C and A\n");
  else if (a == 'D')
    printf ("choose from B and D\n");
  

}
