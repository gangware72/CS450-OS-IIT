Edgar Gangware IV turn in for the lab.

To compile and run on linux:

Compile shell.c and then execute.
I.E. Linux System
    gcc shell.c
    ./a.out //already exists for you in folder, can compile over it though if you wish

If compiling on any other just compile shell.c and have fun with it.

The commands echo, cat and wc have been ported from xv6. The code is a direct implementation.
I take no credit other than porting them.

Once the shell is up and running. Type 1 command like this:

    echo hello

Two or more commands like this:

    echo hello& echo hello&echo hello

Redirection works this way.

    cat>filename.txt readme.txt

If filename.txt exists, the readme will be written to it; otherwise a new file will be created in source folder
and written to. The only time there should be a space is between command words and thier argument parameters.

Thanks!
