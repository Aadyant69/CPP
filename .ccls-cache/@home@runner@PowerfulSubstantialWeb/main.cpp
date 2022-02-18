// #include<iostream>
// using namespace std;
// int main()
// {

//     int i,j,k,n;

//     cout<<"Enter How Many Row Print With Pattern\n";
//     cin>>n;

//     for(i=1; i<=n; i++)
//     {
//         for(j=n-1; j>=i; j--)
//         {
//             cout<<" ";
//         }
//         for(k=1; k<=(2*i-1); k++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
//////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//   int a,n, sum=0;
//   cout<<"ENTER NUMBER OF SUBJECTS";
//   cin>>n;
//   for(int i=1; i<=n; i++) {
//     cout<<"ENTER MARKS OF sunject-"<<i<<endl;
//     cin>>a;
//     sum+=a;
//   }
//   cout<<"AVERAGE IS "<<(sum/n)<<endl;
// }
///////////////////////////
// #include <iostream>  
// using namespace std;  
// int main() {  
//   int n1=0,n2=1,n3,i,number;    
//  cout<<"Enter the number of elements: ";    
//  cin>>number;    
//  cout<<n1<<" "<<n2<<" ";     
//  for(i=2;i<number;++i)     
//  {    
//   n3=n1+n2;    
//   cout<<n3<<" ";    
//   n1=n2;    
//   n2=n3;    
//  }    
//  for(i=2;i<number;++i)     
//  {    
//   n3=n1+n2;    
//   for(int i=n2;i<n3;i++)
//   {
    
//   cout<<i<<" ";   
//   }
//   n1=n2;    
//   n2=n3;    
//  }    
//    return 0;  
// }  
//////////////////////////////
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n,m,t;
//   cin>>t;
//   while(t--)
//   {
//   cin>>n>>m;
//   cout<<n+m<< endl;
//   }
//   return 0;
// }
/////////////////////////
// #include <iostream>
// using namespace std;
// int main()
// {
//   int t,n,sum=0,temp,f=0;
//   cin>>t;
//   while(t--)
//   {
//     cin>>n;
//     sum=(n%10);
//     temp=n;
//     while(temp>0)
//     {
//       temp=temp/10;
//       f++;
//     }


//   }
// }
///////////////////////////
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n, f, l, sum, d, nn, a, b;
//     cout << " Input any number: ";
//     cin >> n;
//     d = (int)log10(n);
//     f = n / pow(10, d);
//     l = n % 10;
//     a = f * (pow(10, d));
//     b = n % a;
//     n = b / 10;
//     nn = l * (pow(10, d)) + (n * 10 + f);
//     cout << " The number after swaping the first and last digits are: " << nn << endl;
// }  
////////////////////////////
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n,a=0,b=1,c,i,d;
//   cout<<"Enter the number of terms : ";
//   cin>>n;
//   cout<<"Missing Terms of Fibonacci series are :"<<endl;
// for(i=0;i<n;i++)
// {
//   if(i<=1)
// c=i;
// else
// {
//   c=a+b;
//   a=b;
//   b=c;
// }
// cout<<"Fibonacci term "<<c<<endl;
// if(c-a>1)
// {
// for(d=a+1;d<c;d++)
// {
//   if(c!=d)
//  {
//    cout<<"Missing Terms "<<d<<endl;
//  }
//  }
// }
// }
// }
//////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n,a=0,b=1,c,i,d;
//   cout<<"Enter the number of terms : ";
//   cin>>n;
//   cout<<"Fibonacci Series\n";
// for(i=0;i<n;i++)
// {
//   if(i<=1)
// c=i;
// else
// {
//   c=a+b;
//   a=b;
//   b=c;
// }
// cout<<c<<" ";
// }
// cout<<"\nMissing Terms of Fibonacci series are :"<<endl;
// a=0,b=1;
// for(i=0;i<n;i++)
// {
//   if(i<=1)
// c=i;
// else
// {
//   c=a+b;
//   a=b;
//   b=c;
// }

// if(c-a>1)
// {
// for(d=a+1;d<c;d++)
// {
//   if(c!=d)
//  {
//    cout<<d<<" ";
//  }
//  }
// }

// }
// }
///////////////////////////////////////
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
// 	int num,last,first,digit,swapnum;
// 	cout<<"Enter a nuber-"<<endl;
// 	cin>>num;
// 	last=num%10;
// 	digit=log10(num);
// 	first=num/pow(10,digit);
// 	swapnum=last;
// 	swapnum*=pow(10,digit);
// 	swapnum+=num%(int)(pow(10,digit));
// 	swapnum-=last;
// 	swapnum+=first;
// 	cout<<"Number after swaping-"<<swapnum;
// 	return 0;
// }
////////////////////////////////////////
 /*WAP to input a matrix of dimension m*n. If base address is 1000. Find the address of (m-1, n-1) element of the matrix*/
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n,m;
//   cin>>n>>m;
//   int address=1000+(4*(m+n-2));
//   cout<<address;
  
// }
/////////////////////////////////////////
/*Create a class called employee with the following details as variables within it. 
1. Name of the employee (string)
2. Age (int)
3. Designation (string) 
4. Salary (double)

Write a program to create array of objects for the same to access these. Also, make use of member functions to accept values and print the name, age, designation and salary.*/
#include <iostream>
#include <string>
using namespace std;
class employee{
private:
	string name;
	int age;
	string designation;
	double salary;
public:
	
	employee(){}

	employee(string name,int age,string designation,double salary){
		this->name=name;
		this->age=age;
		this->designation=designation;
		this->salary=salary;
	}
	
	
	double getSalary(){
		return salary;
	}
	
	void display(){
		cout<<"The name: "<<this->name<<"\n";
		cout<<"The age: "<<this->age<<"\n";
		cout<<"The designation: "<<this->designation<<"\n";
		cout<<"The salary: "<<this->salary<<"\n\n";
	}
};

int main (){
	string name;
	int age;
	string designation;
	double salary;
  cout<<"Enter the number of employees: ";
  int n;
  cin>>n;
	employee employees[n];
	getchar();
	for(int i=0;i<n;i++){
		cout<<"Enter the name: ";
		getline(cin,name);
		cout<<"Enter the age: ";
		cin>>age;
		cout<<"Enter the designation: ";
		getline(cin,designation);
		getline(cin,designation);
		cout<<"Enter the salary: ";
		cin>>salary;
		employees[i]=employee(name,age,designation,salary);
		getline(cin,name);
		cout<<"\n";
	}
	cout<<"\n\n";
	
	for(int i=0;i<n;i++){
		employees[i].display();
	}
	
	employee highestSalariedEmployee=employees[0];
	for(int i=1;i<n;i++){
		if(highestSalariedEmployee.getSalary()<employees[i].getSalary()){
			highestSalariedEmployee=employees[i];
		}
	}
	cout<<"\nThe highest salaried employee: \n";
	highestSalariedEmployee.display();
	return 0;
}
////////////////////////////////////////////
/* WAP to illustrate the use of scope resolution operator. Display the various values of the same variables declared at different scope levels. */
// #include <iostream>
// using namespace std;
// int my_variable ; 
// int main()
// {
//   int my_variable; 
//   cout<<"Enter value of Global and Local variable respectively\n";
//   cin>>::my_variable;
//   cin>>my_variable;

//   cout << "Value of global my_variable is " << ::my_variable << endl;
//   cout << "Value of local my_variable is " << my_variable << endl;

//   return 0;
// }
////////////////////////////////////////////////////