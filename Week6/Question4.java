class Device {
    int id;
    String brand;

    Device(int id, String brand) {
        this.id = id;
        this.brand = brand;
    }
    void showDeviceDetails() {
        System.out.println("Device ID: " + id);
        System.out.println("Brand:     " + brand);
    }
}
interface WiFiEnabled {
    void connectWiFi();
}
interface BluetoothEnabled {
    void connectBluetooth();
}
class SmartPhone extends Device implements WiFiEnabled, BluetoothEnabled {
    String modelName;
    SmartPhone(int id, String brand, String modelName) {
        super(id, brand);
        this.modelName = modelName;
    }
    @Override
    public void connectWiFi() {
        System.out.println(modelName + " is connected to Wi-Fi network.");
    }
    @Override
    public void connectBluetooth() {
        System.out.println(modelName + " is connected to Bluetooth device.");
    }
    void showSmartPhoneDetails() {
        System.out.println("========== SMART DEVICE SYSTEM ==========");
        showDeviceDetails();
        System.out.println("Model:     " + modelName);
        connectWiFi();
        connectBluetooth();
    }
}

public class Question4 {
    public static void main(String[] args) {
        SmartPhone myPhone = new SmartPhone(501, "Apple", "iPhone 15");
        myPhone.showSmartPhoneDetails();
    }
}