<h2>Papers and Presentations</h2>

The Mercury team have written quite a few papers about the Mercury
programming language, its implementation techniques, design, theoretical
basis and other topics. In addition, we have written several papers
on <a href = "papers.html#related">related</a> topics.
Almost all are available here as postscript
files, compressed using gzip.
<p>
Below the papers, the notes from a number of <a
href="papers.html#presentations">presentations</a> given on
Mercury, at a variety of levels, are also available.

<h2>Papers on Mercury</h2>

<ul>

<li>
<strong>
Termination analysis for Mercury.
</strong>
<br>
Chris Speirs, Zoltan Somogyi and Harald Sondergaard.
<br>
<em>
Technical Report 97/9,
</em>
Department of Computer Science, University of Melbourne,
Melbourne, Australia, July 1997, 25 pages.
<a href = "papers/mu_97_09.ps.gz">
Available here (99K).
</a>
<p>

This paper presents the algorithms of the Mercury termination analyser,
discusses how real-world aspects of the language
such as modules, higher-order features, foreign language code,
and declarative input/output can be handled,
and evaluates the performance of the analyser
both on a set of standard test programs and on the Mercury compiler itself.
<p>
A shorter version of this paper will be published
in the Proceedings of the Fourth International Static Analysis Symposium,
Paris, France, September 1997.
<p>
The raw data on which the evaluation is based
is <a href = "papers/termination_data.tar.gz">available here</a>
as a 5.2 Mb tar file.
<p>

<li>
<strong>
Status of the Mercury system.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson, Thomas Conway, Andrew Bromage,
Tyson Dowd, David Jeffery, Peter Ross, Peter Schachte and Simon Taylor.
<br>
<em>
Proceedings of the JICSLP '96 Workshop on Parallelism and
Implementation Technology for (Constraint) Logic Programming Languages,
</em>
Bonn, Germany, September 1996, pages 207-218.
<a href = "papers/jicslpw.ps.gz">
Available here (46K).
</a>
<p>

<li>
<strong>
The execution algorithm of Mercury:
an efficient purely declarative logic programming language.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson and Thomas Conway.
<br>
<em>
Journal of Logic Programming,
</em>
volume 29, number 1-3, October-December 1996, pages 17-64.
<a href = "papers/jlp.ps.gz">
Available here (138K).
</a>
<br>
Elsevier owns the copyright of this paper;
it is made available here by their permission.
<p>

This paper contains a brief overview of the Mercury language, and a
reasonably detailed overview of the implementation technology used in
the Mercury compiler.  It describes the abstract machine that the
compiler generates code for.  (Our other papers listed below go
into more detail on exactly how the code is generated, and on how
the abstract machine instructions are implemented as C or GNU C code.)
<p>

<li>
<strong>
Determinism analysis in the Mercury compiler.
</strong>
<br>
Fergus Henderson, Zoltan Somogyi and Thomas Conway.
<br>
<em>
Proceedings of the Australian Computer Science Conference,
</em>
Melbourne, Australia, January 1996, pages 337-346.
<a href = "papers/acsc96.ps.gz">
Available here (78K).
</a>
A longer version of the paper is
<a href = "papers/detism.ps.gz">
available here (76K).
</a>
<p>

This paper discusses Mercury's determinism system in detail, including
the algorithms for switch detection, deep indexing, determinism
inference, and determinism checking.
<p>

<li>
<strong>
Code generation for Mercury.
</strong>
<br>
Thomas Conway, Fergus Henderson, and Zoltan Somogyi.
<br>
<em>
Proceedings of the 1995 International Symposium on Logic Programming,
</em>
Portland, Oregon, December 1995, pages 242-256.
<a href = "papers/code_gen_mit.ps.gz">
Available here (68K).
</a>
<p>

This paper describes the structure of the Mercury compiler,
its calling conventions,
and the algorithms it uses in generating code.
These algorithms include lazy code generation
and a novel way of handling nested disjunctions.
<p>


<li>
<strong>
Compiling logic programs to C
using GNU C as a portable assembler
</strong>
<br>
Fergus Henderson, Zoltan Somogyi and Thomas Conway.
<br>
<em>
Proceedings of the ILPS '95 Postconference Workshop on
Sequential Implementation Technologies for Logic Programming Languages.
</em>
Portland, Oregon, December 1995.
<a href = "papers/mercury_to_c.ps.gz">
Available here (65K).
</a>
<p>

