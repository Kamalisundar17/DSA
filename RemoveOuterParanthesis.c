//Validate Paranthesis or Remove Outer Paranthesis
// input = "(()())(())"
//output = ()()()
/* IN PYTHON
def rem(s):
    j=0
    res=''
    for i in s:
        if i==')':
            j-=1
        if j!=0:
            res=res+i
        if i=='(':
            j+=1
    return res        
print(rem("(()())(())"))
  */
#include <stdio.h>
#include<string.h>
#include<ctype.h>
char* re(char s[]){
    int j=0;
     static char res[100];
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==41){ // ASCII 41=')'
            j--;
        }
        if(j!=0){
           res[strlen(res)] = s[i];
           res[strlen(res) + 1] = '\0';
             // strncat(res, &s[i], 1); -> The above 2 lines can be replaced with this single line, It sets res[last]=s[i] and res[last+1]='\0'
          
        }
        if(s[i]==40){  // ASCII 40='('
            j++;
        }
    }
    return res;
}
int main() {
    char s[100];
    scanf("%s",s);
    printf("%s",re(s));
    return 0;
}
