#include <stdio.h>
#include <string.h> // Required for strcasecmp

int loveyou(int a, int b)
{
    if (a == 1 && b == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char name[20];
    int result = loveyou(1, 1);

    printf("Enter the name: ");
    scanf("%19s", name);

    // strcasecmp compares strings ignoring UPPERCASE/lowercase differences
    if (result == 1 && strcasecmp(name, "stuti") == 0)
    {
        printf("Across all 8 or 9 billion people God put u into my world I always say ty to God and always pray for u love.\n\n");

        printf("love u my\n");
        printf("honey\n");
        printf("Idiot\n");
        printf("cutie\n");
        printf("Gorgeous\n");
        printf("bunny\n");
        printf("sweetheart\n");
        printf("sweetie\n");
        printf("devi ji\n");
        printf("jannu\n");
        printf("janne jahan\n");
        printf("copy cat 2.0\n");
        printf("oxygen 2.0\n");
        printf("second home\n");
        printf("love\n");
        printf("qtpie\n");
        printf("my love\n");
        printf("my queen\n");
        printf("my princess\n");
        printf("my baby\n");
        printf("my angel\n");
        printf("babe\n");
        printf("my everything\n\n");
        printf("A short poem for you:\n\n");
        printf("My Little Gulak \n\n"
               "You're my little gulak, \n"
               "The one I filled with every bit I could save. \n"
               "Never once did I steal from you,\n"
               "Never wished to take, only to give.\n\n"
               "Just like those childhood days,\n"
               "When every coin felt precious to keep,\n"
               "I want to pour all that I have into you,\n"
               "And never take a single thing away.\n\n"
               "Because you're not where I keep my savings,\n"
               "You're where I keep my heart.\n"
               "And I want to give you all of it,\n");
    }
    else
    {
        printf("He doesn't love her.\n");
    }

    return 0;
}
