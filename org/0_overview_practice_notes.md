# Review of 0<sub>overview</sub><sub>practice.org</sub>

On Friday, January 20, you wrote and ran our first C program in
class. In the course of this fast-paced session, you encountered many
important computing concepts.

Here, I'm giving you a bit of background on some of them - not to
worry: we'll go over this in class again, and these concepts will
accompany us for the duration of the course!

1.  **CMD**: We opened the command line terminal in Windows (also called "shell
    program"): this program accepts commands for the operating system,
    Windows, itself.
    
    For example the `cd` ("change directory") command, to get from one
    place to another. Examples:
    
    -   when you enter `cd ..` at the prompt, you go from where you are one
        directory up. The files are organized like a tree, and you can go
        up until you hit `c:/`, the ceiling.
    -   when you are in `c:/Users/JohnSmith/` because your name is John
        Smith, then `cd Downloads` will bring you to
        `c:/Users/JohnSmith/Downloads`.

2.  **GCC**:We checked if the GCC compiler is installed or not: `gcc --version`
    tests that without any extra trouble. At the end, we used `gcc`
    again, but this time with an option `-o hello` and with a target
    file, `first.C`: we wanted to compile `first.C` and give it the name
    `hello` so that we could run it with this command, `hello`.

3.  **Emacs**: we wanted to use this editor not just to write files, but to
    write "literate" files like `first.org` that contained
    
    -   meta data (indicated by `#+`, e.g. `#+title`)
    -   documentation (like the headline and the comment
    -   code (the C code inside the `#+begin_src...#+end_src` code block)
    -   output (like the `#+Result`, `Hello, World`).
    
    Because of this, we needed a *configuration file*, `.emacs`. We had to
    store this file in the directory where Emacs "wakes up" when it
    starts up - the short code for this location is `~/`.
    
    Unfortunately, on Windows, this directory was not your User's home
    directory (`c:/Users/JohnSmith`) but some other location. We had to
    move the `.emacs` file to that location so that Emacs would read it
    when it started up.<sup><a id="fnr.1" class="footref" href="#fn.1" role="doc-backlink">1</a></sup>
    
    To get this done inside Emacs, we leapt way ahead of [the tutorial](https://github.com/birkenkrahe/cc/blob/piHome/org/tutorial.md)
    that we're going to complete together next week. We used a few key
    bindings (like `C-x d` or `C-x b`) from that tutorial already.
    
    All of this will seem silly and trivial to you in a couple of
    weeks. That's the way of the world when you learn!


# Footnotes

<sup><a id="fn.1" href="#fnr.1">1</a></sup> An alternative is to load this file when starting Emacs,
e.g. with the command `emacs -l .emacs` in the directory where `.emacs` is
located. In computing, many roads lead to Rome!
