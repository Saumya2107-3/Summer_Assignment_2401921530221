class Point {
    
    private int x;
    private int y;

    // Default Constructor
    public Point() {
        this.x = 0;
        this.y = 0;
    }

    // Parameterized Constructor
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Setter for X
    public void setX(int x) {
        this.x = x;
    }

    // Setter for Y
    public void setY(int y) {
        this.y = y;
    }

    // Setter for both X and Y
    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Helper method to display current coordinates
    public void display() {
        System.out.println("Point Coordinates: (" + x + ", " + y + ")");
    }
}

public class TestPoint {
    public static void main(String[] args) {
        Point p1 = new Point(); // Uses default constructor
        p1.display();

        Point p2 = new Point(10, 20); // Uses parameterized constructor
        p2.display();

        p1.setXY(5, 7); // Updating values using setter
        p1.display();
    }
}