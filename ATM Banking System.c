#include <stdio.h>

int main() {
    int pin = 20005, enteredPin;
    int choice;
    float balance = 10000, amount;

    printf("===== WELCOME TO ATM =====\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("❌ Incorrect PIN! Access Denied.\n");
        return 0;
    }

    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("💰 Your Balance: ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount <= balance && amount > 0) {
                    balance -= amount;
                    printf("✅ Please collect your cash.\n");
                } else {
                    printf("❌ Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("✅ Amount Deposited Successfully.\n");
                } else {
                    printf("❌ Invalid Amount!\n");
                }
                break;

            case 4:
                printf("🙏 Thank you for using ATM. Goodbye!\n");
                break;

            default:
                printf("❌ Invalid Choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
