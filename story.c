#include <stdio.h>


int main(){
    int age;


        printf("how old are you ?\n");
        scanf("%d", &age);
    if(age < 11){

        printf("too young aren't you ?\n");
        return 0;
}

    else {
        printf("welcome to the club, big boy.\n        [answer with capital A or capital B.]\n\nHere's a story with branching paths and questions. Each time you answer a question, the story will take a different direction.\n\n\n");
}
             // This is the main story.
        printf("Once upon a time, in a small village nestled in the heart of a dense forest, lived a young adventurer named Alex.\nOne sunny morning, Alex decided to explore the mysterious forest that surrounded the village.\nAs Alex ventured deeper into the woods, a peculiar path caught their attention.\n\n");
          // First Question
        printf("Question 1: Should Alex take the peculiar path or continue on the main trail?\n");
        char answer;
        scanf("%c", &answer);
    if (answer == 'A'){  //Story A
        printf("Intrigued by the unknown, Alex followed the peculiar path.\nAs they walked, the foliage grew thicker, and a sense of anticipation filled the air.\nSuddenly, Alex stumbled upon an ancient treasure chest half-buried in the ground.\n\n");
    }
    else if (answer == 'B'){   // Story B 
        printf("Preferring to stay on the safe side, Alex continued on the main trail.\nThe path led them to a peaceful meadow where colorful wildflowers bloomed and gentle butterflies fluttered around.\n\n");
    }
    else {
        printf("Please choose either A or B :( \n\n");
        return 1;
    }
    char answer2;
    if (answer2 == 'A'){   //  Question for
        printf("Question 2: Should Alex open the treasure chest or leave it undisturbed?\n\n");
    }
    else if (answer2 == 'B'){
        printf("Question 2: Should Alex enjoy the serenity of the meadow or keep exploring the forest?\n\n");
    }
    else {
        printf("Please choose either A or B :( \n\n");
        return 1;
    }
        scanf("%c", &answer2);
    if (answer2 == 'A'){
        printf("With trembling hands, Alex opened the treasure chest,\nrevealing a dazzling array of jewels and gold.\nOverwhelmed with excitement, Alex couldn't resist taking a handful of treasure.\n\n");
    }
    else if (answer2 == 'B'){
        printf("Respecting the unknown, Alex decided not to disturb the treasure chest and continued their journey.\nThe path eventually led them to a hidden waterfall cascading down from a rocky cliff.\n\n");
    }
     else {
        printf("Please choose either A or B :( \n\n");
        return 1;
    }

        return 0;
}
