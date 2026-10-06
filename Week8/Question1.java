package week8;
import java.util.*;
public class Question1 {
    static class Employee {
        String name;

        Employee(String name) {
            this.name = name;
        }

        void work() {
            System.out.println(name + " is working");
        }
    }
    static class Manager extends Employee {
        Manager(String name) {
            super(name);
        }

        void work() {
            System.out.println(name + " is managing team");
        }
    }
    static class Developer extends Employee {
        Developer(String name) {
            super(name);
        }

        void work() {
            System.out.println(name + " is writing code");
        }
    }
    static void printEmployees(List<? extends Employee> employees) {
        System.out.println("Employee Report:");
        for (Employee e : employees)
            e.work();
    }
    static void addDevelopers(List<? super Developer> employees) {
        employees.add(new Developer("Alice"));
        employees.add(new Developer("Bob"));
        System.out.println("Developers added successfully!");
    }

    public static void main(String[] args) {
        List<Developer> developers = new ArrayList<>();
        developers.add(new Developer("Charlie"));
        printEmployees(developers);

        List<Manager> managers = new ArrayList<>();
        managers.add(new Manager("Diana"));
        printEmployees(managers);
        List<Employee> employees = new ArrayList<>();
        addDevelopers(employees);

        printEmployees(employees);
    }
}
