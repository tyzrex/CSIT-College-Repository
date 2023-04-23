#### Lab 1 : Learning Basic Linux Commands 

#### OS Used : Manjaro Linux x86_64

1. **Command Name:** ls

   **Syntax** : *ls* [option] [directory]

   **Usage** : The *ls* command lists files and directories within the file system and shows detailed information about them

   **Commands Used:**

   * ls => It lists all the unhidden files and directories within current directory.
   * ls Lab1 => It lists all the files and directories of directory
   * ls -l Lab1 => It lists files in long listing format which includes: 
     * The file type
     * The file permissions
     * Number of hard links to the file
     * File owner
     * File group
     * File Size
     * Date and Time
     * File name

   **Output:**

   ![image-20230411191015447](/home/tyzrex/.config/Typora/typora-user-images/image-20230411191015447.png)

   ---

   <div style="page-break-after: always; break-after: page;"></div>

2. **Command Name** : cd 

   **Syntax**: *cd* [directory]

   **Usage**: The *cd* command is used to change the working directory.

   **Commands Used**:

   * cd => The *cd* command takes us to the home directory of the current user
   * cd Documents/College-Repo-Fourth-Semester/Operating\ System/Practical-Stuff/ => It changes the working directory to the specified directory.
   * cd .. => Go up to the parent directory of the current directory

   **Output**:

   ![image-20230411192506949](/home/tyzrex/.config/Typora/typora-user-images/image-20230411192506949.png)

   ---

   <div style="page-break-after: always; break-after: page;"></div>

3. **Command Name:** grep

   **Syntax:** grep [OPTIONS] PATTERN [FILE...]

   **Usage:** The grep command is used to search for lines in one or more files that match a given pattern.

   **Commands Used:**

   - grep apple file1: Searches for lines containing the word "apple" in the file fruits.txt.
   - grep hello . -r : Recursively searches for lines containing the word "hello" in all files under the directory .
   - grep -i "hello" helloworld.sh: Searches for lines containing the word "hello" in a case-insensitive manner in the file helloworld.sh

   **Output**:

   ![image-20230423220801286](/home/tyzrex/.config/Typora/typora-user-images/image-20230423220801286.png)

   ![image-20230423221021992](/home/tyzrex/.config/Typora/typora-user-images/image-20230423221021992.png)

   ---

   <div style="page-break-after: always; break-after: page;"></div>

4. **Command Name**: sudo

   **Syntax**: sudo [options] [command]

   **Usage**: The sudo command is used to execute a command with elevated privileges.

   **Commands Used**:

   - sudo nvim : Runs the specified command with elevated privileges.
   - sudo -i : Switches to the root user account.

   ###### Output

   ![image-20230423220455026](/home/tyzrex/.config/Typora/typora-user-images/image-20230423220455026.png)

   ---

5. **Command Name** : pwd

   **Syntax**: *pwd*

   **Usage**: This command prints the name of the current/working directory

   **Commands Used**:

   * pwd => Prints the name of the current/working directory

   **Output**:

   ![image-20230423221110072](/home/tyzrex/.config/Typora/typora-user-images/image-20230423221110072.png)

   ---

   <div style="page-break-after: always; break-after: page;"></div>

6. **Command Name** : mv

   **Syntax**: *mv* [option] [source] [target]

   **Usage**: This command is used to move or rename files or directories

   **Commands Used**:

   * mv OS_LabWorks_Part-1.pdf Practical-Stuff/ => Moves the file into the existing Practical-Stuff directory.
   * mv OS_LabWorks_Part-1.pdf OS_Renamed.pdf => Renames the file into a new name.
   * mv file1 file2 file3 Lab1/ => Move multiple files to an existing directory, keeping the filenames unchanged.
   * mv -f file1 Lab1/ => This command doesn’t prompt for confirmation before overwriting existing files
   * mv -i file1 Lab1/ => This command prompts for confirmation before overwriting existing files

   **Output**:

   <img src="/home/tyzrex/.config/Typora/typora-user-images/image-20230413071914703.png" alt="image-20230413071914703" style="zoom:67%;" />

   <img src="/home/tyzrex/.config/Typora/typora-user-images/image-20230413072047046.png" alt="image-20230413072047046" style="zoom:67%;" />

   ---

   <div style="page-break-after: always; break-after: page;"></div>

