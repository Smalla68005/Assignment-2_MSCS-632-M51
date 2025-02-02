public class Main {
    // Java: Corrected Version - Garbage Collection Example
    public static void main(String[] args) {
        String s = new String("Hello");
        System.out.println(s); // Printing before setting to null
        s = null;               // Object now eligible for garbage collection
    }
}
