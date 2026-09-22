public class Question1 {
    public class LibrarySystem {
        public static void main(String[] args) {
            class Book {
                String title, author;
                Book(String title, String author) {
                    this.title = title;
                    this.author = author;
                }
                void displayBookDetails() {
                    System.out.println("Title : " + title);
                    System.out.println("Author : " + author);
                }
            }
            class EBook extends Book {
                String format;
                EBook(String title, String author, String format) {
                    super(title, author);
                    this.format = format;
                }
                void displayEBookDetails() {
                    displayBookDetails();
                    System.out.println("Format : " + format);
                }
            }
            EBook[] ebooks = {
                new EBook("Java Basics", "James Gosling", "EPUB"),
                new EBook("Digital Design Fundamentals", "Morris Mano", "PDF"),
                new EBook("Data Structures in C", "Reema Thareja", "PDF"),
                new EBook("Object-Oriented Programming", "Bjarne Stroustrup", "PDF")
            };
            System.out.println("========== E-BOOK DETAILS ==========");
            for (int i = 0; i < ebooks.length; i++) {
                ebooks[i].displayEBookDetails();
                if (i < ebooks.length - 1) System.out.println();
            }
        }
    }
}
