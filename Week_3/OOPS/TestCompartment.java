import java.util.Random;


abstract class Compartment {
   
    public abstract String notice();
}


class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "Notice: First Class - Executive seating. Please maintain silence.";
    }
}


class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Notice: Ladies Compartment - Strictly reserved for female passengers.";
    }
}


class General extends Compartment {
    @Override
    public String notice() {
        return "Notice: General Compartment - Open for all. Beware of pickpockets.";
    }
}


class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Notice: Luggage Van - Only heavy baggage allowed. No passengers.";
    }
}


public class TestCompartment {
    public static void main(String[] args) {
        
        Compartment[] train = new Compartment[10];
        
        
        Random rand = new Random();
        
        System.out.println("=== Generating 10 Random Train Compartments ===\n");
        
        
        for (int i = 0; i < train.length; i++) {
           
            int randomNum = rand.nextInt(4) + 1;
            
            switch (randomNum) {
                case 1:
                    train[i] = new FirstClass();
                    break;
                case 2:
                    train[i] = new Ladies();
                    break;
                case 3:
                    train[i] = new General();
                    break;
                case 4:
                    train[i] = new Luggage();
                    break;
            }
        }
        
        
        for (int i = 0; i < train.length; i++) {
            System.out.print("Coach " + (i + 1) + " -> ");
            
            System.out.println(train[i].notice());
        }
    }
}