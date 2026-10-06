package week7;
import java.util.*;
public class Question1 {
    public static void main(String[] args) {
        ArrayList<String> active = new ArrayList<>(
                Arrays.asList("Arjun", "Bhavana", "Charan",
                              "Divya", "Farhan"));
        active.add(2, "Deepak");
        active.addAll(Arrays.asList("Harish", "Isha"));
        System.out.println("Active Students: " + active);
        System.out.println("Student at index 3: " + active.get(3));
        active.set(3, "Divya Sharma");
        System.out.println("Contains Arjun? " + active.contains("Arjun"));
        System.out.println("Index of Bhavana: " + active.indexOf("Bhavana"));
        active.add("Arjun");
        System.out.println("Last index of Arjun: "+ active.lastIndexOf("Arjun"));
        active.remove("Charan");
        active.remove(0);
        System.out.println("Size: " + active.size());
        System.out.println("Empty? " + active.isEmpty());
        System.out.println("Students:");
        for (String s : active)
            System.out.println(s);
        active.forEach(s -> System.out.print(s + " "));
        Collections.sort(active);                       
        System.out.println("\nSorted: " + active);
        Collections.reverse(active);                   
        System.out.println("Reversed: " + active);
        System.out.println("Sublist: " + active.subList(0, 3));
        active.clear();
        System.out.println("After clear: " + active);
        System.out.println("Empty? " + active.isEmpty());
        LinkedList<String> alumni = new LinkedList<>(
                Arrays.asList("Rahul", "Sneha", "Vikram",
                              "Ananya", "Karthik", "Meera"));
        alumni.addFirst("Aditya");
        alumni.addLast("Nisha"); 
        alumni.add(2, "Rohan");                    
        System.out.println("\nAlumni Students: " + alumni);
        System.out.println("First: " + alumni.getFirst());
        System.out.println("Last: " + alumni.getLast());
        System.out.println("Index 3: " + alumni.get(3));
        alumni.set(3, "Ananya Rao");       
        System.out.println("Contains Rahul? " + alumni.contains("Rahul"));
        System.out.println("Index of Sneha: " + alumni.indexOf("Sneha"));
        alumni.remove("Vikram");               
        alumni.removeFirst();
        alumni.removeLast();
        System.out.println("Peek: " + alumni.peek());
        System.out.println("Peek First: " + alumni.peekFirst());
        System.out.println("Peek Last: " + alumni.peekLast());
        System.out.println("Poll First: " + alumni.pollFirst());
        System.out.println("Poll Last: " + alumni.pollLast());
        System.out.println("Remaining: " + alumni);
        System.out.println("Reverse:");
        Iterator<String> it = alumni.descendingIterator();
        while (it.hasNext())
            System.out.println(it.next());
        System.out.println("Size: " + alumni.size());
        System.out.println("Empty? " + alumni.isEmpty());
        alumni.clear();
        System.out.println("After clear: " + alumni);
    }
}
