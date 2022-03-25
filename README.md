<h1>0x11. C - printf</h1>
<h2>Concepts</h2>
<div>
    <div>
        <p><em>For this project, students are expected to look at these concepts:</em></p>
        <ul>
            <li><a href="https://intranet.hbtn.io/concepts/111">Group Projects</a></li>
            <li><a href="https://intranet.hbtn.io/concepts/121">Pair Programming - How To</a></li>
            <li><a href="https://intranet.hbtn.io/concepts/130">Flowcharts</a></li>
            <li><a href="https://intranet.hbtn.io/concepts/350">Approaching a Project</a></li>
        </ul>
    </div>
</div>
<div>
    <h2>Background Context</h2>
    <p>Write your own&nbsp;<code>printf</code> function.</p>
</div>
<div>
    <div><br></div>
</div>

[![printf.png](https://i.postimg.cc/4Nj6KfcN/printf.png)](https://postimg.cc/SJ723pVw)
<p><em>^ In this picture,&nbsp;<a href="https://intranet.hbtn.io/rltoken/nZsoG4tOCxWIoCpnauja1Q" target="_blank" title="Kris">Kris</a>, and&nbsp;<a href="https://intranet.hbtn.io/rltoken/wEcRVGdkuvVGIqiJvsnpSw" target="_blank" title="Jul">Jul</a></em>&nbsp;</p>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/lQ4Ecz5ZX_H3fk2qhKO-RA" target="_blank" title="Secrets of printf">Secrets of printf</a></li>
    <li><strong><a href="https://intranet.hbtn.io/rltoken/K5q7wmUvcQcDMsyziDqu6Q" target="_blank" title="Group Projects">Group Projects</a></strong> concept page (<em>Don&rsquo;t forget to read this</em>)</li>
    <li><strong><a href="https://intranet.hbtn.io/rltoken/92Ppxs-a3NM0H8bwLdH6PA" target="_blank" title="Flowcharts">Flowcharts</a></strong> concept page</li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
    <li><code>printf (3)</code></li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
    <li>All your files should end with a new line</li>
    <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project is mandatory</li>
    <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
    <li>You are not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
    <li>The prototypes of all your functions should be included in your header file called&nbsp;<code>main.h</code></li>
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
    <li>Note that we will not provide the&nbsp;<code>_putchar</code> function for this project</li>
</ul>
<h3>GitHub</h3>
<p><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>
<p><br></p>
<h2>More Info</h2>
<h3>Authorized functions and macros</h3>
<ul>
    <li><code>write</code> (<code>man 2 write</code>)</li>
    <li><code>malloc</code> (<code>man 3 malloc</code>)</li>
    <li><code>free</code> (<code>man 3 free</code>)</li>
    <li><code>va_start</code> (<code>man 3 va_start</code>)</li>
    <li><code>va_end</code> (<code>man 3 va_end</code>)</li>
    <li><code>va_copy</code> (<code>man 3 va_copy</code>)</li>
    <li><code>va_arg</code> (<code>man 3 va_arg</code>)</li>
</ul>
<h3>Compilation</h3>
<ul>
    <li>Your code will be compiled this way:</li>
</ul>
<pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
</code></pre>
<ul>
    <li>As a consequence, be careful not to push any c file containing a&nbsp;<code>main</code> function in the root directory of your project (you could have a&nbsp;<code>test</code> folder containing all your tests files including&nbsp;<code>main</code> functions)</li>
    <li>Our main files will include your main header file (<code>main.h</code>):&nbsp;<code>#include main.h</code></li>
    <li>You might want to look at the gcc flag&nbsp;<code>-Wno-format</code> when testing with your&nbsp;<code>_printf</code> and the standard&nbsp;<code>printf</code>. Example of test file that you could use:</li>
</ul>
<h1>¡Main.c content is missing!</h1>
<ul>
    <li>We strongly encourage you to work all together on a set of tests</li>
    <li>If the task does not specify what to do with an edge case, do the same as&nbsp;<code>printf</code></li>
</ul>
<br>
<h1>Tasks</h1>
<h2>0. I&apos;m not going anywhere. You can print that wherever you want to. I&apos;m here and I&apos;m a Spur for life</h2>
<p>Write a function that produces output according to a format.</p>
<ul>
    <li>Prototype:&nbsp;<code>int _printf(const char *format, ...);</code></li>
    <li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
    <li>write output to stdout, the standard output stream</li>
    <li><code>format</code> is a character string. The format string is composed of zero or more directives. See&nbsp;<code>man 3 printf</code> for more detail. You need to handle the following conversion specifiers:<ul>
            <li><code>c</code></li>
            <li><code>s</code></li>
            <li><code>%</code></li>
        </ul>
    </li>
    <li>You don&rsquo;t have to reproduce the buffer handling of the C library&nbsp;<code>printf</code> function</li>
    <li>You don&rsquo;t have to handle the flag characters</li>
    <li>You don&rsquo;t have to handle field width</li>
    <li>You don&rsquo;t have to handle precision</li>
    <li>You don&rsquo;t have to handle the length modifiers</li>
</ul>
<br>
<h2>1. Education is when you read the fine print. Experience is what you get if you don&apos;t</h2>
<p>Handle the following conversion specifiers:</p>
<ul>
    <li><code>d</code></li>
    <li><code>i</code></li>
    <li>You don&rsquo;t have to handle the flag characters</li>
    <li>You don&rsquo;t have to handle field width</li>
    <li>You don&rsquo;t have to handle precision</li>
    <li>You don&rsquo;t have to handle the length modifiers</li>
</ul>
<br>
<h2>2. Just because it&apos;s in print doesn&apos;t mean it&apos;s the gospel</h2>
<p>Create a man page for your function.&nbsp;</p>

[![1900x920-8-beneficios-de-usar-imagenes-en-nuestros-sitios-web.jpg](https://i.postimg.cc/qByb9Tgz/1900x920-8-beneficios-de-usar-imagenes-en-nuestros-sitios-web.jpg)](https://postimg.cc/pyVJF3fH)

