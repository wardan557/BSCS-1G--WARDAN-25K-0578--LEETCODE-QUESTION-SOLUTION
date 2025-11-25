#include<stdio.h>
#include<string.h>
typedef	struct student{
	int age;
	char first_name[20];
	char last_name[20];
	int standard;
} student;
int main(){
 int n;
 printf("Enter number of student\n");
 scanf("%d",&n);
student arr[n];
int i;
for(i=0;i<n;i++){
	scanf("%d %s %s %d",&arr[i].age,arr[i].first_name,arr[i].last_name,&arr[i].standard);
}
for(i=0;i<n;i++){
 printf("%d %s %s %d",arr[i].age,arr[i].first_name,arr[i].last_name,arr[i].standard);
}
	return 0;
	
}
