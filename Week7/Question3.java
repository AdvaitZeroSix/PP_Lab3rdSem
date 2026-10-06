package week7;

import java.util.*;

public class Question3 {
    public static void main(String[] args) {
        HashMap<Integer, String> employees = new HashMap<>();

        employees.put(101, "Bob");
        employees.put(102, "Bobby");
        employees.put(103, "Alice");
        employees.put(104, "Charlie");

        System.out.println("HashMap: " + employees);

        System.out.println("Employee 103: " + employees.get(103));

        employees.put(102, "Bobby Kumar");      
        employees.remove(104);                  

        System.out.println("After update/remove: " + employees);

        System.out.println("Contains ID 101? " + employees.containsKey(101));
        System.out.println("Contains Charlie? " + employees.containsValue("Charlie"));
        System.out.println("Number of Employees: " + employees.size());
        System.out.println("Is Empty? " + employees.isEmpty());

        System.out.println("Employee IDs:");
        for (int id : employees.keySet())
            System.out.println(id);

        System.out.println("Employee Names:");
        for (String name : employees.values())
            System.out.println(name);

        System.out.println("HashMap Entries:");
        for (Map.Entry<Integer, String> e : employees.entrySet())
            System.out.println("ID: " + e.getKey() + ", Name: " + e.getValue());
        employees.putIfAbsent(105, "David");
        employees.replace(105, "David Kumar");

        System.out.println("After putIfAbsent and replace: " + employees);

        employees.clear();
        System.out.println("After clearing, is empty? " + employees.isEmpty());
        TreeMap<Integer, String> tree = new TreeMap<>();

        tree.put(101, "Bob");
        tree.put(102, "Bobby");
        tree.put(103, "Alice");
        tree.put(104, "Charlie");

        System.out.println("\nTreeMap: " + tree);

        System.out.println("Employee 104: " + tree.get(104));

        tree.put(102, "Bobby Kumar");
        tree.remove(104);
        tree.put(104, "Charlie");

        System.out.println("After update: " + tree);

        System.out.println("Contains ID 101? " + tree.containsKey(101));
        System.out.println("Contains Charlie? " + tree.containsValue("Charlie"));

        System.out.println("First ID: " + tree.firstKey());
        System.out.println("Last ID: " + tree.lastKey());

        System.out.println("Higher than 102: " + tree.higherKey(102));
        System.out.println("Lower than 102: " + tree.lowerKey(102));
        System.out.println("Ceiling of 102: " + tree.ceilingKey(102));
        System.out.println("Floor of 102: " + tree.floorKey(102));

        System.out.println("Number of Employees: " + tree.size());

        System.out.println("Employee IDs:");
        for (int id : tree.keySet())
            System.out.println(id);

        System.out.println("Employee Names:");
        for (String name : tree.values())
            System.out.println(name);

        System.out.println("TreeMap Entries:");
        for (Map.Entry<Integer, String> e : tree.entrySet())
            System.out.println("ID: " + e.getKey() + ", Name: " + e.getValue());

        System.out.println("Descending Map:");
        System.out.println(tree.descendingMap());

        tree.clear();
        System.out.println("After clearing, is empty? " + tree.isEmpty());
    }
}
