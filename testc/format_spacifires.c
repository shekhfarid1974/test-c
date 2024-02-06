/*#include<stdio.h>

int main() {

int MyIntNum = 15;
float MyFloatNum = 2.99;
char MyChar = 'abcdefghij';

printf("%d\n", MyIntNum);
printf("%f\n", MyFloatNum);
printf("%c\n", MyChar);
return 0;

}
*/
/*#include<stdio.h>

int main() {

int myNum = 15;
int myOtherNum = 23;

//assign the value of myOtherNum to myNum
myNum = myOtherNum;

printf("%d", myNum);

return 0;

}
*/
/*
#include<stdio.h>

int main(){
int myNum = 15;
int myOtherNum;
myOtherNum = myNum;
printf("%d", myOtherNum);
return 0;

}
*/

/*
//Add Variables Together
#include<stdio.h>
int main(){
int x =5;
int y =6;
int sum = x+y;
printf("%d", sum);
return 0;

}
*/

#include<stdio.h>

public class Main {
  public static void main(String[] args) {
    String message = null;
    try {
      message = message.concat("Hello, World!");
    } catch (NullPointerException e) {
      message = "Attempt to modify null object";
    } finally {
      System.err.println(message);
    }
  }
}
