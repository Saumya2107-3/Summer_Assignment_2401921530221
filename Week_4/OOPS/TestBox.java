class Box {
    double length;
    double breadth;

    // Constructor for Box
    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    // Method to find area of the base
    double findArea() {
        return length * breadth;
    }
}

// Box3D extends Box
class Box3D extends Box {
    double height;

    // Constructor for Box3D using super keyword
    Box3D(double length, double breadth, double height) {
        super(length, breadth); // Parent class constructor ko call kiya
        this.height = height;
    }

    // Method to find volume
    double findVolume() {
        // Volume = Area of base * height
        return findArea() * height;
    }
}

public class TestBox {
    public static void main(String[] args) {
        
        Box3D myBox = new Box3D(5.0, 4.0, 3.0);
        
        System.out.println("Base Area of the Box: " + myBox.findArea());
        System.out.println("Total Volume of the Box3D: " + myBox.findVolume());
    }
}