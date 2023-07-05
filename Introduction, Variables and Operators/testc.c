// #include<stdio.h>
// int main(){
//     int b[5]={10,20,30,40,50};
//     // printf("%d",*(b+3));
// printf("%d",*(b+3)+10);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     char b='B';
//     void *ptr;
//     ptr=&a;
//     ptr=&b;
//     printf("%d",a);
//     printf("%d",*(int *)ptr);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=100,k;
//     int * const ptr=&i;
//     *ptr=200;

//     // ptr=&k;
//     getch();

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a=10,b=20;
//     printf("%d %dbefore swap\n",a,b);
//     swap(&a,&b);
//     printf("\n %d %d after swap",a,b);

//     return 0;
// }
// void swap(int *x,int *y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
//     printf("value in called function %d %d",*x,*y);
// }

// #include<stdio.h>
// const max=3;
// int main(){
//     int var[]={10,100,200};
//     int i,*ptr;
//     ptr =var;
//     for (int  i = 0; i < max; i++)
//     {
//         printf("%d %d",i,ptr);
//         printf("%d %d",i,*ptr);
//         ptr++;
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char ch;
//     FILE *ptr;

//     ptr = fopen("text1.text", "a");
//     if (ptr == NULL)
//     {
//         printf("file cannot be opened or file does not exist.");
//     }
//     else
//         {
//             fputc('e', ptr);
//             printf("record saved");
//         }
// fclose(ptr);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     FILE *fp;
//     char name[20];
//     printf("enter file name");
//     scanf("%s",name);
//     printf("successful");
//     return 0;

// }

// #include<stdio.h>
// int main(){

//     FILE *ptr;
//     char ch;
//     int count=0;
//     ptr=fopen("k22bp.txt","w");
//     if (ptr==NULL){
//         printf("file does not exist.");

//     }
//     else{
//         printf("enter data");
//         while(ch!='.'){
//             ch=getchar();
//             fputc(ch,ptr);

//         }
//     }
//     fclose(ptr);
//     ptr=fopen("k22bp.txt","r");
//     printf("content of file are");
//     while((getc(ptr))!=EOF){
//         printf("%c",ch);
//         count++;
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// int rn;
// char name[20];
// FILE *fp;
// fp=fopen("stu.txt","w");
// printf("enter rollno and name\n");
// scanf("%d%s",&rn,name);
// fprintf(fp,"\n%d %s",rn,name);
// fclose(fp);
// fp=fopen("stu.txt","r");
// while(!feof(fp))
// {
// fscanf(fp,"%d %s",&rn,name);
// printf("%d %s\n",rn,name);
// }
// fclose(fp);
// }

// #include<stdio.h>
// int main()
// {
//     int number, *ptr, i;
//     printf("How many ints would you like store?");
//     scanf("%d",&number);
//     ptr = (int*) malloc(number*sizeof(int));
//     if (ptr!=NULL)
//     {
//          for (i=0 ; i<number ; i++){
//             *(ptr + i) = i;
//          }
//          for (i=0;i<number; i++){
//             printf("%d\n",(ptr + i ));
//          }
//     printf("new values:\n");
//     for (int j = 0; j < ; j++)
//     {
//         /* code */
//     }

//     return 0;
// }

// #include<stdio.h>
// struct book{
//     char name[25];
//     char author[20];
//     int id;
// };
// int main(){
//     struct book b1={"let us C","yk",101};
//     struct book *ptr;
//     ptr=&b1;
//     printf("%s %s %d\n",b1.name,b1.author,b1.id);
//     printf("%s %s %d\n",ptr->name,ptr->author,ptr->id);
//     return 0;
// }

// #includechar ename[20<stdio.h>
// struct point
// {
//     int x;
//     int y;

// };

// int main(){
//     // struct point p={.y=120};
//     printf("%d %d",p.x,p.y);

//     return 0;
// }

// #include<stdio.h>
// struct employee{
//     char ename;
//     int ssn;
//     float salary;
//     struct date{
//         int date;
//         int month;
//         int year;
//     }doj;

// };
// int main(){
//     struct employee emp;
//     printf("enter the name,ssn,salary:");
//     scanf("%s %d %f",&emp.ename,&emp.ssn,&emp.salary);
//     printf("\nenter the date month and yearof joining:");
//     scanf("%d%d%d",&emp.doj.date,&emp.doj.month,&emp.doj.year);
//     printf()

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char name[20],ch;
//     int i=0;
//     printf("eneter name(press enter to stop):");
//     while(ch!="\n"){
//         ch=getname();

//     }

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[10],s2[10];
//     printf("enter string");
//     gets(s2);
//     strcpy(s1,s2);
//     printf("%s",s1);
//     printf("%s",s2);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char src[40];
//     char dest[12];
//     memset(dest,'\0',sizeof(dest));
//     strcpy(src,"this is tutorials point.com");
//     strcpy(dest,src);

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a=0;
//     a=printf("pankaj%dsharma",printf("gate wallah"));
//     printf("%d",a);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[20],s2[20];
//     printf("enter text ");
//     gets(s1);
//     printf("enter text 2=");
//     gets(s2);

