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

3. **Command Name** : 

   **Syntax**:

   **Usage**:

   **Commands Used**:

   * =>
   * =>

   **Output**:

   

   ---

   <div style="page-break-after: always; break-after: page;"></div>

4. **Command Name** : su/sudo

   **Syntax**: 

   **Usage**: 

   **Commands Used**:

   * =>
   * =>

   **Output**:

   ---

   <div style="page-break-after: always; break-after: page;"></div>

5. **Command Name** : pwd

   **Syntax**: *pwd*

   **Usage**: This command prints the name of the current/working directory

   **Commands Used**:

   * pwd => Prints the name of the current/working directory
   * =>

   **Output**:

   

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

8. **Command Name** : rm

   **Syntax**: *rm* 

   **Usage**:

   **Commands Used**:

   * =>
   * =>

   **Output**:

   ---

9. **Command Name** : cd 

   **Syntax**:

   **Usage**:

   **Commands Used**:

   * =>
   * =>

   **Output**:

   ---

10. **Command Name** : cd 

    **Syntax**:

    **Usage**:

    **Commands Used**:

    * =>
    * =>

    **Output**:

    ---

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

13. **Command Name** : chown

    **Syntax**: *chown* [option] [owner] [group] [file]

    **Usage**: This command is used to change the user and group ownership of files and directories.

    **Commands Used**:

    *  =>
    * =>

    **Output**:

    ---

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

18. **Command Name** : clear

    **Syntax**: *clear*

    **Usage**: The *clear* command is used to clear the screen of the terminal

    **Commands Used**:

    * clear => Clear the screen of the terminal window.

    **Output**:

    ![image-20230417191121072](/home/tyzrex/.config/Typora/typora-user-images/image-20230417191121072.png)

    ![image-20230417191129395](/home/tyzrex/.config/Typora/typora-user-images/image-20230417191129395.png)

    ---

19. **Command Name** : touch

    **Syntax**: *touch* [option] [file]

    **Usage**: The *clear* command is used to clear the screen of the terminal

    **Commands Used**:

    * touch file.txt => Creates an empty file named `file.txt`.
    * touch -t 202201010101 file.txt => Updates the modification time of `file.txt` to January 1, 2022 at 1:01 AM.

    **Output**:

    ![image-20230417191400630](/home/tyzrex/.config/Typora/typora-user-images/image-20230417191400630.png)

    ---

20. **Command Name** : locate

    **Syntax**: *locate* [option] [file]

    **Usage**: The *locate* command is used to find filenames quickly.

    **Commands Used**:

    * touch file.txt: Creates an empty file named `file.txt`.
    * touch -t 202201010101 file.txt: Updates the modification time of `file.txt` to January 1, 2022 at 1:01 AM.

    **Output**:

    ---

21. **Command Name** : netstat

    **Syntax**: *netstat* [options]

    **Usage**: The *netstat* command displays network related information such as open connections, open socket ports, etc.

    **Commands Used**:

    * touch file.txt: Creates an empty file named `file.txt`.
    * touch -t 202201010101 file.txt: Updates the modification time of `file.txt` to January 1, 2022 at 1:01 AM.

    **Output**:

    ---

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

28. **Command Name** : apt-get

    **Syntax**: *apt-get* [options] [packagename]

    **Usage**: The *apt-get* command is used to manage packages in the Debian operating system.

    **Commands Used**:

    * sudo apt-get update => Update the list of available  packages and versions
    * sudo apt-get install kitty => Install a package with the given packagename.
    * sudo apt-get remove kitty => Remove the package with the given package name.

    **Output**:

    ---

29. **Command Name** : ping

    **Syntax**: *ping* [options] [destination]

    **Usage**: The *ping* command is used to send ICMP ECHO_REQUEST packets to network hosts

    **Commands Used**:

    * ping google.com => Ping the given hostname 
    * ping -c 2 youtube.com => Ping the given hostname 2 times

    **Output**:

    ![image-20230423081548003](/home/tyzrex/.config/Typora/typora-user-images/image-20230423081548003.png)

    ---

30. **Command Name** : find

    **Syntax**:  find [where to start searching from] [expression determines what to find] [-options] [what to find]

    **Usage**: The *find* command in UNIX is a command line utility for walking a file hierarchy. It can be used to find files and directories and perform subsequent operations on them.

    **Commands Used**:

    * find ./Lab1/ -name file1 => Searches for the files with the given name file1.
    * find ./Lab1/ -name “*.pdf” => Searches for the file with the given extension name.

    **Output**:

    ![image-20230423082353569](/home/tyzrex/.config/Typora/typora-user-images/image-20230423082353569.png)

    ---

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

33. **Command Name** : tail

    **Syntax**:  head [option] [file]

    **Usage**: The *rename* command is used to rename the files.

     **Commands Used**:

    * rename filerenamed filerenamedonceagain * => rename the file filerenamed to filerenamedonceagain
    * rename -vn file2renamed toberenamed * => show what file is going to be renamed to given renamed filename

    **Output**:

    

    ---

34. 

    ​    
