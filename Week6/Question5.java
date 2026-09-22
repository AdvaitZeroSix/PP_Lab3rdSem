
interface UPIPayment {
    void upiPay(double amount);
}
interface CardPayment {
    void cardPay(double amount);
}
class PaymentProcessor implements UPIPayment, CardPayment {
    @Override
    public void upiPay(double amount) {
        System.out.println("Paid " + amount + " via UPI.");
    }

    @Override
    public void cardPay(double amount) {
        System.out.println("Paid " + amount + " via Card.");
    }
}
public class Question5 {
    public static void main(String[] args) {
        PaymentProcessor processor = new PaymentProcessor();
        processor.upiPay(500.0);
        processor.cardPay(1500.0);
    }
}