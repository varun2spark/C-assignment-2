#include <stdio.h>
#include <string.h>
#include <ctype.h> // here i uesd the ctype.h for character manipulation like toupper and tolower

//for upper
void upper(char str[]) {
    for (int i=0;str[i]!='\0';i++) {
        str[i]=toupper(str[i]);
    }
}

//for lower
void lower(char str[]) {
    for (int i=0;str[i]!='\0';i++) {
        str[i]=tolower(str[i]);
    }
}

//for count the vowels
int count(char str[]) {
    int c=0;
    for (int i=0;str[i]!='\0';i++) {
        char v=tolower(str[i]);
        if (v=='a'||c=='e'||c =='i'||c=='o'||c=='u'){
            c++;
        }
    }
    return c;
}

// for reverses the characters of a string
void rev(char str[]) {
    int l=strlen(str);
    for (int i=0;i<l/2;i++) {
        char temp=str[i];
        str[i]=str[l - i - 1];
        str[l-i-1]=temp;
    }
}

// for sorting an array of strings alphabetically 
void sort(char arr[][100], int n) {
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(strcasecmp(arr[i],arr[j])>0){
                char temp[100];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
}

// reverse substring
void reverse_substring(char str[],int s,int e) {
    while (s<e){
        char temp=str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
}

// for reverses the order of words in a string (facing some problem while making this logic so i have to used the AI to get a hint only)
void revw(char str[]) {
    // reversing entire string
    int l=strlen(str);
    reverse_substring(str,0,l-1);
    
    // reversing each words of a string
    int w=0;
    for (int i=0;i<=l;i++) {
        if (str[i]==' '||str[i]=='\0') {
            reverse_substring(str,w,i-1);
            w=i+1;
        }
    }
}


