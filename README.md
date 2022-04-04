# 0x16. C - Simple Shell

# Things that we need on our readme

[README.md] Does the readme have a valid description of the shell? What it does and how to use it?

[README.md] Does the readme show at least one example on how to use the shell?

### Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- Who designed and implemented the original Unix operating system.
	- Ken Thompson and Dennis Ritchie led the team of computer scientists that created the first version of UNIX in 1969.

- Who wrote the first version of the UNIX shell.
	-	The first Unix shell was the Thompson shell, sh, written by Ken Thompson at Bell Labs and distributed with Versions 1 through 6 of Unix, from 1971 to 1975.

- Who invented the B programming language (the direct predecessor to the C programming language).
	- Ken Thompson.

- Who is Ken Thompson.
	- Kenneth Lane Thompson (born February 4, 1943) is an American pioneer of computer science. Thompson worked at Bell Labs for most of his career where he designed and implemented the original Unix operating system.

- How does a shell work.
	- In general terms, a shell corresponds in the computer world to a command interpreter where the user has an available interface (CLI, Command-Line Interface), through which he has the possibility of accessing services of the operating system as well as executing or invoking programs.

- What is a pid and a ppid
	- PID stands for Process ID, Which means Identification Number for currently running process in Memory.
	- PPID stands for Parent Process ID, Which means Parent Process is the responsible for creating the current process(Child Process). Through Parent Process, The child process will be created. If you kill the parent process, the child process is also killed as well.

- How to manipulate the environment of the current process
	- Every UNIX process has an “environment”. The environment consists of “environment variables”, each of which has a string value associated with it. Some environment variables always exist, such as path, which tells the shell where to look for programs, or term which specifies the kind of terminal being used. You may add other environment variables at any time from an interactive shell, or you can add them to the file, such as the .login file, that is executed when you log in. When a process is created, it is given a copy of the environment from its parent process. When started, it inherits a copy of its parent’s environment. The parent process is usually the interactive shell from which it was started. In turn, any child process created inherits a copy of the parent process current environment. Environment variables should be used for communicating with child processes.

- What is the difference between a function and a system call
	- The main difference between system call and function call is that a system call is a request for the kernel to access a resource while a function call is a request made by a program to perform a specific task.

- How to create processes
	- A new process can be created by the fork() system call. The new process consists of a copy of the address space of the original process. fork() creates new process from existing process. Existing process is called the parent process and the process is created newly is called child process.

- What are the three prototypes of `main`
	- `int main(void);`
	- `int main(int argc, char **argv);`
	- `int main(int argc, char *argv[], char *envp[]);`

- How does the shell use the `PATH` to find the programs
	- The shell tries each directory in the PATH , left-to-right, and runs the first executable program with the matching command name that it finds. Slashes in the pathname prevent the shell from using PATH to look up the command name, so the shell executes /bin/date directly.

- How to execute another program with the `execve` system call
	- execve() executes the program pointed to by filename. filename must be either a binary executable, or a script starting with a line of the form "#! interpreter [arg]". In the latter case, the interpreter must be a valid pathname for an executable which is not itself a script, which will be invoked as interpreter [arg] filename.

- How to suspend the execution of a process until one of its children terminates
	-	Suspends the calling process until any one of its child processes ends. More precisely, wait() suspends the calling process until the system obtains status information on the ended child. If the system already has status information on a completed child process when wait() is called, wait() returns immediately.

- What is `EOF` / “end-of-file”?
	- Is a condition in a computer operating system where no more data can be read from a data source.

