#include <stdio.h>
#include <string.h>

// Defining a type the information that would be stored in the phonebook
typedef struct {
    char contactName[20];
    char phoneNumber[20];
} contact;

// adding a contact
void addPhoneNumber(char phoneNumber[], char contacName[]){
    contact contactOne;
    contactOne = {contacName, phoneNumber};
    FILE* logBook;
    logBook = fopen("phonebook.txt", "wa+");
}

//remove a contact
void removePhoneNumber(char contactName[]) {
    
}

// search for a contact number
void searchPhoneNumber(char contactName[]) {

}

// edit a contact
void editPhoneNumber(char contactName[], char phoneNumber[]) {

}

// validate user password
int userPassword(char password[]){
    char userPassword[3][10] = {"password1"};

    for (int i = 0; i < sizeof(userPassword)/sizeof(userPassword[0]); i++) {
        // printf("%s", password);
        if (strcmp(password, userPassword[i]) == 0) {
            printf("Correct password");
            return 1;

        }
    }

    return 0;
}

// display menu and help user select an option
int menu(){
    int userChoice;
    char phoneNumber[20], contactName[20];
    printf("--------------------Phonebook------------------------\n1. Save phone number\n2. Search phone number\n3. Delete phone number\n4. Edit phone number\n");
    scanf("%d",&userChoice);

    // various option that come with the phonebook application
    switch (userChoice)
    {
    case 1:
        printf("\nEnter phone number: ");
        scanf("%d",&phoneNumber);
        printf("\nEnter Contact Name: ");
        scanf("%s",&contactName);

        addPhoneNumber(phoneNumber, contactName);
        break;

    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
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