This paper discusses the merits of using C, and in particular GNU C,
as an intermediate target language for the compilation of logic programs,
and describes the approach we have taken in the implementation of Mercury.
<p>

<li>
<strong>
Mercury: an efficient purely declarative logic programming language.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson and Thomas Conway.
<br>
<em>
Proceedings of the Australian Computer Science Conference,
</em>
Glenelg, Australia, February 1995, pages 499-512.
<a href = "papers/acsc95.ps.gz">
Available here (85K).
</a>
<p>

An overview paper.
<p>

<li>
<strong>
The implementation of Mercury:
an efficient purely declarative logic programming language.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson and Thomas Conway.
<br>
<em>
Proceedings of the ILPS '94 Postconference Workshop on
Implementation Techniques for Logic Programming Languages,
</em>
Syracuse, New York, November 1994.
<a href = "papers/ilps94w.ps.gz">
Available here (96K).
</a>
<p>

The first paper on Mercury. It is superseded by the paper to appear
in the Journal of Logic Programming.
<p>

<li>
<strong>
Code generation for Mercury.
</strong>
<br>
Thomas Conway.
<br>
<em>
Honours report.
</em>
Department of Computer Science, University of Melbourne, November 1994.
<a href = "papers/conway_hons.ps.gz">
Available here (188K).
</a>
<p>

This is the first paper on the code generator.
Warning: several aspects of the code generator have changed
since this paper was written.
Some of these are documented in the version in the ILPS 95 proceedings.

</ul>

<hr>

<h2><a name="related">Related Papers</a></h2>

This paper gives an introduction to automatic termination analysis.
It surveys termination analysis of logic programs and provides an
overview of the important concepts involved in automatic termination
analysis.  
<p>

<ul>
<li>
<strong>
Termination Analysis for Logic Programs
</strong>
<br>
Chris Speirs.
<br>
<em>
Technical Report 97/23,
</em>
Department of Computer Science, University of Melbourne, October 1997.
<a href = "papers/mu_97_23.ps.gz">
Available here (67K).
</a>
 
</ul>

<p>
This paper outlines the features that we believe to be important
in a modern logic programming language:
<p>

<ul>
<li>
<strong>
Logic programming for the real world.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson, Thomas Conway and Richard O'Keefe.
<br>
<em>
Proceedings of the ILPS '95 Postconference Workshop on
Visions for the Future of Logic Programming,
</em>
Portland, Oregon, December 1995.
<a href = "papers/vision.ps.gz">
Available here (59K).
</a>
<p>

</ul>

The mode system and the uniqueness system of Mercury
are based on the following papers:
<p>

<ul>

<li>
<strong>
A system of precise modes for logic programs.
</strong>
<br>
Zoltan Somogyi.
<br>
<em>
Proceedings of the Fourth International Conference on Logic Programming,
</em>
Melbourne, Australia, May 1987, pages 769-787.
<a href = "http://www.cs.mu.oz.au/~zs/papers/iclp87.ps.gz">
Available here (40K).
</a>
<p>


<li>
<strong>
Strong modes can change the world!
</strong>
<br>
Fergus Henderson.
<br>
<em>
Honours Report.
</em>
Department of Computer Science, University of Melbourne, November 1992.
<a href = "http://www.cs.mu.oz.au/~fjh/papers/hons_thesis.ps.gz">
Available here (114K).
</a>
<p>

</ul>

<!---------- The Aditi interface is not useful yet
--------------------------------------------------

The following papers are relevant to the interface to the Aditi deductive
database system (see the "Aditi deductive database interface"
section in Mercury Language Reference Manual listed under 
"Implementation dependent pragmas" in the "Pragmas" chapter).
The first describes the method used to express transactions and
updates in Mercury. The second describes a source-to-source transformation
implemented in the Mercury compiler.

<p>
<ul>


<li>
<strong>
Database transactions in a purely declarative logic programming language.
</strong>
<br>
David B. Kemp, Thomas Conway, Evan Harris, Fergus Henderson,
Kotagiri Ramamohanarao and Zoltan Somogyi.
<br>
<em>
Technical Report 96/45
</em>
Department of Computer Science, University of Melbourne, December 1996.
<a href = "http://www.cs.mu.OZ.AU/publications/tr_db/mu_96_45.ps.gz">
Available here (58K)
</a>
<a href = "http://www.cs.mu.OZ.AU/publications/tr_db/mu_96_45_cover.ps.gz">
with cover page.
</a>

