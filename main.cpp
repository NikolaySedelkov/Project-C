
void initVoid(void* p, string type){
    if(type == "int")
        cin >> (int*)p;
}

void initP(int* p){
    cin >> *p;
}

int main(){
    cout << "Hello World!";
}