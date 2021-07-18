int myGlobal = 0; //global variable

int main()
{
    int myLocalMain = 0; //local variable

    //can access my global and myLocal
    return 0;
}

void myFunction()
{
    int x; //local variable
    //can access myGlobal and x, cannoty access myLocalMain
}

//Important to understand that the concept of local and global variables extend to loops and if statements as well.


