#include <stdio.h>

void askQuestion(char *question, char *optionA, char *optionB) {
    printf("%s (A/B)\n", question);
    char answer;
    scanf(" %c", &answer);

    if (answer == 'A') {
        printf("%s\n", optionA);
    } else if (answer == 'B') {
        printf("%s\n", optionB);
    } else {
        printf("Invalid input. Please choose either A or B.\n");
        exit(1);
    }
}

int main() {
    printf("Once upon a time, in a small village nestled in the heart of a dense forest, lived a young adventurer named Alex.\nOne sunny morning, Alex decided to explore the mysterious forest that surrounded the village.\nAs Alex ventured deeper into the woods, a peculiar path caught their attention.\n");

    askQuestion("Question 1: Should Alex take the peculiar path or continue on the main trail?",
                "Intrigued by the unknown, Alex followed the peculiar path.\nAs they walked, the foliage grew thicker, and a sense of anticipation filled the air.\nSuddenly, Alex stumbled upon an ancient treasure chest half-buried in the ground.",
                "Preferring to stay on the safe side, Alex continued on the main trail.\nThe path led them to a peaceful meadow where colorful wildflowers bloomed and gentle butterflies fluttered around.");

    askQuestion("Question 2: Should Alex open the treasure chest or leave it undisturbed?",
                "With trembling hands, Alex opened the treasure chest, revealing a dazzling array of jewels and gold.\nOverwhelmed with excitement, Alex couldn't resist taking a handful of treasure.",
                "Respecting the unknown, Alex decided not to disturb the treasure chest and continued their journey.\nThe path eventually led them to a hidden waterfall cascading down from a rocky cliff.");

    askQuestion("Question 3: Should Alex share the treasure with the village or keep it all for themselves?",
                "With a heart full of generosity, Alex shared the treasure with the village. The villagers rejoiced, and their lives were forever changed for the better.\nAlex became a beloved hero in the community.",
                "Greed clouded Alex's judgment as they decided to keep the treasure for themselves. Word spread about their secret, and the village turned against Alex, leaving them isolated and filled with regret.");

    askQuestion("Question 4: Should Alex take a refreshing swim in the waterfall or move on?",
                "Alex embraced the cool, refreshing waters of the waterfall. They spent hours swimming and playing, feeling rejuvenated and at peace.\nIt became a cherished memory in their adventurous journey.",
                "With a sense of purpose, Alex left the enchanting waterfall behind and continued their exploration.\nAs they ventured deeper into the forest, new mysteries and adventures awaited them.");

    askQuestion("Question 5: Should Alex take a short nap or head back to the village?",
                "In the tranquil meadow, Alex lay down amidst the wildflowers, basking in the warm sunlight.\nTime seemed to stand still as they enjoyed the serenity of nature.",
                "Returning to the village, Alex shared tales of the beautiful meadow and the wonders of the forest.\nThe villagers were inspired by their journey and eagerly awaited their next adventure.");

    askQuestion("Question 6: Should Alex try to decipher the engravings or leave them be?",
                "Driven by curiosity, Alex deciphered the engravings on the ancient stone tablet.\nThey unveiled the hidden history of the forest, uncovering forgotten secrets and becoming the guardian of ancient knowledge.",
                "Respecting the mysteries of the forest, Alex left the engravings undisturbed.\nThey continued their exploration, forever carrying the sense of wonder and respect for the unknown.");

    return 0;
}
