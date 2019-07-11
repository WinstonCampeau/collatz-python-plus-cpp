/*This will count the steps required
for some user-selected positive non-zero
integer to converge to one by the
Collatz conjecture */

extern "C"

long long collatz_cpp(long long a) {
	
	long long c = 0;
	
	while( a != 1) {
        
        if((a % 2)==0) {
            a = a/2;
        }
        else {
            a = (a*3)+1;
            
        }
    
        c = c + 1;      
      
        }
	
	
	return c;
}


	

/* Here I'll try to extend
the code to include a list 
of elements, passable to
Python and then plotted

#include <cstdio>
extern "C"

int * collatz_cpp(int a) {

	
	int l [a];
	
	for(int i=0; i<a; i++) {
		
		int c = 0;
		int t = i+1;
		
		while( t != 1) {
        
        	if((t % 2)==0) {
            	t = t/2;
        	}
        	else {
            	t = (t*3)+1;
            
        	}
    
        	c = c + 1;      
      
        	}
		
		//printf("%d\n", c); //Prints steps for foreach iteration
		
		l[i] = c;
		
	}
		
	return l;
}

*/





