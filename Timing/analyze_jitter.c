#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define no_of_measurements (10)

float calc_std_dev(long int *, int n);
float calc_avg(long int *, int n);

float calc_avg(long int * data, int n)
{
    float sum = 0.0, mean;
    int i;

    for(i=0; i<n; i++)
    {
        sum += *(data+i);
    }

    mean = sum/no_of_measurements;

    return mean;
}

float calc_std_dev(long int * data, int n)
{
    float sum = 0.0, mean, std_dev = 0.0;
    int i;

    for(i=0; i<n; i++)
    {
        sum += *(data+i);
    }

    mean = sum/no_of_measurements;

    for(i=0; i<n; i++)
        std_dev += pow(*(data+i) - mean, 2);

    return sqrt(std_dev/n);
}

int main (void)
{
  float std_dev = 0.0, avg = 0.0;
  FILE* fptr = fopen ("delay_ns.txt", "r");
  long int *delay = (long int *)malloc(no_of_measurements*sizeof(long int));
  int ret, i = 0;
  while (!feof (fptr))
    {  
      ret = fscanf (fptr, "%ld", (delay+i));      
      i++;
    }
  fclose (fptr);     
  for(int i = 0; i<no_of_measurements; i++)
  {
     printf("%ld\n",*(delay+i));
  }

  std_dev = calc_std_dev(delay,no_of_measurements);
  avg = calc_avg(delay,no_of_measurements);

  printf("Mean of measured delays across 10 runs of posix_clock.c = %.0f nanoseconds\n",avg);
  printf("Jitter of measured delays across 10 runs of posix_clock.c = %.0f nanoseconds\n",std_dev);
  return 0;   
}
