//Creating a Thread Using the Thread Class
package week10;
public class Question1 extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Child Thread: " + i);
        }
    }
    public static void main(String[] args) {
        Question1 t = new Question1();
        t.start();
        System.out.println("Main Thread");
    }
}
