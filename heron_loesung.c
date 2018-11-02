// wurzel.c berechnet wurzel 
//segmentation faul for val = 12345

unsigned long int squareroot(unsigned long int val);  //declares 
int printf(const char *, ...); // declares 
unsigned long int help(unsigned long int a, unsigned long int b, unsigned long int c);


int main(){
    printf("Wurzel aus %lu ist %lu\n", (unsigned long)12345,
           squareroot((unsigned long)12345));
    return 0;
}

//defines the function 
unsigned long int help(unsigned long int a, unsigned long int b, unsigned long int c){
printf("a = %lu b = %lu\n", a, b);

if(a*a==c||a*a==c+1||a*a==c-1) return a;
else return help(((a+b)/2),(c/a),c);



}


unsigned long int squareroot(unsigned long int val){
return help(val, 1, val);
}
    

    
    
