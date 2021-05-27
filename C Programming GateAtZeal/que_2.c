void fun(int *p){
    int z = 100;
    p = &z;
}

int main(){
    int r = 201;
    int *p = &r;
    fun(&p);
    printf("%d", ++*p++);
    return 0;
}