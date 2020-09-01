#include<stdio.h>
#include<string.h>
#include<conio.h>

float pow(int, int);

int main()
{
    char digits[50];
    int befDec[50], aftDec[50];
    int aftDecDigits, befDecDigits, storeIntegral=0, i, j=0, k=0;
    float storeFractional=0, floatValue;
    char up = 'd';

    printf("******* Convert binary to float *********\n");

    //Taking binary digits in character arrary
    printf("Enter binary point number : ");
    scanf("%s",&digits);

    //Separating the integral and fractional part from the floating point value
    //strlen() is an inbuilt funtion defined in string.h header file
    for(i=0; i<strlen(digits); i++)
    {
        if(digits[i]=='.')
        {
            up='u';
        }
        else if(up=='d')
        {
            //ASCII value of 0 is 48, so when character is casted to integer, it results to 48, which is to be subtracted
            befDec[i] = (int)digits[i]-48;
            k++;
        }
        else
        {
            aftDec[j] = (int)digits[i]-48;
            j++;
        }
    }

    // Storing the lenght of Integral and fractional
    befDecDigits = k;
    aftDecDigits = j;

    //Loop to convert the integral binary part to decimal
    j=0;
    for(i = befDecDigits-1; i>=0; i--)
    {
        storeIntegral = storeIntegral + (befDec[i] *(int) pow(2,j));
        j++;
    }

    //Loop to convert the fractoinal binary part to floating point value
    j = -1;
    for(i = 0; i<aftDecDigits; i++)
    {
        storeFractional = storeFractional + (aftDec[i]*pow(2,j));
        j--;
    }

    //Adding both the integral and fractional part to get the resultant value
    floatValue = storeIntegral + storeFractional;
    printf("Floating point value = %f\n\n\n\n\n",floatValue);
    getch();
}

//Defining power function
float pow(int c, int d)
{
    float pow=1;
    if (d >= 0)
    {
        int i = 1;
        while (i <= d)
        {
            pow = pow * c;
            i++;
        }
    }
    else
    {
        int i = 0;
        while (i > d)
        {
            pow = pow/c;
            i--;
        }
    }
    return pow;
}
