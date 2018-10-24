// wurzel.c berechnet wurzel 

unsigned long int squareroot(unsigned long int val);  //declares 
int printf(const char *, ...); // declares 

int main(){
    printf("Wurzel_aus_%lu_ist_%lu", (unsigned long)81,
           squareroot((unsigned long)81));
    return 0;
}

//defines the function 
unsigned long int squareroot(unsigned long int val){
    // meine definition von squareroot
    unsigned long int c = 0x8000;
    unsigned long int g = 0x8000;
    
    for(;;){
        if(g*g > val)
            g ^=c;
        c >>=1;
        if(c ==0)
            return g;
        g |= c;
    }
}


