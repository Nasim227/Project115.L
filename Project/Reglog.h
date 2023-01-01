typedef struct reg
{
    char first_name[30];
    char last_name[30];
    char user_name[30];
    char email[30];
    char password[30];

} reg ;

typedef struct log
{
    char usrnmechck[30];
    char passchck[30];
} log ;


void registr(void)
{
    struct reg rg ;

    FILE *regstr = fopen( "register.txt" , "w");

    printf("\n\n");

    printf("\t\tEnter your first name >> ");
    getchar();
    gets(rg.first_name);

    printf("\t\tEnter your last name  >> ");
    gets(rg.last_name);

    printf("\t\tEnter email id        >> ");
    gets(rg.email);

    printf("\t\tEnter your user name  >> ");
    gets(rg.user_name);

    printf("\t\tSet a password        >> ");
    gets(rg.password);

    fwrite(&rg , sizeof(rg) , 1 , regstr );

    fclose(regstr);

    printf("\n\n\n\t\tRegistered successfully !\n");
    printf("\t\tPlease login with your username and password to continue");

    sleep(3);
    system("cls");
}

void login(void)
{
    struct log lg ;
    struct reg rg ;

    FILE *regstr = fopen( "register.txt" , "r");

    printf("\n\n");

    printf("\t\tUser name >> ");
    getchar();
    gets(lg.usrnmechck);

    printf("\t\tPassword  >> ");
    gets(lg.passchck);

    if( fread(&rg , sizeof(rg) , 1 , regstr ) )
    {
        if( strcmp(rg.user_name,lg.usrnmechck)==0 && strcmp(rg.password,lg.passchck)==0 )
        {
            printf("\n\n\t\tLogin successfull....");

            sleep(1);
            system("cls");
        }

        else
        {
            printf("\n\n\t\tLogin unsuccessfull\n");
            printf("\t\tEnter correct user name and password");

            sleep(2);
            system("cls");

            login();
        }
    }
    fclose(regstr);
}
