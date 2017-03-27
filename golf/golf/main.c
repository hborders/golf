//
//  main.c
//  golf
//
//  Created by Borders, Heath on 3/26/17.
//  Copyright © 2017 Heath Borders. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int total = 0;
    for (int i = 1; i < argc; i++) {
        const char * argument = argv[i];
        int score;
        int scoresRead = sscanf(argument,
                                "%d",
                                &score);
        if (scoresRead == 1) {
            int newTotal = total + score;
            total = newTotal;
        }
    }
    
    printf("%d\n",
           total);
    
    return 0;
}
