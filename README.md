# LISP Interpreter ![Code size](https://img.shields.io/github/languages/code-size/ChosenChris/LISP-Interpreter) ![Version](https://img.shields.io/github/manifest-json/v/ChosenChris/LISP-Interpreter?color=green) ![License](https://img.shields.io/badge/License-MIT-red.svg)
This LISP interpreter is an improved version of my old interpreter, which can be found [here](https://github.com/ChosenChris/LispInterpreter).

Due to poorly implemented algorithms, I have decided to rebuild the interpreter in a better way, this time utilizing the mechanics and speed of the programming language C++.

<br/>

## Table of contents:
1. [Description](#description)
2. [Usage](#usage)
3. [First steps](#first-steps)
4. [How to contribute](#contribution)
5. [License](#license)

<br/>
<br/>
<br/>

***

## Description: <a name="description"></a>
This repository resembles an interpreter for a custom dialect of the programming language Lisp.

An interpreter is a program which is capable of evaluating and executing sourcecode. Unlike a compiler, the interpreter does not create any executable file, so the source code must be interpreted every time one wants to execute it.

Unlike you might thing, Lisp is no programming language, but rather a collection of multiple programming languages, which all have similar paradigms which makes them all feel more alike. The Lisp dialect, which this interpreter can evaluate is inspired by the much more common _STELLA_ dialect, but still different in many ways (and of course with a much smaller functional scope). For further information on my Lisp dialect, visit the [Lisp documentation](https://github.com/ChosenChris/LISP-Interpreter/tree/main/Documentation/Lisp) of this repository.

<br/>

***

## Usage: <a name="usage"></a>

### Download the executable:
In order to use the interpreter, you do not need to install any program.

You can download the newest release of the interpreter [here](https://github.com/ChosenChris/LISP-Interpreter/releases). The downloaded file resembles the developer command prompt, which you can execute. After that, skip the next paragraph and continue with your [first steps](#first-steps).

<br/>

### Download and compile the sourcecode:
If you prefer to download the sourcecode from the [code](https://github.com/ChosenChris/LISP-Interpreter)-page, feel free to do so. This interpreter is written in the programming language C++ and needs to be compiled with a respective compiler. The source code of this repository has only been compiled using Microsoft's MSVC compiler and may not be compilable with other C/C++-Compilers.

After successfully compiling the sourcecode you can continue with your [first steps](#first-steps).

<br/>

***

## First steps: <a name="first-steps"></a>
After executing the interpreter, you are welcomed with a command promt. The visual depition of the command prompt may change in different versions, but the principle of executing sourcecode should stay the same.

<br/>

### Write the sourcecode:
The first thing you need to do is to write the source code which you want to execute with the interpreter. In the following, we will write a simple _Hello World_-program in Lisp. Copy the following source code into a file, which is located in the same directory as the previously downloaded executable and name said file "sampleCode.lsp".
```Lisp
;File: sampleCode.lsp
(void main () (
    (println "Hello World")
))
```

<br/>

### Start the developer command prompt:
After successfully saving your sourcecode to the directory, start the command prompt. You should see a terminal that looks something like this:

![](https://raw.githubusercontent.com/ChosenChris/LISP-Interpreter/main/resources/First-steps1.png)

<br/>

### Execute the sourcecode:
After that, type `execute sampleCode.lsp` into the command prompt. If you have saved the file with the sourcecode to the same directory as the executable, the sourcecode should be executed by now and the string "Hello World" should be shown in the terminal.

![](https://raw.githubusercontent.com/ChosenChris/LISP-Interpreter/main/resources/First-steps2.png)

If you have saved the sourcecode to another directory, you need to provide the filepath to the interpreter. In order not to provide the filepath with every execution, you may change the path by using the `cd` command.

<br/>

### Available commands:
The command promt is capable of executing a small number of comamnds. You can type `help` in order to get further information on available commands.

<br/>

***

## How to contribute: <a name="contribution"></a>
If you want to contribute to the project, feel free to open a pull request.

If you find any bugs or errors while playing with the interpreter, please create an [issue](https://github.com/ChosenChris/LISP-Interpreter/issues).

<br/>

***

## License: <a name="license"></a>
The interpreter is licensed under the **MIT License**. See the full license [here](https://github.com/ChosenChris/LISP-Interpreter/blob/main/LICENSE.txt).
