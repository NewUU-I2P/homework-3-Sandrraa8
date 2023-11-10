float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
switch (operation) {
       case '+':
           cout<<x+y<<endl;
           break;
       case '-':
           cout<<x-y<<endl;
           break;
       case '*':
           cout<<x*y<<endl;
           break;
       case '/':
           cout<<x/y<<endl;
           break;
       default:
           cout<<"Error."<<endl;
           }
   return result;
}
