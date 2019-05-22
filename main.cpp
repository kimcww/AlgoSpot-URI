#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int Input;
    string strInput;
    cin>>Input;
    string::size_type i;
    int Count2 = 0;
    for(int input = 0; input < Input ; input++){
        cin>>strInput;
        char DataBuffer[81];
        char ResultBuffer[81];
        strcpy(DataBuffer,strInput.c_str());

        for( i = 0 ; i< strInput.size(); i++){
            if( DataBuffer[i] == '%' ){
                char *temp;
                int ASCII = 0;/*(DataBuffer[i+1])*16;
                ASCII += atoi(&DataBuffer[i+2]);
             */
                char temp2[2]={DataBuffer[i+1],DataBuffer[i+2]};
                ASCII = strtol(&temp2[0], &temp,16);
                ResultBuffer[Count2] = char(ASCII);
                i += 2;
                Count2++;
        }
            else{
                ResultBuffer[Count2] = DataBuffer[i];
                Count2++;
            }
    }

        cout<<ResultBuffer<<endl;
        memset(ResultBuffer,0,sizeof(ResultBuffer));
        Count2 = 0;
}
}
