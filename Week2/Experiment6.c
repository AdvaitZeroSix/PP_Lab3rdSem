#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char name[50];
    int votes;
} Candidate;
int main(){
    Candidate *candidates = NULL;
    int count = 0;
    int choice,i,id,found;
    char searchName[50];
    while (1){
        printf("\n=====================================\n");
        printf("        DYNAMIC VOTING SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Candidate\n");
        printf("2. Cast Vote\n");
        printf("3. Display Voting Results\n");
        printf("4. Search Candidate\n");
        printf("5. Declare Winner\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice){
            case 1:{
                Candidate *temp;
                temp = realloc(candidates,
                               (count + 1) * sizeof(Candidate));
                if (temp == NULL)
                {
                    printf("Memory allocation failed!\n");
                    free(candidates);
                    return 1;
                }
                candidates = temp;
                printf("Enter Candidate ID : ");
                scanf("%d", &candidates[count].id);
                getchar();
                printf("Enter Candidate Name : ");
                fgets(candidates[count].name, 50, stdin);
                candidates[count].name[
                    strlen(candidates[count].name) - 1
                ] = '\0';
                candidates[count].votes = 0;
                count++;
                printf("Candidate Added Successfully.\n");
                break;
            }
            case 2:{
                found = 0;
                if (count == 0)
                {
                    printf("No candidates available.\n");
                    break;
                }
                printf("Enter Candidate ID to Vote : ");
                scanf("%d", &id);
                for (i = 0; i < count; i++)
                {
                    if (candidates[i].id == id)
                    {
                        candidates[i].votes++;

                        printf("Vote Cast Successfully.\n");

                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Candidate Not Found.\n");
                }

                break;
            }
            case 3:{
                if (count == 0){
                    printf("No candidates available.\n");
                }
                else{
                    printf("\n-------------------------------------\n");
                    printf("ID\tCandidate\tVotes\n");
                    printf("-------------------------------------\n");

                    for (i = 0; i < count; i++){
                        printf("%d\t%s\t\t%d\n",
                               candidates[i].id,
                               candidates[i].name,
                               candidates[i].votes);
                    }
                }
                break;
            }
            case 4:{
                found = 0;
                if (count == 0){
                    printf("No candidates available.\n");
                    break;
                }
                printf("Enter Candidate ID to Search : ");
                scanf("%d", &id);
                for (i = 0; i < count; i++){
                    if (candidates[i].id == id){
                        printf("\nCandidate Found\n");
                        printf("ID    : %d\n", candidates[i].id);
                        printf("Name  : %s\n", candidates[i].name);
                        printf("Votes : %d\n", candidates[i].votes);

                        found = 1;
                        break;
                    }
                }
                if (found == 0){
                    printf("Candidate Not Found.\n");
                }
                break;
            }
            case 5:{
                int winner;
                if (count == 0){
                    printf("No candidates available.\n");
                    break;
                }
                winner = 0;
                for (i = 1; i < count; i++){
                    if (candidates[i].votes > candidates[winner].votes){
                        winner = i;
                    }
                }
                printf("\n=====================================\n");
                printf("           WINNER\n");
                printf("=====================================\n");
                printf("ID    : %d\n", candidates[winner].id);
                printf("Name  : %s\n", candidates[winner].name);
                printf("Votes : %d\n", candidates[winner].votes);
                printf("=====================================\n");
                break;
            }
            case 6:{
                free(candidates);
                candidates = NULL;
                printf("Memory Released Successfully.\n");
                printf("Exiting Program...\n");
                return 0;
            }
            default:{
                printf("Invalid Choice! Please try again.\n");
            }
        }
    }
    return 0;
}