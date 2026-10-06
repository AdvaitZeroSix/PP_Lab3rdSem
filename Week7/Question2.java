package week7;
import java.util.*;
public class Question2 {
    public static void main(String[] args) {
        HashSet<String> products = new HashSet<>();
        products.add("Laptop");
        products.add("Mouse");
        products.add("Tablet");
        products.add("Phone");
        products.add("Keyboard");
        products.add("Laptop");
        System.out.println("Products: " + products);
        products.remove("Keyboard");
        System.out.println("After removing Keyboard: " + products);
        System.out.println("Contains Laptop? " + products.contains("Laptop"));
        System.out.println("Contains Printer? " + products.contains("Printer"));
        System.out.println("Number of Products: " + products.size());
        System.out.println("All Products:");
        for (String p : products)
            System.out.println(p);
        System.out.println("Using forEach():");
        products.forEach(p -> System.out.println(p));
        System.out.println("Is Empty? " + products.isEmpty());
        HashSet<String> other = new HashSet<>(
                Arrays.asList("Phone", "Printer", "Camera"));
        HashSet<String> union = new HashSet<>(products);
        union.addAll(other);
        HashSet<String> intersection = new HashSet<>(products);
        intersection.retainAll(other);
        HashSet<String> difference = new HashSet<>(products);
        difference.removeAll(other);
        System.out.println("Union: " + union);
        System.out.println("Intersection: " + intersection);
        System.out.println("Difference: " + difference);
        products.clear();
        System.out.println("After clearing, is empty? " + products.isEmpty());
        TreeSet<Integer> scores = new TreeSet<>(
                Arrays.asList(75, 79, 85, 88, 92, 85));
        System.out.println("\nScores: " + scores);
        scores.remove(75);
        System.out.println("After removing 75: " + scores);
        System.out.println("Lowest Score: " + scores.first());
        System.out.println("Highest Score: " + scores.last());
        System.out.println("Score higher than 85: " + scores.higher(85));
        System.out.println("Score lower than 85: " + scores.lower(85));
        System.out.println("Contains 88? " + scores.contains(88));
        System.out.println("Score >= 86: " + scores.ceiling(86));
        System.out.println("Score <= 86: " + scores.floor(86));
        System.out.println("Number of Scores: " + scores.size());
        System.out.println("All Scores:");
        for (int score : scores)
            System.out.print(score + " ");
        System.out.println("\nDescending Order:");
        for (int score : scores.descendingSet())
            System.out.print(score + " ");
        System.out.println("\nScores less than 88: " + scores.headSet(88));
        System.out.println("Scores >= 85: " + scores.tailSet(85));
        System.out.println("Scores from 79 to 92: " + scores.subSet(79, true, 92, true));
        System.out.println("Removed Lowest Score: " + scores.pollFirst());
        System.out.println("Removed Highest Score: " + scores.pollLast());
        System.out.println("Remaining Scores: " + scores);
    }
}
