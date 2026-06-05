// Interface
interface LibraryUser {
    void registerAccount();
    void requestBook();
}

// KidUsers Class
class KidUsers implements LibraryUser {
    int age;
    String bookType;

    KidUsers(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

// AdultUser Class
class AdultUser implements LibraryUser {
    int age;
    String bookType;

    AdultUser(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {
        if (age > 12) {
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    @Override
    public void requestBook() {
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only Fiction books");
        }
    }
}

// Main Class
public class LibraryManagement {
    public static void main(String[] args) {

        // Kid User
        KidUsers kid = new KidUsers(10, "Kids");
        kid.registerAccount();
        kid.requestBook();

        System.out.println();

        // Adult User
        AdultUser adult = new AdultUser(25, "Fiction");
        adult.registerAccount();
        adult.requestBook();
    }
}