#include <stdio.h>
#include <stdlib.h>

#define MAX 500000
#define USERS 510000  // Exceeds the limit to trigger crash

int main() {
    int current_users = 0;
    
    printf("Simulating user load...\n");
    for (int i = 0; i < USERS; i++) {
        if (current_users >= MAX) {
            printf("System crash: Too many users!\n");
            exit(0);
        }
        current_users++;
        
    }
    
    printf("Simulation complete. Total users: %d\n", current_users);
    return 0;
}
