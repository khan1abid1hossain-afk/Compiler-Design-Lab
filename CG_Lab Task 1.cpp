#include <iostream>

using namespace std;

void checkInt()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    int asc=ch;
    cout<<"ASCII value of the input:"<<asc<<endl;

    if (asc>=48 && asc<=57)
    {
        cout<<"Numeric value"<<endl;
    }
    else{
        cout<<"Not numeric"<<endl;
    }
}

void checkOperator()
{
    string input;
    int count = 1;

    cout << "Enter an expression: ";
    cin >> input;

    for (char ch : input)
    {
        if (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '%' || ch == '=')
        {
            cout << "operator " << count << ": " << ch << endl;
            count++;
        }
    }
}

void checkComment()
{
    string input;

    cout << "Enter a comment: ";
    cin >> input;

    if (input[0] == '/' && input[1] == '/')
    {
        cout << "It is a Single Line Comment." << endl;
    }
    else if (input[0] == '/' && input[1] == '*')
    {
        cout << "It is a Multiple Line Comment." << endl;
    }
    else
    {
        cout << "It is Not a Comment." << endl;
    }
}

void checkIdentifier()
{
    string input;
    bool valid = true;

    cout << "Enter an identifier: ";
    cin >> input;

    if (!isalpha(input[0]) && input[0] != '_')
    {
        valid = false;
    }

    for (int i = 1; i < input.length(); i++)
    {
        if (!isalnum(input[i]) && input[i] != '_')
        {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "It is a valid Identifier." << endl;
    else
        cout << "It is not a valid Identifier." << endl;
}

#include <iostream>
using namespace std;

void checkIdentifier(string str)
{
    if (!((str[0] >= 'A' && str[0] <= 'Z') ||
          (str[0] >= 'a' && str[0] <= 'z') ||
          str[0] == '_'))
    {
        cout << "Invalid Identifier";
        return;
    }

    for (int i = 1; i < str.length(); i++)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= '0' && str[i] <= '9') ||
              str[i] == '_'))
        {
            cout << "Invalid Identifier";
            return;
        }
    }

    cout << "Valid Identifier";
}


int main()
{
    checkInt();
    checkOperator();
    checkComment();
    checkIdentifier();

    return 0;
}
