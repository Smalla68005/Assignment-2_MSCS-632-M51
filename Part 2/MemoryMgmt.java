import java.util.ArrayList;

public class MemoryMgmt {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();
        for (int i = 1; i <= 5; i++) {
            numbers.add(i);
        }
        System.out.println(numbers);
        numbers = null; // The garbage collector will eventually free memory
        System.gc();    // Request garbage collection (not guaranteed)
    }
}
