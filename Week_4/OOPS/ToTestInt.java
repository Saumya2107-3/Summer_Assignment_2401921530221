// Interface definition
interface Test {
    void square(int num);
}

// Class implementing the interface
class Arithmetic implements Test {
    @Override
    public void square(int num) {
        System.out.println("The square of " + num + " is: " + (num * num));
    }
}

// Main class to test the implementation
public class ToTestInt {
    public static void main(String[] args) {
        // Create object of Arithmetic class
        Arithmetic obj = new Arithmetic();
        obj.square(5); // Testing with number 5
    }
}