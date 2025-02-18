// 1.write a function to swap values of two int variables(tsrn).
#include<stdio.h>
int main()
{

}
void swap()
{
    int int x,y,t;
    printf("enter two number=");
    scanf("%d,%d",&x,&y);
    t=x;
    x=y;
    y=t;
    printf(" after swaping x=%d,y=%d",x,y);

}
// 2.write a function to search all occurrence of a given character in a given string.result of search is a list of indices to be stored in the given array.
// [void search _all_occurrence (char*str, char ch, int *arr);]
// 3.write a function to convet a given string into uppercase.
// 4.write a function to convert a given string into lowercase.
// 5.write a function to extract a substring from a given string with specified start index (inclusive )and end index (exclusive),
//  and store the extracted string in another char array.[void extract_string(char*str, int start_index, char*result);]
// 6.write a function to swap strings of two char array.
// 7. write a function to sort an array of int type values.[void sort(int*ptr,int size);]
// 8.write a function to marge  two arrays in a given array.[void merge(int*arr1, int size1,int*arr2,int size 2,int*arr 3);]
// 9. write a function to move first value of the array to the postion where all smaller values will be in the left and greater values will be in the right.

// 10. there are 5 classes with different number of students in them. 5 arrays containing marks of students of each class.write a function
//     to recive an address of an array of pointers to access marks of all the students . the job of function is to find the highest msrks among all the classes.