<h2>New in release 0.5 of the Mercury distribution</h2>

<ul>
<li>
We now support committed choice nondeterminism in a logical and declarative
fashion, using the new determinism categories `cc_nondet' and `cc_multi'.
Like `nondet' and `multi' respectively, they specify that a predicate
may have more than one solution, but they convey the additional
assertion that the predicate will only be used in contexts in which
only one solution is needed. The compiler will check that all uses
of the predicate satisfy this requirement. Having proven the
assertion to be correct, the compiler can then generate much more
efficient code for the predicate. By pushing pruning inwards, the
compiler can often avoid creating choice points at all.

<li>
We now check for backtracking over unique modes.
(This may potentially break some programs using unique modes in ways
that the compiler can't prove are safe. In such cases, replacing
`multi' with `cc_multi' should solve the problem. If you have any
trouble with this, we'll be happy to help you.)
We have also added "mostly unique" modes, which provide support
for backtrackable destructive update.
See the Mercury language reference manual.

<li>
We now provide genuine arrays with destructive update.
See the library module `uniq_array'.
(Warning: this has not had much testing. The interface is not yet stable.)

<li>
We now support interfacing to C code.
See the documentation in the Mercury language reference manual.

<li>
There is now an `inline' pragma which you can use
as a hint to the compiler to inline a particular predicate.

<li>
We have ported the system to HPUX
(thanks to Gertjan van Noord and especially Eero Pajarre).

<li>
We now support shared libraries for IRIX 5.

<li>
We now allow the use of compilers other than gcc -
see the user's guide for details.
We don't recommend the use of compilers other than gcc,
since the inability to use gcc's special features will
most likely lead to much less efficient code.

<li>
To complement our source distribution, we now also provide binary
distributions for a variety of platforms.  Installation should be
quick and easy.

<li>
Various other minor improvements:
<ul>
<li> In portable C mode, we now generate better code for loops.
<li> We've made a few other minor improvements in the generated code.
<li> Unary plus and minus are now implemented.
<li> Updated the documentation to reflect changes in unique modes,
<li> Corrected a lot of typos in the documentation.
<li> Fixed quite a few bugs.
</ul>

<li>
Parts of the library module `std_util' have been moved into separate
modules `assoc_list' and `bool'; if you have existing code which
used those parts of `std_util', you may need to add `import_module'
declarations to import `assoc_list' and/or `bool'.
</ul>
