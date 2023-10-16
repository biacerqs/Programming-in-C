/******************************************************************************

Author: Beatriz Souza de Cerqueira

Question 2: The table below shows the normal boiling points of several substances. Write a function that accepts an argument
the observed boiling point of a substance in degrees Celsius and identifies the substance if the observed boiling point
is within 5% of the expected boiling point. If the data input is more than 5% higher or lower than any of the boiling
points in the table, the function should output the message Substance unknown. Note that the function should print
the substance and not main. This will simplify the function call in main. You need to test each substance in an
if...else if... chain for the temperature passed from main.
Substance Normal boiling point (Celsius)
Water 100
Mercury 357
Copper 1187
Silver 2193
Gold 2660
Your substance identifying function should define and call a function within_x_percent that takes as parameters a
reference value, ref, a data value, data, and a percentage value, x and returns 1 meaning true if data is within x% of
ref, that is, (ref - x%* ref) <= data <= (ref + x% * ref). Otherwise within_x_percent would return zero, meaning
false. For example, the call within_x_percent(357, 323, 10) would return true, since 10% of 357 is 35.7, and 323
falls between
321.3 and 392.7. Sample screen output:
FIND SUBSTANCE GIVEN ITS BOILING POINT
Enter a temperature: 360
The substance is Mercury
The calculations for this call would be (this is not shown on screen):
lowRange = 357 b 357*0.1 = 321.3
highRange = 357 + 357*0.1 = 392.7
inRange = 321.3 <= 360 <= 392.7 (true)
Use a sequence of if...else if...else if...else statements to identify the substance (in this example, 321.3 <= 360 <=
392.7, so the substance is Mercury. Note the substances have been chosen so that none of them have overlapping
ranges (that is, none of them have melting points within 10% of the melting point of any of the others.

*******************************************************************************/
#include <stdio.h>

// Function to check if 'data' is within 'x' percent of 'ref'
int
within_x_percent (double ref, double data, double x)
{
  double lowerBound = ref - (x / 100.0) * ref;
  double upperBound = ref + (x / 100.0) * ref;
  return (data >= lowerBound && data <= upperBound);
}

// Function to identify the substance based on boiling point
void
identifySubstance (double temperature)
{
  if (within_x_percent (100.0, temperature, 5.0))
    {
      printf ("The substance is Water\n");
    }
  else if (within_x_percent (357.0, temperature, 5.0))
    {
      printf ("The substance is Mercury\n");
    }
  else if (within_x_percent (1187.0, temperature, 5.0))
    {
      printf ("The substance is Copper\n");
    }
  else if (within_x_percent (2193.0, temperature, 5.0))
    {
      printf ("The substance is Silver\n");
    }
  else if (within_x_percent (2660.0, temperature, 5.0))
    {
      printf ("The substance is Gold\n");
    }
  else
    {
      printf ("The substance is unknown\n");
    }
}

int
main ()
{
  double temperature;

  printf ("FIND SUBSTANCE GIVEN ITS BOILING POINT\n");
  printf ("Enter a temperature: ");
  scanf ("%lf", &temperature);

  identifySubstance (temperature);

  return 0;
}

