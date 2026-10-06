 package week9;
import java.lang.reflect.Method;
import java.util.Scanner;
class Student {
    public void display() {
        System.out.println("Hello, I am a Student!");
    }
}
class Teacher {
    public void display() {
        System.out.println("Hello, I am a Teacher!");
    }
}
public class Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter class name: ");
        String name = sc.nextLine();
        try {
            Class<?> c = Class.forName(name);
            System.out.println("Class loaded: " + c.getSimpleName());
            Object obj = c.getDeclaredConstructor().newInstance();
            System.out.println("Object created successfully.");
            Method m = c.getMethod("display");
            m.invoke(obj);
            System.out.println("Method invoked successfully.");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
        sc.close();
    }
}
