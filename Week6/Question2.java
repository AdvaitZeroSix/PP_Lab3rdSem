
class Account {
    int accountNumber;
    double balance;

    Account(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    void displayAccountDetails() {
        System.out.println("Account No: " + accountNumber);
        System.out.println("Balance: " + balance);
    }
}
class SavingsAccount extends Account {
    double interestRate;

    SavingsAccount(int accountNumber, double balance, double interestRate) {
        super(accountNumber, balance);
        this.interestRate = interestRate;
    }
}
class PremiumSavingsAccount extends SavingsAccount {
    String extraBenefits;

    PremiumSavingsAccount(int accountNumber, double balance, double interestRate, String extraBenefits) {
        super(accountNumber, balance, interestRate);
        this.extraBenefits = extraBenefits;
    }

    void displayPremiumDetails() {
        System.out.println("========== PREMIUM SAVINGS ACCOUNT ==========");
        displayAccountDetails();
        System.out.println("Interest Rate: " + interestRate + "%");
        double interest = balance * interestRate / 100;
        double totalBalance = balance + interest;
        System.out.println("Total Balance (with interest): " + totalBalance);
        
        System.out.println("Benefits: " + extraBenefits);
    }
}
public class Question2 {
    public static void main(String[] args) {
        PremiumSavingsAccount account = new PremiumSavingsAccount(
            101, 10000.0, 5.0, "Free ATM Withdrawals"
        );
        account.displayPremiumDetails();
    }
}