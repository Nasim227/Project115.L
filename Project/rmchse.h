void rooomdata(void)
{
    char roomnum[120];

    printf("\tChoose your room(s).... ");
    getchar();
    gets(roomnum);

    printf("\n\n");

    printf("\tYou booked ");
    puts(roomnum);

}
