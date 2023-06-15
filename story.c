#include <stdio.h>

int main() {
    printf("Once upon a time, in a small village nestled in the heart of a dense forest, lived a young adventurer named Alex.\nOne sunny morning, Alex decided to explore the mysterious forest that surrounded the village.\nAs Alex ventured deeper into the woods, a peculiar path caught their attention.\n");

    printf("Question 1: Should Alex take the peculiar path or continue on the main trail? (A/B)\n");
    char answer1;
    scanf(" %c", &answer1);

    if (answer1 == 'A') {
        printf("Intrigued by the unknown, Alex followed the peculiar path.\nAs they walked, the foliage grew thicker, and a sense of anticipation filled the air.\nSuddenly, Alex stumbled upon an ancient treasure chest half-buried in the ground.\n");

        printf("Question 2: Should Alex open the treasure chest or leave it undisturbed? (A/B)\n");
        char answer2;
        scanf(" %c", &answer2);

        if (answer2 == 'A') {
            printf("With trembling hands, Alex opened the treasure chest, revealing a dazzling array of jewels and gold.\nOverwhelmed with excitement, Alex couldn't resist taking a handful of treasure.\n");

            printf("Question 3: Should Alex share the treasure with the village or keep it all for themselves? (A/B)\n");
            char answer3;
            scanf(" %c", &answer3);

            if (answer3 == 'A') {
                printf("With a heart full of generosity, Alex shared the treasure with the village. The villagers rejoiced, and their lives were forever changed for the better.\nAlex became a beloved hero in the community.\n");
            } else if (answer3 == 'B') {
                printf("Greed clouded Alex's judgment as they decided to keep the treasure for themselves. Word spread about their secret, and the village turned against Alex, leaving them isolated and filled with regret.\n");
            } else {
                printf("Invalid input. Please choose either A or B.\n");
                return 1;
            }
        } else if (answer2 == 'B') {
            printf("Respecting the unknown, Alex decided not to disturb the treasure chest and continued their journey.\nThe path eventually led them to a hidden waterfall cascading down from a rocky cliff.\n");

            printf("Question 3: Should Alex take a refreshing swim in the waterfall or move on? (A/B)\n");
            char answer3;
            scanf(" %c", &answer3);

            if (answer3 == 'A') {
                printf("Alex embraced the cool, refreshing waters of the waterfall. They spent hours swimming and playing, feeling rejuvenated and at peace.\nIt became a cherished memory in their adventurous journey.\n");
            } else if (answer3 == 'B') {
                printf("With a sense of purpose, Alex left the enchanting waterfall behind and continued their exploration.\nAs they ventured deeper into the forest, new mysteries and adventures awaited them.\n");
            } else {
                printf("Invalid input. Please choose either A or B.\n");
                return 1;
            }
        } else {
            printf("Invalid input. Please choose either A or B.\n");
            return 1;
        }
    } else if (answer1 == 'B') {
        printf("Preferring to stay on the safe side, Alex continued on the main trail.\nThe path led them to a peaceful meadow where colorful wildflowers bloomed and gentle butterflies fluttered around.\n");

        printf("Question 2: Should Alex enjoy the serenity of the meadow or keep exploring the forest? (A/B)\n");
        char answer2;
        scanf(" %c", &answer2);

        if (answer2 == 'A') {
            printf("In the tranquil meadow, Alex lay down amidst the wildflowers, basking in the warm sunlight.\nTime seemed to stand still as they enjoyed the serenity of nature.\n");

            printf("Question 3: Should Alex take a short nap or head back to the village? (A/B)\n");
            char answer3;
            scanf(" %c", &answer3);

            if (answer3 == 'A') {
                printf("Alex took a short nap amidst the peaceful meadow. When they woke up, the sun was beginning to set, casting a golden hue over the landscape.\nIt was time to head back to the village, feeling refreshed and content.\n");
            } else if (answer3 == 'B') {
                printf("Returning to the village, Alex shared tales of the beautiful meadow and the wonders of the forest.\nThe villagers were inspired by their journey and eagerly awaited their next adventure.\n");
            } else {
                printf("Invalid input. Please choose either A or B.\n");
                return 1;
            }
        } else if (answer2 == 'B') {
            printf("Driven by curiosity, Alex ventured further into the forest.\nAmong the trees, they discovered an ancient stone tablet with mysterious engravings.\n");

            printf("Question 3: Should Alex try to decipher the engravings or leave them be? (A/B)\n");
            char answer3;
            scanf(" %c", &answer3);

            if (answer3 == 'A') {
                printf("Driven by curiosity, Alex deciphered the engravings on the ancient stone tablet.\nThey unveiled the hidden history of the forest, uncovering forgotten secrets and becoming the guardian of ancient knowledge.\n");
            } else if (answer3 == 'B') {
                printf("Respecting the mysteries of the forest, Alex left the engravings undisturbed.\nThey continued their exploration, forever carrying the sense of wonder and respect for the unknown.\n");
            } else {
                printf("Invalid input. Please choose either A or B.\n");
                return 1;
            }
        } else {
            printf("Invalid input. Please choose either A or B.\n");
            return 1;
        }
    } else {
        printf("Invalid input. Please choose either A or B.\n");
        return 1;
    }

    return 0;
}
