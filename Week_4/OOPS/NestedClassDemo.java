class Outer {
    void display() {
        System.out.println("Inside Outer class display method.");
    }

    // Inner class
    class Inner {
        void display() {
            System.out.println("Inside Inner class display method.");
        }
    }
}

public class NestedClassDemo {
    public static void main(String[] args) {
        
        Outer outerObj = new Outer();
        outerObj.display();

        
        Outer.Inner innerObj = outerObj.new Inner();
        innerObj.display();
    }
}