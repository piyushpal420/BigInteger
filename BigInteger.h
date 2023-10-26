#include<stdio.h>
#include<stdlib.h>

/*
PIYUSH PAL
SEC B
CLASS ROLL NO: 42
UNIVERSITY ROLL NO: 2021349
*/

typedef struct node 
{
    int data;
    struct node *next;
}node;

typedef struct BigInteger
{
    struct node *l;
    int sign;
    int length;
}BigInteger;


struct BigInteger add(struct BigInteger a,struct BigInteger b);
struct BigInteger add_plus_plus(struct BigInteger a,struct BigInteger b,int sign);
struct BigInteger add_minus_plus(struct BigInteger a,struct BigInteger b,int sign);
struct BigInteger division(struct BigInteger a , struct BigInteger b , int sign , int choice);
void div_add(struct node *p1 ,struct node *p2 ,struct node *p3 ,int *l );
void div_sub(struct node *p1 ,struct node *p2 ,struct node *p3 );
int compare(struct BigInteger h1 , struct BigInteger h2);
int compare_sub(struct node *h1 , struct node *h2);
void sign_rev(struct node *head);
struct BigInteger initialize(char *s);
void display(struct BigInteger c);
void print_ll(struct node *head);
void turnicate(struct BigInteger dev);
void dump(struct BigInteger c);
struct BigInteger mod(struct BigInteger a , struct BigInteger b);
struct BigInteger sub(struct BigInteger a,struct BigInteger b);
struct BigInteger mul(struct BigInteger a,struct BigInteger b);
struct BigInteger multiply(struct BigInteger a , struct BigInteger b ,int sign);
struct BigInteger div1(struct BigInteger a , struct BigInteger b );

/*
PIYUSH PAL
SEC B
CLASS ROLL NO: 42
UNIVERSITY ROLL NO: 2021349
*/
