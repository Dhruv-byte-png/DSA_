void push(char ch,int *top, char stack[])
{
    (*top)++;
    stack[*top]=ch;
}
void pop(int *top)
{
    if(*top==-1) return;
    (*top)--;
}
char peek(int top,char stack[])
{
    return stack[top];
}

bool isValid(char* str) {

    int n = strlen(str);

    char stack[n];
    int top=-1;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='('|| str[i]=='{'|| str[i]=='[')
        {
            push(str[i],&top,stack);
        }
        else
        {
            if(top==-1)
            {
                printf("unbalanced\n");
                return 0;
            }
            else
            {
                char top_ch=peek(top,stack);
                pop(&top);
                if(top_ch=='(' && str[i]!=')')
                {
                printf("unbalanced\n");
                return 0;  
                }
                if(top_ch=='{' && str[i]!='}')
                {
                printf("unbalanced\n");
                return 0;  
                }
                if(top_ch=='[' && str[i]!=']')
                {
                printf("unbalanced\n");
                return 0;  
                }
            }
        }
    }
    return top == -1;
}
