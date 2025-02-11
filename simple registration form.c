#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char email[50];
    char phone[15];
} Registration;

int main() {
    Registration user;
    
    printf("Enter your name: ");
    fgets(user.name, sizeof(user.name), stdin);
    
    printf("Enter your age: ");
    scanf("%d", &user.age);
    getchar();
    
    printf("Enter your email: ");
    fgets(user.email, sizeof(user.email), stdin);
    
    printf("Enter your phone number: ");
    fgets(user.phone, sizeof(user.phone), stdin);
    
    printf("\nRegistration Details:\n");
    printf("Name: %s", user.name);
    printf("Age: %d\n", user.age);
    printf("Email: %s", user.email);
    printf("Phone: %s", user.phone);
    
    return 0;
}

