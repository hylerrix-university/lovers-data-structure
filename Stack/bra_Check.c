/*栈的应用1:括号匹配问题
假设表达式中允许包含三种括号:圆括号，花括号和方括号，
每对括号要对应，嵌套顺序任意，以'\0'作为算数表达式的结束符
*/
//初始设置一个空栈，顺序读入括号
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxSize 50
typedef char ElemType;
//定义栈的存储类型
typedef struct {
    ElemType data[MaxSize];
    int top;
} SqStack;

bool InitStack (SqStack *S);
bool StackEmpty (SqStack S);
bool Push (SqStack *S, ElemType x);
bool Pop (SqStack *S, ElemType *x);
bool ShowStack (SqStack S);
bool GetTop(SqStack S, ElemType *x);
bool ClearStack(SqStack *S);
bool BracketsCheck(SqStack *S, char *str);
bool isBracket(char ch);

int main () {
    SqStack S;
    char c; // 入栈的字符
    char x; // 出栈的元素
    char str[MaxSize]; // 测试括号是否匹配的字符串
    InitStack(&S);
    printf("初始化栈成功！\n");
    printf("栈内元素：%s\n", S.data);

    printf("请输入你想要测试括号是否匹配的字符串：\n");
    scanf("%s", str);
    printf("想要测试的字符串是：\n%s\n", str);
    
    if(BracketsCheck(&S, str)) {
        printf("括号匹配！\n");
    } else {
        printf("括号不匹配！\n");
    }

    // printf("请输入想要入栈的字符：\n");
    // c = getchar();
    // getchar();
    // if(!Push(&S, c)) {
    //     return 1;
    // }
    // ShowStack(S);

    // printf("请输入想要入栈的字符：\n");
    // c = getchar();
    // getchar();
    // if(!Push(&S, c)) {
    //     return 1;
    // }
    // ShowStack(S);

    // if(!Pop(&S, &x)) {
    //     return 1;
    // }
    // printf("出栈的元素是：%c\n", x);
    // ShowStack(S);

    // GetTop(S, &c);
    // printf("栈顶元素：%c\n", c);

    // ClearStack(&S);
    // ShowStack(S);

    return 0;
}

bool ShowStack (SqStack S) {
    if (S.top == -1) {
        printf("栈为空！");
        return false;
    }
    printf("栈内元素：");
    for (int i = 0; i <= S.top; i++) {
        printf("%c", S.data[i]);
    }
    printf("\n");
    return true;
}

//初始化
bool InitStack(SqStack *S) {
    S->top = -1;
    return true;
}

bool StackEmpty(SqStack S) {
    if(S.top == -1) {
        return true;
    } else {
        return false;
    }
}

bool Push(SqStack *S, ElemType x) {
    if (S->top == (MaxSize - 1)) {
        printf("栈已满！\n");
        return false;
    }
    S->top++;
    S->data[S->top] = x;
    printf("入栈成功！\n");
    return true;
}

bool Pop(SqStack *S, ElemType *x) {
    if (S->top == -1) {
        printf("栈已空！\n");
        return false;
    }
    printf("出栈成功！\n");
    *x = S->data[S->top];
    S->top--;
    return true;
}

bool GetTop(SqStack S, ElemType *x) {
    if (S.top == -1) {
        printf("栈已空！\n");
        return false;
    }
    *x = S.data[S.top];
    return true;
}

bool ClearStack (SqStack *S) {
    printf("清空栈成功！\n");
    S->top = -1;
    return true;
}

bool BracketsCheck (SqStack *S, char *str) {
    int i = 0;
    char e;
    while(str[i] != '\0') {
        if (!isBracket(str[i])) {
            i++;
            continue;
        }
        switch(str[i]) {
            //左括号入栈
            case '(': 
            case '{':
            case '[': 
                Push(&*S,str[i]);
                break;
            //遇到右括号，检测栈顶
            case ')':
                Pop(&*S,&e);
                if (e != '(') { return false; }
                break;
            case ']':
                Pop(&*S,&e);
                if (e != '[') { return false; }
                break;
            case '}':
                Pop(&*S,&e);
                if (e != '{') { return false; }
                break;
            default:
                break;    
        }
        i++;
    }
    if(!StackEmpty(*S)) {
        return false;
    }else {
        return true;
    }
}

bool isBracket(char ch) {
    switch(ch) {
        case '(':
        case ')':
        case '[':
        case ']':
        case '{':
        case '}': 
            return true;
            break;
        default: 
            return false;
            break;
    }
}