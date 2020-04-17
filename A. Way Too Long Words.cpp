#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int tc; scanf("%d",&tc);
	char s[105];
	//printf("%d",tc);
	while(tc--){
	scanf("%s",s);
	scanf("\n");
	//printf("%s\n",s);
	//printf("%d",strlen(s));
	if(strlen(s)<=10) printf("%s\n",s);
	else {
		int n= strlen(s)-2;
		printf("%c%d%c\n",s[0],n,s[strlen(s)-1]);
	}
	}
	return 0;
}
