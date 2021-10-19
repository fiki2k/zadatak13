// Program treba provjerit jeli slovo koje unese korisnik samoglasnuk il suglasnik.

#include <stdio.h>
#include <stdbool.h>
int main()
{
    char slovo;
    bool jesamoglasnik = false;

    printf("Unesi slovo: ");
    scanf("%c",&slovo);
	
	// Ispitujemo jeli slovo samoglasnik.
    if(slovo=='a'||slovo=='A'||slovo=='e'||slovo=='E'||slovo=='i'||slovo=='I'
    		|| slovo=='o'|| slovo=='O'|| slovo=='u'|| slovo=='U')
    {
    	jesamoglasnik = true;

    }
    if (jesamoglasnik == true)
        printf("%c je samoglasnik", slovo);
    else
        printf("%c je suglasnik", slovo);
    return 0;
}
