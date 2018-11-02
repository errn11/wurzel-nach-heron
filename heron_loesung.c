// wurzel.c berechnet wurzel 
unsigned long int squareroot(unsigned long int val);  //declares 
int printf(const char *, ...); // declares 
unsigned long int help(unsigned long int a, unsigned long int b, unsigned long int c);


int main(){
    printf("Wurzel aus %lu ist %lu\n", (unsigned long)144,
           squareroot((unsigned long)144));
    return 0;
}

//defines the function 
unsigned long int help(unsigned long int a, unsigned long int b, unsigned long int c){
printf("a = %lu b = %lu\n", a, b);
if(a*a==c) return a;
else return help(((a+b)/2),(c/a),c);



}


unsigned long int squareroot(unsigned long int val){
return help(val, 1, val);
}
    

    
    
