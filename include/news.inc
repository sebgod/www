<H2>News</H2>
<p>
If you see a feature that has been added and that you would like to try
out, you can download our <A HREF="download/rotd.html">release of the day</A>.
</P>

<ul class="nonindentlist2" id="newslist">
<?php 

include "$root/news/newsdb.inc";

while ( (list($date, $newsitem) = each($newsdb))) {
	newsitem($date, $newsitem);
}

?>
</ul>
