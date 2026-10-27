package week10;
class BankAccount {
    int balance = 1000;
    synchronized void withdraw(int amount, String name) {
        if (balance >= amount) {
            balance = balance - amount;
            System.out.println(name + " withdrew " + amount
                    + ", Balance: " + balance);
        } else {
            System.out.println(name + ": Insufficient balance");
        }
    }
}
public class Question7 extends Thread {
    BankAccount account;
    int amount;
    String customer;
    Question7(BankAccount account, int amount, String customer) {
        this.account = account;
        this.amount = amount;
        this.customer = customer;
    }
    public void run() {
        account.withdraw(amount, customer);
    }
    public static void main(String[] args) {
        BankAccount account = new BankAccount();
        Question7 t1 = new Question7(account, 700, "Customer-1");
        Question7 t2 = new Question7(account, 500, "Customer-2");
        t1.start();
        t2.start();
    }
}