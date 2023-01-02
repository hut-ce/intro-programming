#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{   
    // get two args and calculate the sum, mult with operator
    //
    // ./main 1 2 +
    // ./main 1 2 -
    // ./main 1 2 *
    // ./main 1 2 /

    if (argc < 4) {
        
        cout << "Usage: ./main 1 2 +" << endl;
        return 0;
    }
    else {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        char op = argv[3][0];
        switch (op)
            {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case 'x':
                cout << a * b << endl;
                break;
            default: break;
    }
    }
    

    // cout << "argc: " << argc << endl;
    // cout << "argv[0]: " << argv[0] << endl;
    // if (argc > 1) {

    //     cout << "Hello, " << argv[1] << endl;
    // } else {
    //     cout << "Hello, World!" << endl;
    // }
    
    return 0;
}
