#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bugRate = 1.2;
    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bugRate);

    long universeOfDefects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", universeOfDefects);

    double expectedBugs = bugs * bugRate;
    printf("You are expected to have %f bugs.\n", expectedBugs);

    double partOfUniverse = expectedBugs / universeOfDefects;
    printf("That is only a %e portion of the universe.\n", partOfUniverse);

    //this make no sens, just a demo of something weird.
    char nulByte='\0';
    int carePercentage = bugs * nulByte;
    printf("Which means you should care %d%%.\n", carePercentage);
    printf("The nulByte 1: %s.\n", nulByte);
    printf("The nulByte 1: %c.\n", nulByte);
    return 0;
}
