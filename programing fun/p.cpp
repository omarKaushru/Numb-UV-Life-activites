#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAX 50

struct postfix
{
    int stack[MAX] ;
    int top, nn ;
    char *s ;
} ;

void initpostfix ( struct postfix * ) ;
void setexpr ( struct postfix *, char * ) ;
void push ( struct postfix *, int ) ;
int pop ( struct postfix * ) ;
void calculate ( struct postfix * ) ;
void show ( struct postfix ) ;

main( )
{
    struct postfix q ;
    char expr[MAX] ;

    system("cls" ) ;

    initpostfix ( &q ) ;


    printf ( "\nEnter postfix expression to be evaluated: " ) ;
    gets ( expr ) ;

    setexpr ( &q, expr ) ;
    calculate ( &q ) ;
    show ( q ) ;

    getch( ) ;
}

/* initializes data members */
void initpostfix ( struct postfix *p )
{
    p -> top = -1 ;
}

/* sets s to point to the given expr. */
void setexpr ( struct postfix *p, char *str )
{
    p -> s = str ;
}

/* adds digit to the stack */
void push ( struct postfix *p, int item )
{
    if ( p -> top == MAX - 1 )
        printf ( "\nStack is full." ) ;
    else
    {
        p -> top++ ;
        p -> stack[p -> top] = item ;
    }
}

/* pops digit from the stack */
int pop ( struct postfix *p )
{
    int data ;

    if ( p -> top == -1 )
    {
        printf ( "\nStack is empty." ) ;
            return 0 ;
    }

    data = p -> stack[p -> top] ;
    p -> top-- ;

    return data ;
}

/* evaluates the postfix expression */
void calculate( struct postfix *p )
{
    int n1, n2, n3 ;
    while ( *( p -> s ) )
    {
        /* skip whitespace, if any */
if ( *( p -> s ) == ' ' || *( p -> s ) == '\t' )
        {
            p -> s++ ;
            continue ;
        }

        /* if digit is encountered */
if ( isdigit ( *( p -> s ) ) )
        {
            p -> nn = *( p -> s ) - '0' ;
            push ( p, p -> nn ) ;
        }
        else
        {
            /* if operator is encountered */

            n1 = pop ( p ) ;
            n2 = pop ( p ) ;
            switch ( *( p -> s ) )
            {
                case'+' :
                      n3 = n2 + n1 ;
                      break ;

                case'-' :
                      n3 = n2 - n1 ;
                      break ;

                case'/' :
                      n3 = n2 / n1 ;
                      break ;

                case'*' :
                      n3 = n2 * n1 ;
                      break ;

                case'%' :
                      n3 = n2 % n1 ;
                      break ;

                case'$' :
                      n3 = pow ( n2 , n1 ) ;
                      break ;

                default :
                      printf ( "Unknown operator" ) ;
                      exit ( 1 ) ;
            }

            push ( p, n3 ) ;
        }
        p -> s++ ;
    }
}

/* displays the result */
void show ( struct postfix p )
{
    p.nn = pop ( &p ) ;
    printf ( "Result is: %d", p.nn ) ;
}