//     int length,lengthstr1,lenfthstr2;
//     lengthstr1=strlen(s1);
//     lenfthstr2=strlen(s2);
//     length=lengthstr1+lenfthstr2+1;
//     printf("\n %d",length)
//     if(length<=sizeof(s1)){
//         strcat(s1,s2);
//         printf("%s",s1);
//     }
//     else{
//         printf("size of s1 :%d is less than the combined string length :%d",lengthstr1,lenfthstr2);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char a[20],b[20];
//     int i,j,len;
//     printf("enter 1st string=");
//     gets(a);
//     printf("enter 2nd string=");
//     gets(b);
//     len=strlen(a);
//     for (int i =len,j=0; b[j]!='\0';i++,j++){
//         a[i]=b[j];
//     }
//     a[i]='\0';
//     printf("After concatenation=");
//     pits(a);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char a[100],b[100];
//     printf("enter the first string=");
//     gets(a);
//     printf("\nenter the second string=");
//     gets(b);
//     if(strcmp(a,b)==0){
//         printf("entered string are equal.\n");
//     }
//     else if(strcmp(a,b)>0){
//         printf("entered string are not equal.\n");
//         printf("\n a is greater");
//     }
//     else{
//         printf("entered string are not equal.\n");
//         prinf("\n b is greater");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char string1[20],string2[20];
//     int i,temp=0;
//     printf("enter the string1 vlaue:\n");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char a[15];
//     printf("enter string in upper case=");
//     gets(a);
//     strlwr(a);
//     printf("string in lower is=");
//     puts(a);
//     strups(a);
//     prinf("\nstring in upper is=");
//     puts(a);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char string[100];
//     printf("enter a string to convert it into upper case");
//     gets(string)
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     double d;
//     char s1[]="99.123";
//     d=atod(s1);
//     printf("%d",d);

//     return 0;
// }ssss

// #include<stdio.h>
// int main(){

//     char str1[]="hello";
//     printf("%d",sizeof(str1));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     printf("%c","geeksQuiz"[5]);
//     return 0;
// }

// #include <stdio.h>

// int main(int argc, char* argv[])
// {

//     printf("The value of argc is %d\n", argc);

//     for (int i = 0; i < argc; i++) {
//         printf("%s \n", argv[i]);
//     }

//     return 0;
// }

// C program to illustrate  \a escape sequence
// #include <stdio.h>

// int main(void)
// {
//     // output may depend upon the compiler
//     printf("My mobile number "
//            "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
//     return (0);
// }

// C program to illustrate \' escape
// sequence/ and \" escape sequence to
// print single quote and double quote.
// #include <stdio.h>
// int main(void)
// {
//     printf("\' Hello Geeks'\n");
//     printf("\" Hello Geeks ");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//    int n=5;
//    for(n = 7; n!=0; n--)
//      printf("n = %d", n--);
// //    getchar();
//    return 0;
// }

// #include <stdio.h>
// #define INCREMENT(x) ++x
// int main()
// {
// 	char* ptr = "GeeksQuiz";
// 	int x = 10;
// 	printf("%s ", INCREMENT(ptr));
// 	printf("%d", INCREMENT(x));
// 	return 0;
// }

// #include <stdio.h>

// int main(int argc, char* argv[])
// {

// 	printf("The value of argc is %d\n", argc);

// 	for (int i = 0; i < argc; i++) {
// 		printf("%s \n", argv[i]);
// 	}

// 	return 0;
// }

// #include <stdio.h>
// #include<stdbool.h>
// int main()
// {
//    bool x = true;
//    printf("%d",x);

//    return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//    bool a=true;
//    int i=0;
//    while(a){
//       printf("%d",i);
//       i++;
//       if (i>5){
//          break;
//       }
//    }
//    return 0;
// }

// #include<stdio.h>
// int main(){
//    int x=10;
//    printf("%p\n",&x);
//    int *ptr=&x;
//    printf("%p",ptr);
//    int true=10;
//    return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char st[] = "CODING";

//     printf("While printing ");
//     printf(", the value returned by printf() is : %d",printf("%s", st));

//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//    printf("%c", getch());
//    return 0;
// }

// #include<stdio.h>
// #define hi(x,y) x##y

// int main(void){
//    int xy=10;
//    printf("%d",hi(x,y));
//    return 0;
// }

// #include<stdio.h>
// void foo();
// int main()
// {
//    foo();
//    getchar();
//    return 0;
// }
// void foo()
// {
//    printf("foo called");
// }