7. **Command Name** :   cp 

   **Syntax**: *cp* [option] [source] [target]

   **Usage**: This command is used to copy files and directories from a source to a target destination.

   **Commands Used**:

   * cp OS_Renamed.pdf Lab1/ => This copies the file to the given destination.
   * cp -r Lab1/ copiedLab1/=> This command recursively copy a directory's contents to another location (if the destination exists, the directory is copied inside it).
   * cp -i *.pdf multipleCopy/ => Copy all pdf files to a destination in user interactive mode (prompts before overwriting)

   **Output**:

   ![image-20230417082904907](/home/tyzrex/.config/Typora/typora-user-images/image-20230417082904907.png)

   ![image-20230417083339436](/home/tyzrex/.config/Typora/typora-user-images/image-20230417083339436.png)

   ---

   <div style="page-break-after: always; break-after: page;"></div>

8. **Command Name:** rm

   **Syntax:** rm [OPTION]... [FILE]...

   **Usage:** The rm command is used to remove or delete files or directories in a Unix or Linux operating system.

   **Commands Used:**

   - rm file1: Deletes a file named file1.
   - rm -r directory: Deletes a directory named directory and its contents recursively.
   - rm -f file2: Forces the deletion of a file named file2 without prompting for confirmation.

   **Output**:

   ![image-20230423221404643](/home/tyzrex/.config/Typora/typora-user-images/image-20230423221404643.png)

   ---

   <div style="page-break-after: always; break-after: page;"></div>

9. **Command Name**: mkdir

   **Syntax**: mkdir [option] directory

   **Usage**: The *mkdir* command is used to create new directories.

   **Commands Used**:

   - mkdir directory - Creates a new directory named "directory".
   - mkdir -p directory/subdirectory - Creates a new directory named "subdirectory" inside the "directory". If "directory" does not exist, it creates it as well.
   - mkdir -m 777 newdirectory - Creates a new directory named "newdirectory" with permissions set to 777.

   **Output**:

   ![image-20230423221542987](/home/tyzrex/.config/Typora/typora-user-images/image-20230423221542987.png)

   ---

   <div style="page-break-after: always; break-after: page;"></div>