<li>
<strong>
Right-, left-, and multi-linear rule transformations that maintain
context information.
</strong>
<br>
David B. Kemp and Kotagiri Ramamohanarao and Zoltan Somogyi. 
<br>
<em>
Technical Report 90/2
</em>
Department of Computer Science, University of Melbourne, October 1997.
<a href = "papers/tr90-2.ps.gz">
Available here (48K).
</a>
Note that this paper incorrectly claims that
the context transformation can be applied to
mixed-linear predicates containing pseudo-left-linear rules
as well as other linear rules.  
It is corrected in David Kemp's thesis,
<a href = "http://www.cs.mu.oz.au/~kemp/papers/thesis.ps.gz">
available here (560K).
</a>

</ul>

--------------------------------------------------
-------------------------------------------------->
 
<hr>

<h2><a name="presentations">Presentations on Mercury<a></h2>

<ul>

<li>
<strong>
Termination analysis for Mercury.
</strong>
<br>
Chris Speirs, Zoltan Somogyi and Harald Sondergaard.
<br>
<em>
Talk to be presented at the Fourth Static Analysis Symposium.
</em>
Paris, France, September 1997.
<a href = "papers/sas_talk.ps.gz">
Available here (6K).
</a>
<p>

<li>
<strong>
Unification in Mercury.
</strong>
<br>
Zoltan Somogyi.
<br>
<em>
Invited talk presented at the Eighth Benelux Workshop on Logic Programming.
</em>
Louvain-la-Neuve, Belgium, September 1996.
<a href = "papers/unif.ps.gz">
Available here (12K).
</a>
<p>

<li>
<strong>
The design and implementation of Mercury.
</strong>
<br>
Zoltan Somogyi and Fergus Henderson.
<br>
<em>
Tutorial presented at the Joint International
Conference and Symposium on Logic Programming.
</em>
Bonn, Germany, September 1996.
<a href = "papers/jicslp_talk.ps.gz">
Available here (18K).
</a>
<p>

<li>
<strong>
Status of the Mercury system.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson, Thomas Conway, Andrew Bromage,
Tyson Dowd, David Jeffery, Peter Ross, Peter Schachte and Simon Taylor.
<br>
<em>
Presented at the JICSLP '96 Workshop on Parallelism and
Implementation Technology for (Constraint) Logic Programming Languages,
</em>
Bonn, Germany, September 1996.
<a href = "papers/jicslpw_talk.ps.gz">
Available here (5K).
</a>
<p>

<li>
<strong>
Mercury:
an efficient purely declarative logic programming language.
</strong>
<br>
Zoltan Somogyi, Fergus Henderson and Thomas Conway.
<br>
<em>
Presented at the Eighteenth Australasian Computer Science Conference,
</em>
Adelaide, South Australia, February 1995.
<a href = "papers/acsc95_slides.ps.gz">
Available here (33K).
</a>
<p>

<li>
<strong>
Lecture notes for the Mercury segment of the subject
433-257 Frontiers of Computer Science, given in 1997.
</strong>
<br>
Zoltan Somogyi.
<br>
<a href = "papers/257.ps.gz">
Available here (21K).
</a>
<p>

<li>
<strong>
Lecture notes for the Mercury segment of the subject
433-247 Frontiers of Computer Science, given in 1995.
</strong>
<br>
Zoltan Somogyi.
<br>
<a href = "papers/247.ps.gz">
Available here (21K).
</a>
<p>

<li>
<strong>
Type classes for logic programming languages, given in March 1998
</strong>
<br>
David Jeffery
<br>
<a href = "papers/dgj-talk.ps.gz">
Available here (30K).
</a>
<p>

<li>
<strong>
Runtime type information in Mercury, given in March 1998
</strong>
<br>
Tyson Dowd
<br>
<a href = "papers/rtti_talk_98.ps.gz">
Available here (48K).
</a>
<p>

</ul>

<p>
<hr>
<p>

All these papers and presentations are for A4 paper.
Unfortunately, we cannot generate US paper size versions.

<p>