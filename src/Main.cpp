// Main.cpp : Defines the entry point for the application.

/*
MIT License

Copyright (c) 2022 Wasim Akram Biswas

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/



#include "Main.h"
#include<vector>
#include<cstdint>
#include "vm/Instruction.cpp"
#include "vm/ByteCodeInterpreter.h"
 

using namespace std;
using namespace bytecodeInterpreter;

 int main()
{
	cout << "Bowie-Lang bytecode VM is Started ... \n" << endl;
	
	Instruction code[] = {
		Instruction(PUSH_INT, 0,4000),
		Instruction(PUSH_INT, 0,9000),
		Instruction(ADD_INT, 0,0),
		Instruction(PRINT_INT, 0,0),
		Instruction(EXIT,0,0),

	};

	// Stack code start from here .

	
	ByteCodeInterpreter::Run(code);

	
	  

	 
	
	cout << "Program is exit... \n" << endl;

	return 0;
}

