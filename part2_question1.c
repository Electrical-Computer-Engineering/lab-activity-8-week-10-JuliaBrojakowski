#include <stdio.h>
#include <string.h>
#define LIM 32

//my_strcmp Equal strings = make 0 other 1
    char my_strcmp (char str1[], char str2[]) { 
        int i;
        
    for(i = 0; i <= strlen(str1[], str2[]); i++){
        if(str1[i] != str2[2])
        return 1;
    }
    return 0;
    }


//my_strncmp 
    char my_strncmp (char str1[], char str2[]){
    int i;
    int n = 0;
    for(i = 0; i <= n; i++){
        if(str1[i] != str2[2])
        return 1;
    }
    return 0;
    }
        
    
















// //my_strncmp-- not sure yet
//     char my_strncmp (char str1[], char str2[],int n) { 
//         // int i;
        
//         // if(str1[i] == 'n' && str2[i] == 'n')
//         //     return 0;
//         // else if(str1[i] == '\0') 
//         //     return 1;

//     int i;
//     for(i = 0; str1[i] != '\0' && str2[i] != '\0'&&i<n; i++) //we need to end when it gets to \0 and if we use \0 then it would stop for 1 str but not the other
//         if(str1[i] > str2[i] && str1[i] < str2[i])
//             return 1;
    
//     if(str1[i] == '\0' && str2[i] == '\0')
//         return 0;
//     else if(str1[i] == '\0') //str1 finish but str2 still has #'s
//         return 1;
//         else 
//         return 1;
//     }

// //thse are my 3 exit conditions
// //if the strings are = length then  return 0;
// //if str1 end early return 1
// //if str2 end early return 1





    

// //Equal strings copies 2nd str to first
//     char my_strcpy (char str1[], char str2[]) { 
//         int i = 0;
//         while(str2[i] != '\0'){
//             str1[i] = str2[i];
//             i++;
//         }
//         str1[i] = '\0';
//         return str1;    
//     }


