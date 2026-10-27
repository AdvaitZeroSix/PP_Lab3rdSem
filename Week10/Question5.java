package week10;

public class Question5 extends Thread {

    public void run() {
        for (int i = 1; i <= 3; i++) {
            System.out.println(Thread.currentThread().getName()
                    + " - Count: " + i);
        }
    }

    public static void main(String[] args) {
        Question5 t1 = new Question5();
        Question5 t2 = new Question5();

        t1.setName("Thread-1");
        t2.setName("Thread-2");

        try {
            t1.start();
            t1.join();

            t2.start();
            t2.join();
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}