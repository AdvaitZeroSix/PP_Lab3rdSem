package week10;
public class Question6 extends Thread {
    public void run() {
        System.out.println(getName() + " running");
    }
    public static void main(String[] args) {
        Question6 t1 = new Question6();
        Question6 t2 = new Question6();
        t1.setName("Task 1");
        t2.setName("Task 2");
        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.MAX_PRIORITY);
        System.out.println("Thread 1 Priority: " + t1.getPriority());
        System.out.println("Thread 2 Priority: " + t2.getPriority());
        t1.start();
        t2.start();
    }
}