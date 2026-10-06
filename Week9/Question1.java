package week9;
import java.lang.reflect.*;
import java.util.Scanner;
public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter class name: ");
        String name = sc.nextLine();
        try {
            Class<?> c = Class.forName(name);
            System.out.println("\nClass Name: " + c.getName());
            System.out.println("Fields:");
            for (Field f : c.getDeclaredFields())
                System.out.println("- " + f.getName());
            System.out.println("Methods:");
            for (Method m : c.getDeclaredMethods())
                System.out.println("- " + m.getName());
            System.out.println("Constructors:");
            for (Constructor<?> con : c.getDeclaredConstructors()) {
                System.out.print("- " + Modifier.toString(con.getModifiers())
                        + " " + c.getSimpleName() + "(");
                Class<?>[] p = con.getParameterTypes();
                for (int i = 0; i < p.length; i++) {
                    System.out.print(p[i].getName());
                    if (i < p.length - 1)
                        System.out.print(",");
                }
                System.out.println(")");
            }
        } catch (ClassNotFoundException e) {
            System.out.println("Class not found: " + name);
        }
        sc.close();
    }
}
