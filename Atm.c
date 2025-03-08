#include <stdio.h>

// Function prototypes
void checkbalance(float balance);
float withdraw(float balance);
float deposit(float balance);

int main()
{
    int choice;
    float balance = 10000;

    while (1)
    {
        printf("\n========================\n");
        printf("   ATM Banking System\n");
        printf("========================\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                checkbalance(balance);
                break;
            case 2:
                balance = withdraw(balance);
                break;
            case 3:
                balance = deposit(balance);
                break;
            case 4:
                printf("Thank you for using our banking system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}

// Function to check the account balance
void checkbalance(float balance) {
    printf("Your current balance is: ?%.2f\n", balance);
}

// Function to withdraw money
float withdraw(float balance) {
    float amount;
    printf("Enter the amount you want to withdraw: ");
    scanf("%f", &amount);

    // Validation for negative and excessive withdrawal
    if (amount <= 0) {
        printf("Invalid amount. Please enter a positive value.\n");
    } 
    else if (amount > balance) {
        printf("Insufficient balance!\n");
    } 
    else {
        balance -= amount;
        printf("Withdrawal successful! ?%.2f has been debited.\n", amount);
        printf("Your current balance is: ?%.2f\n", balance);
    }

    return balance;
}

// Function to deposit money
float deposit(float balance) {
    float amount;
    printf("Enter the amount you want to deposit: ");
    scanf("%f", &amount);

    // Validation for negative deposit
    if (amount <= 0) {
        printf("Invalid amount. Please enter a positive value.\n");
    } 
    else {
        balance += amount;
        printf("Deposit successful! ?%.2f has been credited.\n", amount);
        printf("Your current balance is: ?%.2f\n", balance);
    }

    return balance;
}

