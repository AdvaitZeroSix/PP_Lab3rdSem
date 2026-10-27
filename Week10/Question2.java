//Creating a Thread Using the Runnable Interface
package week10;
public class Question2 implements Runnable {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Task: " + i);
        }
    }
    public static void main(String[] args) {
        Question2 obj = new Question2();
        Thread t = new Thread(obj);
        t.start();
    }
}
