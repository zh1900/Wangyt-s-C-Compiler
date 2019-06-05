#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include <stdlib.h>

using namespace std;

string regs[]={"t1", "t2", "t3", "t4", "t5", "t6", "t7", "t8", "t9", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7"};


string Load_Var(string inter){

}

string translate(string line){
	string str1="$1";
	string str2="$2";
	string str="";
	str+="\tli ";
	str+=str1;
	str+=",";
	str+=str2.replace(str2.find("$"), 1, "#");
	return str;
}

int main(){
   
 ifstream in("inter.txt");
// istreambuf_iterator<char> beg(in), end;
 //string Inter(beg, end);//鎴栬€卻tring st;st.assign(beg,end);
    string Inter;
    ofstream fout;
    fout.open("result.asm");
    fout<<".data"<<endl;
    fout<<".globl main"<<endl;
    fout<<".text"<<endl;
    fout<<"read:"<<endl;
    fout<<"    li $v0, 4"<<endl;
    fout<<"    la $a0,_prompt"<<endl;
    fout<<"    syscall"<<endl;
    fout<<"    li $v0,5"<<endl;
    fout<<"    syscall"<<endl;
    fout<<"    jr $ra"<<endl;
    fout<<"print:"<<endl;
    fout<<"    li $v0,1"<<endl;
    fout<<"    syscall"<<endl;
    fout<<"    li $v0,4"<<endl;
    fout<<"    la $a0,_ret"<<endl;
    fout<<"    syscall"<<endl;
    fout<<"    move $v0,$0"<<endl;
    fout<<"    jr $ra"<<endl;
    
    

 //cout<<inter<<endl; 
 //Load_Var(Inter);
  
	string temp;
	string feat_onePoint;
    vector<string> line;
    while(getline(in, temp)){
    	cout<<temp<<endl;
      	stringstream stringin; //使用串流实现对string的输入输出操作
      	stringin.str(temp);
		while (stringin >> feat_onePoint) {      //按空格一次读取一个数据存入feat_onePoint 
			line.push_back(feat_onePoint); //存储每行按空格分开的数据 
		}
	
			cout<<line[line.size()-1][0]<<" ";
		
		cout<<endl;
		cout<<translate(temp)<<endl;
		line.clear();
		    }
        

}
