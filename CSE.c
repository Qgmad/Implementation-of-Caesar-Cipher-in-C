#include<stdio.h>
void main()
{
	char name[20], ch;
	int i, key;
	printf("Enter your name: ");
	gets(name);
	printf("Enter key: ");
	scanf("%d", &key);
	for(i = 0; name[i] != '\0'; ++i){
		ch = name[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			name[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			name[i] = ch;
		}
	}
	printf("Encrypted name: %s", name);
}
