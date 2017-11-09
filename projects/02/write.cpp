#include <bits/stdc++.h>

int main()
{
	freopen("write.txt","w",stdout);
	printf("Or(a = out[0], b = out[1], out = zr1);\n");
	for (int i=2;i<16;i++)
		printf("Or(a = out[%d], b = zr%d, out = zr%d);\n",i,i-1,i);
	fclose(stdout);
	return 0;
}
