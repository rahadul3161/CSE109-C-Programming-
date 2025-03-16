//Name: Md. Rahadul Islam;         Id: 231 123 038

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct mBG{
    int amt;
    char type[50];};
struct mBG bG[10];
    char bT[10];
    int amt;
    int choice;
    int count=0;
void addBloodGroup(){
    printf("\nPlease, enter the blood type: ");
    scanf("%s",bT);
    printf("Please, enter the quantity of Blood: ");
    scanf("%d",&amt);
    if(count<10){
        strcpy(bG[count].type,bT);
        bG[count].amt=amt;
        count++;
        printf("\nThanks! The Blood Group have added successfully!\n");}
    else{
        printf("\nSorry, Blood Bank Storage is full. You cannot add more Blood Groups.\n"); }}
void deleteBloodGroup(){
    printf("Enter the Blood Group that you want to delete: ");
    scanf("%s",bT);
    for(int i=0; i<count; i++){
        if(strcmp(bG[i].type,bT)==0){
            for(int j=i; j<count-1; j++){
                strcpy(bG[j].type, bG[j+1].type);
                bG[j].amt=bG[j+1].amt;}
                count--;
                printf("\nThe %s Blood Group have deleted successfully!\n",bT);
                return;}}
                printf("\nSorry! Blood group is not found.\n"); }
void searchBloodGroup(){
    printf("Enter the type of Blood to search: ");
    scanf("%s",bT);
    for(int i=0; i<count; i++){
        if(strcmp(bG[i].type, bT)==0){
            printf("\nThe %s Blood Group have found. Enter the quantity: %d\n", bT, bG[i].amt);
            return; }}
            printf("\nSorry! ++The Blood Group is not found.\n"); }

void displayBloodGroups(){
    printf("Blood Groups is:\n");
    for (int i = 0; i < count; i++){
        printf("\t %s: %d\n", bG[i].type, bG[i].amt); }}

void updateBloodQuantity(){
    printf("To update, please enter the Blood Type: ");
    scanf("%s",bT);
    printf("Enter the new quantity: ");
    scanf("%d",&amt);
    for(int i=0; i<count; i++){
        if(strcmp(bG[i].type,bT)==0){
            bG[i].amt=amt;
            printf("\nThanks! The %s quantity of Blood Group is updated successfully!\n", bT);
            return; }}
            printf("\nSorry! The Blood Group have not found.\n");}

void createBloodGroupPack() {
    int countThePack;
    printf("Enter the number of blood groups to include in the package: ");
    scanf("%d", &countThePack);

    struct mBG pack[countThePack];
    for(int i = 0; i < countThePack; i++) {
        printf("\nEnter Blood Type for package item %d: ", i + 1);
        scanf("%s", bT);
        printf("Enter Quantity for package item %d: ", i + 1);
        scanf("%d", &amt);

        int found = 0;
        for(int j=0; j<count; j++) {
            if(strcmp(bG[j].type, bT)==0) {
                if(bG[j].amt >= amt) {
                    strcpy(pack[i].type, bT);
                    pack[i].amt = amt;
                    bG[j].amt -= amt;
                    found = 1;
                    break;}
                else {
                    printf("\n%s X not found in adequate amounts of blood. Available blood: %d\n", bT, bG[j].amt);
                    i--;
                    found=1;
                    break;}}}
        if(!found) {
            printf("\nBlood type %s not found in the blood bank.\n", bT);
            i--; }}
    printf("\nThe Blood Group Package Have Created:\n");
    for(int i = 0; i < countThePack; i++) {
        printf("\t%s: %d\n", pack[i].type, pack[i].amt); }}
int main(){
    while(1){
        printf("Welcome To Our Blood Donation Organization. \nPlease, donate blood for people and be ready to get blood when you need.\n\n");
        printf("1. Add Blood Group                  :   \n");
        printf("2. Delete Blood Group               :   \n");
        printf("3. Search Blood Group               :   \n");
        printf("4. Display Blood Groups             :   \n");
        printf("5. Update Blood Quantity            :   \n");
        printf("6. Blood Group Package              :   \n");
        printf("7. Exit Now\n\n\n");
        printf("Please, choose an option from above : ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            addBloodGroup();
            break;
        case 2:
            deleteBloodGroup();
            break;
        case 3:
            searchBloodGroup();
            break;
        case 4:
            displayBloodGroups();
            break;
        case 5:
            updateBloodQuantity();
            break;
        case 6:
            createBloodGroupPack();
            break;
        case 7:
            exit(0);
        default:
            printf("Sorry! Invalid choice!\n"); }}
        return 0;
}
