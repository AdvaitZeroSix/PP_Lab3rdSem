package week10;
public class Question4 extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
    public static void main(String[] args) {
        Question4 t = new Question4();
        t.start();
    }
}