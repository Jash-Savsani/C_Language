#include<stdio.h>
int main(){ 
	int x = 97;/*kio bki integer ni AASCII value and int value both are considering in "case".So that reason error come.*/ 
	switch (x){ /*ek j switch case ma char and int both ne saathe j match karavi sakay che.*/
	case 'a': printf("yes "); 
			break; 
	case 97: printf("no\n"); 
			break; 
	} 
}
