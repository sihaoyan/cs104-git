#include <iostream>

using namespace std;

int count_delims(char delim, char* str)
{
  int n=0;
  int i=0;
  while(str[i]!='\0'){
    if(str[i]==delim){
      n++;
    }
    i++;
  }
  return n;
}

char** split(char delim, char* str, int *size)
{
  char** w= new char*[*size];
  int i=1;
  int j=1;
  
 // char s[100];
  w[0]=str;
  while(str[i]!='\0'){
    if(delim==str[i]){
      str[i]='\0';
      w[j]=str+i+1;
      j++;
    }
    i++;
  }
  
  return w;
  }

#ifndef TEST
int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        cout << "Please enter a delimter and a string as arguments." << endl;
        return 1;
    }
    int n;
    n= count_delims(argv[1][0], argv[2])+1;
    char** w = split(argv[1][0], argv[2], &n);
    for(int i=0;i<n;i++)
    {
        cout << i << ":" << w[i] << endl;
    }
    delete[] w;
  return 0;
}
#endif

