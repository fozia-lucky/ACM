
#include <stdio.h>

int main(){
	int k, s;
	scanf("%d %d", &k, &s);
	int m = 0;

	for(int x = 0; x <= k; x++){
		for(int y = 0; y <= k; y++){
			int z = s - (x + y);
            if (0 <= z && z <= k) {
                m++;
            }
        }
    }
    printf("%d", m);
}
