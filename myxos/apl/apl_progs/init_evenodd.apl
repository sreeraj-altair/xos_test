integer main()
{
	integer childpid,retval;
	childpid = Fork();
	if(childpid == -2) then
		retval=Exec("even.xsm");
	else
		retval=Exec("odd.xsm");
	endif;
	return 0;
}
