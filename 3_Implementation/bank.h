#ifndef __BANK_H__
#define __BANK_H__
/**
 * @brief structure containing customer details
 * 
 */
struct customer
{
    int account_no;
    char name[80];
    int balance;
};
void accept(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);
#endif