// #include<stdio.h>
// int main(){
//    int arry[5]={1,52,64,2,8};
//    int *ptr=arry;
//    printf("%d",ptr);
//    return 0;
// }

// C program to illustrate sizes of
// pointer of array

// #include <stdio.h>

// int main()
// {
//    int arr[] = {3, 5, 6, 7, 9};
//    int *p = arr;
//    int(*ptr)[5] = &arr;

//    printf("p = %p, ptr = %p\n", p, ptr);
//    printf("*p = %d, *ptr = %p\n", *p, *ptr);

//    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",
//           sizeof(p), sizeof(*p));
//    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",
//           sizeof(ptr), sizeof(*ptr));
//    return 0;
// }

// #include<stdio.h>
// int main()
// {
// int n;
// for(int n = 7; n!=0; n--)
// 	printf("n = %d", n--);
// getchar();
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//    printf("%x", -1<<1);
//    getchar();
//    return 0;
// }

// # include <stdio.h>
// # define scanf  "%s Geeks For Geeks "
// int main()
// {
//    printf(scanf, scanf);
//    getchar();
//    return 0;
// }

//  #include <stdio.h>
//  int x;
//  void main()
//  {
//      if (x)
//          printf("hi");
//      else
//          printf("how are u");
//  }

// #include <stdio.h>
// void main(){
//    int x = 5;
//    if (x<9)
//       printf("hello");
//    else
//       printf("ho");
//       printf("ho");
//     }

//  #include <stdio.h>
//  int main()
//  {
//      int i = 10;
//      void *p = &i;
//      printf("%f\n", *(float*)p);
//      return 0;
//  }

//  #include <stdio.h>
//  void main()
//  {
//      int x = 0;
//      int *ptr = &x;
//      printf("%d\n", *ptr);
//      *ptr++;
//      printf("%d\n ", &ptr);
//  }

//  #include <stdio.h>
//  void foo(int **const p)
//  {
//      int j = 11;
//      *p = &j;
//      printf("%d ", **p);
//  }
//  int main()
//  {
//      int i = 10;
//      int *p = &i;
//      foo(&p);
//      printf("%d ", *p);
//      printf("%d ", *p);
//  }

// #include<stdio.h>
// int main(){
//    char *ptr="hello world";
//    printf("%s",&ptr);
//    return 0;
// }

//    //strcpy() function
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	//strcpy function
// 	char ori[20],dup[20];
// 	char *z;
// 	printf("\n Enter your name:");
// 	gets(ori);
// 	z=strcpy(dup,ori);
// 	printf("Original String is:%s",ori);
// 	printf("\nDuplicate String is:%s",dup);
// 	printf("\n Value of z is:%s",z);
// 	return 0;
// }

// strncpy()
//  #include<stdio.h>
//  #include<string.h>
//  int main()
//  {
//  	char str1[15],str2[15];
//  	int n;
//  	printf("\nEnter Source String:");
//  	gets(str1);
//  	printf("\nEnter Destination String:");
//  	gets(str2);
//  	printf("Enter number of characters to copy in destination string:");
//  	scanf("%d",&n);
//  	strncpy(str2,str1,n);
//  	printf("Source string is:%s",str1);
//  	printf("\nDestination String is:%s",str2);
//  	return 0;
//  }

// #include <stdio.h>
// void main()
// {
//    int ch;
//    printf("enter a value between 1 to 2:");
//    scanf("%d", &ch);
//    switch (ch)
//    {
//    case 1:
//       printf("1");
//       break;
//    case 2:
//       printf("2");
//       break;
//    }
// }

// #include<stdio.h>
// int main(){
//    // int a=10,b=5,c=5;
//    // int d;
//    // d=b+c==a;
//    // int x=(int)3.9+1.2;
//    // int i=(1,2,3);
//    // printf("%d",i);
//    // int i=0;
//    // for (i++;i==1;i=2)
//    // printf("hi");
//    // /

//    static int i=5;
//    if(--i){
//       main();
//       printf("%d",i);
//    }

//    return 0;
// }

// #include<stdio.h>
// int main(){

// int x=30, *y, *z;

// y =&x;
// z=y;
// *y++=*z++;
// x++;
// printf("%d",y);
// printf("x=%d, y=%d, z=%d\n",x,y,z);
// return 0;
// }

// #include <stdio.h>

// int main()
// {

//    int i = 3, *j, k;

//    j = &i;

//    printf("%d\n", i * *j * i + *j);
//    return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char p[20];
//     char *s = "string";
//     int length = strlen(s);
//     int i;

//     for (i = 0; i < length; i++) {
//         p[i] = s[length - i];
//     }
   

//     printf("%s", p);

//     return 0;
// }



#include<stdio.h>
#include<string.h>
int main(){
   char str1[20] ="Hello" ,str2[20] = "World";
   printf("%s\n",strcpy(str2,strcat(str1, str2)));
   return 0;
}
