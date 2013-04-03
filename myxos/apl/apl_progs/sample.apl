integer main()
{
	integer childpid,a;
	childpid = Fork();
	if(childpid == -2) then
		a = Exec("sample.xsm");
	else
		while (childpid != -1) do
			print(childpid);
		endwhile;
		a = Exec("sample.xsm");
	endif;
	return 0;
}
