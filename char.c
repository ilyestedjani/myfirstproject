#include <stdio.h>
#include <string.h> 
int main() {
    char string1[] = "Ilyes";
    //strlwr(string1);
    char string2[] ="Tedjani";
    //strupr(string2);
    //strcat(string1, string2);               // appends string2 to end of  string1
    //strncat(string1, string2,5); // appends n character from string2 to string 2 like tedjani to t or te or ted ...
    //strcpy(string1,string2);   // copy from string2 to string1
    //strncpy(string1,string2,3);        // copy n characters of  string2 to string1
    //strset(string1,'?');  //sets all characters of a string to agiven characters
    //strnset(string1,'x',1); // set n  first characters to a given characters (xlyes)
    //strrev(string2);    // Reverse a string
    //int result = strlen(string1);   // rturns string   length as int 
      // int result =strcmp(string1,string2);    // string compare all characters
      //int result =strncmp(string1,string2,1);   // string compare n characters
      //int result = strcmpi(string1,string1); // stirng compare all (ignore case)
      int result = strnicmp(string1,string1,1);    // string compare n characters  all (ignore case)
    printf("%d",result);
    

    



}