10. **Command Name**: rmdir

    **Syntax**: rmdir [options] directory

    **Usage**: The rmdir command is used to remove empty directories.

    **Commands Used**:

    1. rmdir trydir: This command will remove an empty directory named directory_name in the current working directory.
    2. rmdir -v newdir: This command will remove the directory named directory_name and print a message for each directory that is removed.
    3. rmdir -p directory/subdirectory: This command will remove both the parent and child directories together.

    **Output**:

    ![image-20230423221818506](/home/tyzrex/.config/Typora/typora-user-images/image-20230423221818506.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

11. **Command Name** : chmod

    **Syntax**: *chmod* [option] [model] [file]

    **Usage**: This command is used to change the access permissions of a file or a directory.

    **Commands Used**:

    * chmod +x  helloworld.sh => This command adds executable permission to the file.
    * chmod -x helloworld.sh => This command removes executable permission of the file.
    * chmod  +rw helloworld.sh => This command adds read write permission to the file.

    **Output**:

    ![image-20230417092744887](/home/tyzrex/.config/Typora/typora-user-images/image-20230417092744887.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

12. **Command Name** : cat

    **Syntax**: *cat*

    **Usage**: This command is used to print and contatenate files to standard output.

    **Commands Used**:

    * cat helloworld.sh => It is used to display the content of the file in the terminal of the file helloworld.sh.
    * cat helloworls.sh sheesh.sh > combined.sh => It is used to concatenate multiple files into an output file.
    * cat -n combined.sh => It prints the number of all output lines.

    **Output**:

    ![image-20230417093238843](/home/tyzrex/.config/Typora/typora-user-images/image-20230417093238843.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

13. **Command Name** : chown

    **Syntax**: *chown* [option] [owner] [group] [file]

    **Usage**: This command is used to change the user and group ownership of files and directories.

    **Commands Used**:

    *  chown sulav index.html => Changes the owner of the file to the specified username.
    *  chown :sulav helloworld.sh=> Changes the group of the file to the specified group name.
    *  chown sulav:sulav file2 => Changes both the owner and group of the file to the specified user and group names.

    **Output**:

    ![image-20230423222202249](/home/tyzrex/.config/Typora/typora-user-images/image-20230423222202249.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

14. **Command Name** : echo

    **Syntax**: *echo*

    **Usage**: This command is used to print given arguements.

    **Commands Used**:

    * echo “hello world” => Prints hello world to the terminal.
    * echo -n “hello world” => Prints hello world without trailing new line.

    **Output**:

    ![image-20230417185113238](/home/tyzrex/.config/Typora/typora-user-images/image-20230417185113238.png)

    ---

15. **Command Name** : wc

    **Syntax**: *wc* [options] [file(s)]

    **Usage**: The *wc* command is primarily used for counting the number of lines, words, and characters in one or more files.

    **Commands Used**:

    * wc combined.sh => Displays the number of lines, words, and characters in the file 
    * wc -l combined.sh => Displays the number of lines in the file
    * wc -w combined.sh => Displays the number of words in the file

    **Output**:

    ![image-20230417185425371](/home/tyzrex/.config/Typora/typora-user-images/image-20230417185425371.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

16. **Command Name** : man

    **Syntax**: *man* [options] [command]

    **Usage**: The *man* command is used to display the manual page for the specified command.

    **Commands Used**:

    * man ls => Displays the manual page for ls command.
    * man -k grep => Searches the manual pages for the specified search term.
    * man -f chmod => Displays a short description of the specified command.

    **Output**:

    ![image-20230417185824077](/home/tyzrex/.config/Typora/typora-user-images/image-20230417185824077.png)

    ![image-20230417185853960](/home/tyzrex/.config/Typora/typora-user-images/image-20230417185853960.png)

    ![image-20230417185924158](/home/tyzrex/.config/Typora/typora-user-images/image-20230417185924158.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

17. **Command Name** : history

    **Syntax**: *history* [options]

    **Usage**: This command is used to view the command-line history.

    **Commands Used**:

    * history  => Displays a list of previously executed commands.
    * history 10 => Displays the last 10 executed commands.
    * history -c => Clears the command history.

    **Output**:

    ![image-20230417190608709](/home/tyzrex/.config/Typora/typora-user-images/image-20230417190608709.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

18. **Command Name** : clear

    **Syntax**: *clear*

    **Usage**: The *clear* command is used to clear the screen of the terminal

    **Commands Used**:

    * clear => Clear the screen of the terminal window.

    **Output**:

    ![image-20230417191121072](/home/tyzrex/.config/Typora/typora-user-images/image-20230417191121072.png)

    ![image-20230417191129395](/home/tyzrex/.config/Typora/typora-user-images/image-20230417191129395.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

19. **Command Name** : touch

    **Syntax**: *touch* [option] [file]

    **Usage**: The *clear* command is used to clear the screen of the terminal

    **Commands Used**:

    * touch file.txt => Creates an empty file named `file.txt`.
    * touch -t 202201010101 file.txt => Updates the modification time of `file.txt` to January 1, 2022 at 1:01 AM.

    **Output**:

    ![image-20230417191400630](/home/tyzrex/.config/Typora/typora-user-images/image-20230417191400630.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

20. **Command Name:** locate

    **Syntax:** locate [OPTION]... PATTERN...

    **Usage:** The locate command is used to find files and directories on a system by searching a prebuilt database of file names.

    **Commands Used:**

    - locate hello.php: This command will search the database for any files or directories containing the string "myfile" in their name.
    - locate -i Postdetails.jsx: This command will perform a case-insensitive search for "myfile".
    - locate -r AuthContext: This command will perform a regular expression search for "myfile".

    **Output**:

    ![image-20230423222550146](/home/tyzrex/.config/Typora/typora-user-images/image-20230423222550146.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

21. **Command Name:** netstat

    **Syntax:** netstat [options]

    **Usage:** The netstat command is used to display various information about the network connections on a system, including both incoming and outgoing connections.

    **Commands Used:**

    - netstat -a: Shows all connections and listening ports.
    - netstat -n: Shows the numerical addresses instead of host and port names.
    - netstat -t: Shows only the TCP connections.
    - netstat -u: Shows only the UDP connections.

    **Output**:

    ![image-20230423222814190](/home/tyzrex/.config/Typora/typora-user-images/image-20230423222814190.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

22. **Command Name** : df

    **Syntax**: *df* [options] [file]

    **Usage**: The *df* command gives an overview of the filesystem disk space usage.

    **Commands Used**:

    * df -h => Display all filesystems and their disk usage in human-readble form
    * df -i => Display statistics on the number of free inodes.
    * df -x tmpfs => Display filesystem but exclude the specified type tmpfs.

    **Output**:

    ![image-20230417194126097](/home/tyzrex/.config/Typora/typora-user-images/image-20230417194126097.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

23. **Command Name** : du

    **Syntax**: *du* [options] [file]

    **Usage**: The *df* command estimates and summarize file and directory space usage.

    **Commands Used**:

    * du -b copiedLab1 => List the sizes of a directory and any subdirectories in the given unit(bytes in this case). 
    * du -h => Display the disk usage of the current directory in a human-readable format
    * du -s => Display only the total disk usage of a specific file or directory

    **Output**:

    ![image-20230417194912201](/home/tyzrex/.config/Typora/typora-user-images/image-20230417194912201.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

24. **Command Name** : uname

    **Syntax**: *uname* [options] 

    **Usage**: The *uname* command prints information about the machine and operating system it is run on.

    **Commands Used**:

    * uname –all => This command prints all the information about the machine.
    * uname –nodename => This command prints the current network host name.
    * uname –kernel-release => This command prints the current kernel release.

    **Output**:

    ![image-20230423074949451](/home/tyzrex/.config/Typora/typora-user-images/image-20230423074949451.png)

    ---

25. **Command Name** : passwd

    **Syntax**: *passwd* [options] [username]

    **Usage**: The *passwd* command is used to set or change the password of a user.

    **Commands Used**:

    * passwd root : Change the password of the root user.

    **Output**:

    ![image-20230423075827172](/home/tyzrex/.config/Typora/typora-user-images/image-20230423075827172.png)

    ---

26. **Command Name** : useradd

    **Syntax**: *useradd* [options] [name]

    **Usage**: The *useradd* command creates a new user or update default new user information.

    **Commands Used**:

    * sudo useradd testtyz => Adds a new user sulav.
    * passwd -S => Gets the current status of the user.

    **Output**:

    ![image-20230423080450595](/home/tyzrex/.config/Typora/typora-user-images/image-20230423080450595.png)

    ---

27. **Command Name** : userdel

    **Syntax**: *userdel* [options] [name]

    **Usage**: The *useradd* command is used to remove a user account or remove a user from a group.

    **Commands Used**:

    * sudo userdel testtyz => Deletes the user account named testtyz

    **Output**:

    ![image-20230423080804156](/home/tyzrex/.config/Typora/typora-user-images/image-20230423080804156.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

28. **Command Name** : apt-get

    **Syntax**: *apt-get* [options] [packagename]

    **Usage**: The *apt-get* command is used to manage packages in the Debian operating system.

    **Commands Used**:

    * sudo apt-get update => Update the list of available  packages and versions
    * sudo apt-get install kitty => Install a package with the given packagename.
    * sudo apt-get remove kitty => Remove the package with the given package name.

    **Output**:

    

    ![image-20230423215753542](/home/tyzrex/.config/Typora/typora-user-images/image-20230423215753542.png)

    ![image-20230423215846575](/home/tyzrex/.config/Typora/typora-user-images/image-20230423215846575.png)

    

    ---

    <div style="page-break-after: always; break-after: page;"></div>

29. **Command Name** : ping

    **Syntax**: *ping* [options] [destination]

    **Usage**: The *ping* command is used to send ICMP ECHO_REQUEST packets to network hosts

    **Commands Used**:

    * ping google.com => Ping the given hostname 
    * ping -c 2 youtube.com => Ping the given hostname 2 times

    **Output**:

    ![image-20230423081548003](/home/tyzrex/.config/Typora/typora-user-images/image-20230423081548003.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

30. **Command Name** : find

    **Syntax**:  find [where to start searching from] [expression determines what to find] [-options] [what to find]

    **Usage**: The *find* command in UNIX is a command line utility for walking a file hierarchy. It can be used to find files and directories and perform subsequent operations on them.

    **Commands Used**:

    * find ./Lab1/ -name file1 => Searches for the files with the given name file1.
    * find ./Lab1/ -name “*.pdf” => Searches for the file with the given extension name.

    **Output**:

    ![image-20230423082353569](/home/tyzrex/.config/Typora/typora-user-images/image-20230423082353569.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

31. **Command Name** : head

    **Syntax**:  head [option] [file]

    **Usage**: The *head* command outputs the first part of files.

    **Commands Used**:

    * head –lines 2 helloworld.sh => Output the first two lines of the file helloworld.sh
    * head –lines -1 helloworld.sh => Output everything but the last 1 line of the file helloworld.sh
    * head –bytes 2 helloworld.sh => Output first 2 bytes of the file helloworld.sh

    **Output**:

    ![image-20230423082724244](/home/tyzrex/.config/Typora/typora-user-images/image-20230423082724244.png)

    ---

32. **Command Name** : rename

    **Syntax**:  rename [option] [expression] [replacement] [file]

    **Usage**: The *head* command outputs the first part of files.

    **Commands Used**:

    * rename filerenamed filerenamedonceagain * => rename the file filerenamed to filerenamedonceagain
    * rename -vn file2renamed toberenamed * => show what file is going to be renamed to given renamed filename

    **Output**:

    ![image-20230423101241818](/home/tyzrex/.config/Typora/typora-user-images/image-20230423101241818.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

33. **Command Name** : tail

    **Syntax**:  tail [option] [file]

    **Usage**: The *tail* command is used to display the last part of the file.

     **Commands Used**:

    * tail –lines 1 hello.txt => displays the last line of the file hello.txt
    * tail –lines +2 hello.txt => displays all the lines from the line 2 in the file
    * tail –bytes 10 hello.txt => displays the last 10 bytes from the file

    **Output**:

    ![image-20230423101958404](/home/tyzrex/.config/Typora/typora-user-images/image-20230423101958404.png)

    ---

34. **Command Name** : tac

    **Syntax**:  tac [option] [file]

    **Usage**: The *tac* command is used to display and concatenate files with lines in reversed order.

     **Commands Used**:

    * tac combinedrename.sh => Concatenates specific file in reverse order
    * tac combinedrename.sh –separator sheesh => It separates the content of the file “combinedrename.sh” from the string “sheesh” to rest of the content.

    **Output**:

    ![image-20230423194814229](/home/tyzrex/.config/Typora/typora-user-images/image-20230423194814229.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

35. **Command Name**: comm

    **Syntax**: *comm* [OPTION]... FILE1 FILE2

    **Usage**: The *comm* command compares two sorted files line by line and prints the lines that are unique or common between them.

    **Commands Used**:

    - comm -23 FILE1 FILE2: Prints lines that are unique to FILE1.
    - comm -13 FILE1 FILE2: Prints lines that are unique to FILE2.
    - comm -12 FILE1 FILE2: Prints lines that are common to both FILE1 and FILE2.

    **Output**:

    ![image-20230423204325086](/home/tyzrex/.config/Typora/typora-user-images/image-20230423204325086.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

36. **Command Name**: cut

    **Syntax**: *cut* [OPTION]... [FILE]...

    **Usage**: The *cut* command is used to extract sections from each line of a file or from multiple files. It can be used to extract columns from a text file or to split a line into fields based on a delimiter.

    **Commands Used**:

    1. cut -d ',' -f 1 FILE: Extracts the first column from a comma-separated file.
    2. cut -c 1-5 FILE: Extracts the first five characters from each line of a file.
    3. cut -d ' ' -f 1,3 FILE: Extracts the first and third columns from a space-separated file.

    ###### Output:

    ![image-20230423204905534](/home/tyzrex/.config/Typora/typora-user-images/image-20230423204905534.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

37. **Command Name**: sort

    **Syntax**: *sort* [option] [file]

    **Usage**: The *sort* command is used to sort the contents of a file.

    **Commands Used**:

    - sort testfile: Sorts the contents of "testfile" alphabetically.
    - sort -n testfile: Sorts the contents of "testfile" numerically.
    - sort -r testfile: Sorts the contents of "testfile" in reverse order.

    ###### Output:

    ![image-20230423205213209](/home/tyzrex/.config/Typora/typora-user-images/image-20230423205213209.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

38. **Command Name**: date

    **Syntax**: *date* [option]

    **Usage**: The *date* command is used to display the current date and time.

    **Commands Used**:

    - date: Displays the current date and time in the default format.
    - date +"%Y-%m-%d": Displays the current date in the format "YYYY-MM-DD".
    - date +"%H:%M:%S": Displays the current time in the format "HH:MM:SS".``

    ###### Output:

    ![image-20230423205351728](/home/tyzrex/.config/Typora/typora-user-images/image-20230423205351728.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

39. **Command Name**: cal

    **Syntax**: cal [option] [month] [year]

    **Usage**: The cal command is used to display a calendar for the specified month and year.

    **Commands Used**:

    - cal: Displays the calendar for the current month and year.
    - cal [month] [year]: Displays the calendar for the specified month and year. For example,cal 12 2023` displays the calendar for December 2023.
    - cal -3: Displays the current month, the previous month, and the next month.

    ###### Output: 

    ![image-20230423205533772](/home/tyzrex/.config/Typora/typora-user-images/image-20230423205533772.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

40. **Command Name**: time

    **Syntax**: *time* [command]

    **Usage**: The *time* command is used to measure the execution time of a command.

    **Commands Used**:

    - time ls: Measures the execution time of the ls command and displays the output.
    - time sleep 5: Measures the execution time of the sleep command for 5 seconds and displays the output.
    - time ./my_program: Measures the execution time of the my_program executable file and displays the output.

    ###### Output:

    ![image-20230423205802009](/home/tyzrex/.config/Typora/typora-user-images/image-20230423205802009.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

41. **Command Name**: host

    **Syntax**: host [option] [hostname]

    **Usage**: The host command is used to perform DNS lookups and display information about a hostname.

    **Commands Used**:

    - host google.com: Performs a DNS lookup for the `google.com` hostname and displays the IP address(es) associated with it.
    - host -t mx yahoo.com: Performs a DNS lookup for the `yahoo.com` hostname and displays the MX records associated with it.
    - host -a 192.168.1.1: Performs a reverse DNS lookup for the IP address `192.168.1.1` and displays the hostname associated with it.

    ###### Output:

    ![image-20230423210008159](/home/tyzrex/.config/Typora/typora-user-images/image-20230423210008159.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

42. **Command Name**: wget

    **Syntax**: wget [option] [URL]

    **Usage**: The wget command is used to download files from the web.

    **Commands Used**:

    - wget https://cdn.kernel.org/pub/linux/kernel/v5.x/linux-5.12.3.tar.xz: Downloads the tar file from the kernel.org website and saves it to the current directory.
    - wget www.google.com: Download the contents of the given URL  

    ###### Output:

    ![image-20230423210827834](/home/tyzrex/.config/Typora/typora-user-images/image-20230423210827834.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

43. **Command Name**: *id*

    **Syntax**: *id* [options] [username]

    **Usage**: Display user and group information for a specific user or the current user.

    **Commands Used**:

    - id: Display user and group information for the current user.
    - id username: Display user and group information for the specified user.
    - id -u: Display only the user ID of the current user.
    - id -g: Display only the group ID of the current user.

    ###### Output:

    ![image-20230423211031316](/home/tyzrex/.config/Typora/typora-user-images/image-20230423211031316.png)

    ---

    

44. **Command Name**: ps

    **Syntax**: *ps* [options]

    **Usage**: The *ps* command is used to display information about running processes on a Linux or Unix system.

    **Commands Used**:

    - ps: Display information about all running processes.
    - ps -u sulav: Display information about processes owned by a specific user.
    - ps -f: Display information about processes in a tree format.
    - ps -l: Display detailed information about processes.
    - ps -e: Display all processes, including those without a controlling terminal.

    ###### Output

    ![image-20230423211225770](/home/tyzrex/.config/Typora/typora-user-images/image-20230423211225770.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

45. **Command Name**: top

    **Syntax**: *top* [options]

    **Usage**: The *top* command is used to display information about running processes on a Linux or Unix system.

    **Commands Used**:

    - top: Display real-time information about the system, including CPU usage, memory usage, and running processes.
    - top -i : Do not show any idle or zombie processes.
    - top -c: Display the command name of each process.

    ###### Output:

    ![image-20230423211353163](/home/tyzrex/.config/Typora/typora-user-images/image-20230423211353163.png)

    ![image-20230423211520511](/home/tyzrex/.config/Typora/typora-user-images/image-20230423211520511.png)

    ![image-20230423211440008](/home/tyzrex/.config/Typora/typora-user-images/image-20230423211440008.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

46. **Command Name**: kill

    **Syntax**: *kill* [options] PID

    **Usage**: The *kill* command is used to send a signal to a process, allowing you to terminate it or modify its behavior.

    **Commands Used**:

    - kill PID: Terminate the process with the specified process ID.
    - kill -l: List all available signal names and numbers.
    - kill -9 32426: Terminate the process with the specified process ID using the SIGKILL signal, which cannot be caught or ignored by the process.

    ###### Output:

    ![image-20230423212247845](/home/tyzrex/.config/Typora/typora-user-images/image-20230423212247845.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

47. **Command Name**: pkill

    **Syntax**: *pkill* [options] pattern

    **Usage**: The *pkill* command is used to send a signal to one or more processes based on a pattern in their process names.

    **Commands Used**:

    - pkill processname: Send the default signal (SIGTERM) to all processes that match the specified process name.
    - pkill -f pattern: Send the default signal to all processes that match the specified pattern in their command line arguments.
    - pkill -u username: Send the default signal to all processes owned by the specified user.

    ###### Output:

    ![image-20230423212523551](/home/tyzrex/.config/Typora/typora-user-images/image-20230423212523551.png)

    ---

48. **Command Name**: killall

    **Syntax**: *killall* [options] command_name

    **Usage**: The *killall* command is used to send a signal to all processes that are associated with a given command name.

    **Commands Used**:

    - killall polybar: Send the default signal (SIGTERM) to all processes that match the specified process name.
    - killall -e polybar: Only match processes whose entire command line matches the specified process name.
    - killall -u sulav: Only match processes that are owned by the specified user.

    ###### Output

    ![image-20230423212823956](/home/tyzrex/.config/Typora/typora-user-images/image-20230423212823956.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

49. **Command Name**: bg

    **Syntax**: *bg* [job_spec]

    **Usage**: The *bg* command is used to place a suspended or stopped job in the background, allowing it to continue executing without being connected to the terminal.

    **Commands Used**:

    - bg: Place the most recent suspended or stopped job in the background.
    - bg %job_spec: Place the job with the specified job ID (job_spec) in the background.

    ###### Output:

    ![image-20230423213423780](/home/tyzrex/.config/Typora/typora-user-images/image-20230423213423780.png)

    ---

50. **Command Name:** fg

    **Syntax:** fg [job_id]

    **Usage:** The fg command is used to bring a job that is running in the background to the foreground.

    **Commands Used:**

    - fg %1: Brings the job with ID 1 to the foreground.

    ###### Output:

    ![image-20230423213545848](/home/tyzrex/.config/Typora/typora-user-images/image-20230423213545848.png)

    ---

    <div style="page-break-after: always; break-after: page;"></div>

51. **Command Name:** tar

    **Syntax:** tar [options] [file or directory]

    **Usage:** The tar command is used to create and manipulate archive files.

    **Commands Used:**

    - tar -cvf archive.tar file1 file2: Creates a new archive file named archive.tar and adds file1 and file2 to it.
    - tar -xvf archive.tar: Extracts the contents of the archive.tar file to the current directory.
    - tar -tvf archive.tar: Lists the contents of the archive.tar file

    ###### Output:

    ![image-20230423215958608](/home/tyzrex/.config/Typora/typora-user-images/image-20230423215958608.png)

    ---

52. **Command Name**: gzip

    **Syntax**: gzip [options] [file]

    **Usage**: The gzip command is used to compress files.

    **Commands Used**:

    - gzip testfile : Compresses the file named testfile.
    - gzip -r testdir : Recursively compresses all files in the directory named testdir.
    - gzip -c testfile > testfile.gz : Compresses the file named testfile and saves it as testfile.gz.

    ###### Output:

    ![image-20230423220247014](/home/tyzrex/.config/Typora/typora-user-images/image-20230423220247014.png)

    ---

    
