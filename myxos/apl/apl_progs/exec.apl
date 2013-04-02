decl
	integer a,b;
enddecl

integer main()
{
	print ("Start");
	a = Fork();
	print (a);
	if (a >= 0) then
		b = Exec ("odd.xsm");
	else
		b = Exec ("even.xsm");
	endif;
	return 0;
}
