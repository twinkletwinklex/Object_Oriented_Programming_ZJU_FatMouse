## Personal Dairy
The Personal Diary is a CLI (Command Line Interface) software, consists of three programs:

	pdadd 
	pdlist [ ]
	pdshow 
	pdremove 

pdadd is used to add an entity into the diary for the date. If an entity of the same date is in the diary, the existing one will be replaced. pdadd reads lines of the diary from the stdin, line by line, until a line with single '.' character or the EOF character (Ctrl-D in Unix and Ctrl- Z in Windows).

pdlist lists all entities in the diary ordered by date. If start and end date are provided through command line parameters, it lists entities between start and end only. This program lists to the stdout.

pdshow prints the content of the entity specified by the date to the stdout. 

pdremove removes one entity of the date. It returns 0 at success and -1 at failure.

The software stores diary in one data file, reads to the memory at begining of each program and stores back to the file at the end of process.

Common classes and functions should be shared between programs. No interactive is permitted, so these programs are able to work together by the means of redirection or tee, are able to be used in a shell script.