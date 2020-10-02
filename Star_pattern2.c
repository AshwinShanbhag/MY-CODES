/* To print the following pattern
******
 *****
   ***
    **
     *
*/

#include<stdio.h>

int main()

{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{

if(j>=i)
printf("*");
else
printf(" ");

}
printf("\n");

}
return 0;
}




/* Alternate code

#include<stdio.h>

int main()

{
int i,j;
for(i=5;i>=0;i--)
{
for(j=5;j>=0;j--)
{

if(j<=i)
printf("*");
else
printf(" ");

}
printf("\n");

}
return 0;
}
*/
