class Product {
    int id;
    String name;
    double price;

    Product(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    void showDetails() {
        System.out.println("Product ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Price: " + price);
    }
}

class Clothing extends Product {
    String size, material;

    Clothing(int id, String name, double price, String size, String material) {
        super(id, name, price);
        this.size = size;
        this.material = material;
    }

    @Override
    void showDetails() {
        super.showDetails();
        System.out.println("Size: " + size);
        System.out.println("Material: " + material);
    }
}
class Electronics extends Product {
    String warranty, brand;

    Electronics(int id, String name, double price, String warranty, String brand) {
        super(id, name, price);
        this.warranty = warranty;
        this.brand = brand;
    }
    @Override
    void showDetails() {
        super.showDetails();
        System.out.println("Warranty: " + warranty);
        System.out.println("Brand: " + brand);
    }
}
public class Question3 {
    public static void main(String[] args) {
        // Storing subclass objects in a Product array (Polymorphism)
        Product[] products = {
            new Clothing(201, "T-Shirt", 499.0, "L", "Cotton"),
            new Electronics(301, "Laptop", 55000.0, "2 years", "Dell")
        };

        System.out.println("========== PRODUCT DETAILS ==========");
        for (int i = 0; i < products.length; i++) {
            products[i].showDetails();
            if (i < products.length - 1) {
                System.out.println("--------------------");
            }
        }
    }
}