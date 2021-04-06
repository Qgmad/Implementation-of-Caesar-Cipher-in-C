#include<stdio.h>
int main()
{
	char name[20], ch;
	int i, key;
	printf("Enter encrypted name: ");
	gets(name);
	printf("Enter key: ");
	scanf("%d", &key);
	for(i = 0; name[i] != '\0'; ++i){
		ch = name[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			name[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			name[i] = ch;
		}
	}
	printf("Decrypted name is: %s", name);
}
