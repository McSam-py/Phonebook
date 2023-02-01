#include <stdio.h>
#include <string.h>

// adding a contact
void addPhoneNumber(int phoneNumber[], char contactName[]){
    int res;
    FILE* phoneBook;
    phoneBook = fopen("phonebook.txt", "a");
    res = fprintf(phoneBook,"%s --> %s \n", phoneNumber, contactName);
    fclose(phoneBook);
    printf("Saved successfully!\n");
}


//remove a contact
void removePhoneNumber(char phoneOrContactName[]) {
    FILE* logBook;
    logBook = fopen("phonebook.txt", "a");
    
    
}

// search for a contact number
void searchPhoneNumber(char contactName[]) {

}

// edit a contact
void editPhoneNumber(char phoneOrContactName[]) {

}

// display contents of the phone book
int displayPhoneBook(){
    char  contents[50];
    FILE* phoneBook = fopen("phonebook.txt", "r");
    
    if (NULL == phoneBook){
        printf("Error: Could not open phone book");
        return 0;
    }

    printf("\n[======>PhoneBook<=======]\n");
    while (fgets(contents, 50, phoneBook) != NULL){
        printf("%s", contents);
    };

    fclose(phoneBook);
}

// validate user password
int userPassword(char password[]){
    char userPassword[3][10] = {"password1"};

    for (int i = 0; i < sizeof(userPassword)/sizeof(userPassword[0]); i++) {
        // printf("%s", password);
        if (strcmp(password, userPassword[i]) == 0) {
            return 1;

        }
    }

    return 0;
}

// display menu and help user select an option
int menu(){
    int userChoice;
    char phoneNumber[20], contactName[20],phoneOrContactName[20];
    printf("\n===>[Phonebook]<====\n1. Save phone number\n2. Search phone number\n3. Delete phone number\n4. Edit phone number\n5. Display PhoneBook\n6. Exit program\n\nEnter option: ");
    scanf("%d",&userChoice);

    // various option that come with the phonebook application
    switch (userChoice)
    {
    case 1:
        printf("\nEnter phone number: ");
        scanf("%s",&phoneNumber);
        printf("\nEnter Contact Name: ");
        scanf("%s",&contactName);

        addPhoneNumber(phoneNumber, contactName);
        menu();
        break;

    case 2:
        printf("\nEnter phone number/ contact name: ");
        scanf("%d",&phoneOrContactName);
        searchPhoneNumber(phoneOrContactName);
        menu();
        break;
    case 3:
        printf("\nEnter phone number/ contact name:");
        scanf("%d",&phoneOrContactName);
        removePhoneNumber(phoneOrContactName);
        menu();
        break;
    case 4:
        printf("\nEnter phone number/ contact name you want to edit: ");
        scanf("%d",&phoneOrContactName);
        editPhoneNumber(phoneOrContactName);
        menu();
        break;
    case 5:
        displayPhoneBook();
        menu();
        break;
    case 6:
        break;
    default:
        printf("\nInvalid phone or contact name");
    }

}

int main(){
    char password[20];
    printf("Enter your password: ");
    scanf("%s", &password);

    if  (userPassword(password) == 1) {
        menu();
    }    
    return 0;
}
