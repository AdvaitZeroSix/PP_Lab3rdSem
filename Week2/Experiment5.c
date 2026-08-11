#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[50];
    char phone[20];
    char email[50];
} Contact;
int main() {
    Contact *contacts = NULL;
    int count = 0;
    int choice, i;
    char searchName[50];
    while (1) {
        printf("          MINI ADDRESS BOOK\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Remove newline
        switch (choice) {
            case 1: {
                Contact *temp;
                temp = realloc(contacts, (count + 1) * sizeof(Contact));
                if (temp == NULL) {
                    printf("Memory allocation failed!\n");
                    free(contacts);
                    return 1;
                }
                contacts = temp;
                printf("Enter Name : ");
                fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
                contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';
                printf("Enter Phone : ");
                fgets(contacts[count].phone, sizeof(contacts[count].phone), stdin);
                contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';
                printf("Enter Email : ");
                fgets(contacts[count].email, sizeof(contacts[count].email), stdin);
                contacts[count].email[strcspn(contacts[count].email, "\n")] = '\0';
                count++;
                printf("Contact Added Successfully.\n");
                break;
            }
            case 2:
                if (count == 0) {
                    printf("Address Book is Empty.\n");
                } else {
                    printf("\n%s %s %s\n", "Name", "Phone", "Email");
                    printf("-----------------------------------------------------------------\n");
                    for (i = 0; i < count; i++) {
                        printf("%s %s %s\n",
                               contacts[i].name,
                               contacts[i].phone,
                               contacts[i].email);
                    }
                }
                break;
            case 3: {
                int found = 0;
                if (count == 0) {
                    printf("Address Book is Empty.\n");
                    break;
                }
                printf("Enter Name to Search : ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';
                for (i = 0; i < count; i++) {
                    if (strcmp(contacts[i].name, searchName) == 0) {
                        printf("\nContact Found!\n");
                        printf("Name  : %s\n", contacts[i].name);
                        printf("Phone : %s\n", contacts[i].phone);
                        printf("Email : %s\n", contacts[i].email);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Contact Not Found.\n");
                }
                break;
            }
            case 4: {
                int found = 0;
                if (count == 0) {
                    printf("Address Book is Empty.\n");
                    break;
                }
                printf("Enter Name to Update : ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';
                for (i = 0; i < count; i++) {
                    if (strcmp(contacts[i].name, searchName) == 0) {
                        printf("Enter New Name : ");
                        fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
                        contacts[i].name[strcspn(contacts[i].name, "\n")] = '\0';
                        printf("Enter New Phone : ");
                        fgets(contacts[i].phone, sizeof(contacts[i].phone), stdin);
                        contacts[i].phone[strcspn(contacts[i].phone, "\n")] = '\0';
                        printf("Enter New Email : ");
                        fgets(contacts[i].email, sizeof(contacts[i].email), stdin);
                        contacts[i].email[strcspn(contacts[i].email, "\n")] = '\0';
                        printf("Contact Updated Successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Contact Not Found.\n");
                }
                break;
            }
            case 5: {
                int found = 0;
                if (count == 0) {
                    printf("Address Book is Empty.\n");
                    break;
                }
                printf("Enter Name to Delete : ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';
                for (i = 0; i < count; i++) {
                    if (strcmp(contacts[i].name, searchName) == 0) {
                        for (int j = i; j < count - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }
                        count--;
                        if (count == 0) {
                            free(contacts);
                            contacts = NULL;
                        } else {
                            Contact *temp = realloc(
                                contacts,
                                count * sizeof(Contact)
                            );
                            if (temp != NULL) {
                                contacts = temp;
                            }
                        }
                        printf("Contact Deleted Successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Contact Not Found.\n");
                }
                break;
            }
            case 6:
                free(contacts);
                contacts = NULL;
                printf("Memory Released Successfully.\n");
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }
    return 0;
}
