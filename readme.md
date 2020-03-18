## Comands of GIT 
The main tools for check your files -> `bash  git status `
when you clone a repository should see:
```bash
 git status
On branch master  nothing to commit, working directory clean
```
it is that you do not have file tracked and modified 
## When you reate a repository in the Comand line is:
`bash echo "#project1" >> README.md ` 
```bash
git init 
git add README.MD
git commit -m "First commit"
git remote add otigin https://git.com/karlave14
git push origin master
```
# Chapter 2: Git Basic
 
## Getting a Git Repository

	There are two opcions for you obtain a Git repository 
   ### 1.Initializing a repository in an Existing Directory 
 You need to go that ptoject´s directory for linux: 
       `bash cd /home/user/my_project `
 When follow a exist project in Git should use: 
       `bash git init` <--- this creates a new subdirectory `bash .git `
 comands that specify file you want to track:
       `bash git add ` -  `bash git add FILE
 followed by a coment: `bash  git commit -m 'Commit'
  ### 2. Cloning an existing repository 
 This gets a copyof an existing Git repository: `bash git clone `
 This comand is by cloning with url: `bash git clone [url] ` 
 This its the same is: `bash mylibgit `

## Recording Changes to the repository
   ### Checking the status of your files 
  Tool you use to deretermine which diles are in which state is: `bash git status `
  Show this that clean working directory and the comand tells wich branch
   you are on and informs you that it has not diverged fromsame branch on serve: 
  ```bash git status 
	On branchmaster 
	Your branch is up-to-date with 'origin/master'
	nothing to commit, working directory clean
  ```
  If file did exist before, you see untracked like: 
 ```bash  $ echo 'My Project' > REAME
	  $ git status 
	On branch master 
	Your branch is up-to-date with 'origin/master'
	Untracked files: 
		(use "git add <file>..")
 ```
 ### Traking new files 
 To begin traking the `bash README` file:
 `bash $ git add README `
 When you run, you can see: 
 ```Bash $ git status 
	On branch ,aster 
	Your branch is up-to-date with 'origin/master'
	changes to be cmmitted: 
	(use "git restone --stage <file>..." to unstage )
    new file: README
 ```

  when you ran: `bash git init ` 
  you then ran: `bash  add <files>`
  command takes a path name for either a file: `bash git add `
 ### Staging Modified Files 
 Change a file that was alredy tracked: `bash CONTRIBUTING.md` when ypu run `bash git status ` 
 you get thet looks like this: 
  ```bash $ git status
	On branch master
	Your branch is up-to-date with 'origin/master'.
	Changes to be committed: (use "git reset HEAD <file>..." to unstage)
	new file:   README
	Changes not staged for commit: (use "git add <file>..." to update what will be committed)
    modified:   CONTRIBUTING.md  
 ```
  Which means that a file that is tracked has been modified 
    in the working directory but not yet staged.
   To stage it, you run the `bash git add` command. `bash git add` is a multipurpose command
  again show: 
  ```bash $ git add CONTRIBUTING.md
   $ git status
   On branch master
   Your branch is up-to-date with 'origin/master'.
   Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

    new file:   README
    modified:   CONTRIBUTING.md 
 ```
 ### Short Estatus 
 When you run `bash git status -s` can see your changes in a more compact way
 you get a far mere simplified output from the command: 
 ```bash $ git status -s
          M README
	MM Rakefile
	A  lib/git.rb
	M  lib/simplegit.rb
	?? LICENSE.txt
 ```
 Los archivos nuevos que no están rastreados tienen un `bash ??` a su lado, 
los archivos que están preparados tienen una `bash A` y los modificados una M. 
El estado aparece en dos columnas - la columna de la izquierda indica 
el estado preparado y la columna de la derecha indica el estado sin preparar.

### Ignoring Files 
What is .gitignore
With `bash .gitignore` you can ignore some files that generated files 
such as log files or files produced by your build system.
 Command use for ignore any file with `bash ".o" or ".a" `
 To ignore all files whose names end with a tilde (~)
 which is used by many text editors 
 ```bash 
	$ cat .gitignore
	*.[oa]
	*~  
 
```
When you ignore only files with ".a" is: `bash ignore all .a files
### Viewing your staged and unstaged changes 

This command show exactly waht you cahnged, not just which files were chnged : `bash git status -s`
This command shows you the exact lines added and removed: `bash git diff`
This command compares yout staged changes to your last commit: `bash git diff --staged`

### Committing your changes 

This command use to commit is to type: `bash git commit -m`
This command use "-a" add all with a commit: `bash git commit -a -m 'Add new benchmarks'
This command command: `bash git rm (from staging and from working dir)`

### Removing Files 
This command: `bash git rm --cached file (only from staging)`
If remove files with `bash git rim ` the file will be gone and no longer tracked. 
If you modified the file or had already added it to the staging area, you must force 
the removal with the -f option
This command removes all files that have the .log extension in the log/ directory: 
`bash $ git rm log/\*.log or $ git rm \*~`

### Moving Files 
This command is move files: `bash git mv file_from file_to (tracked as renamed)`
Also: 
```bash $ mv README.md README
	$ git rm README.md
	$ git add README
```
## Viewing the Commint History
For see the modifications that have been carried out use 
This command:`bash git log´ (look back to see the commits)
options: 
  `bash -p` (--patch)
  `bash -2 `(two last entries)
  `bash --stat` ( if you want to see some abbreviated stats for each commit)
  `--pretty`: oneline|short|full|fuller|format
 
## Undoing things 
 when you commit too early and possibly forget to add some files 
or you mess up your commit message.If you want to redo that commit 
make the additional changes you forgot
 use: `bash $git commit --amend `
if you commit and then realize you forgot to stage the changes in a file you wanted 
to add to this commit, you can do something like this:
```bash 
	$ git commit -m 'Initial commit'
	$ git add forgotten_file
	$ git commit --amend
```
### Unstaging a Staged file 
The command you use to determine the state of those two areas 
also reminds you how to undo changes to them.
 ```bash   $ git add *
   $ git status
  On branch master
  Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

    renamed:    README.md -> README
    modified:   CONTRIBUTING.md
```

## Working with remotes
  Remote repositories are versions of your project that are hosted on the Internet or network somewhere
You can have several of them, each of which generally is either read-only or read/write for you
When you run: `bash git remote ` -- It lists the shortnames of each remote handle you’ve specified
```bash
$ git clone https://github.com/schacon/ticgit
Cloning into 'ticgit'...
remote: Reusing existing pack: 1857, done.
remote: Total 1857 (delta 0), reused 0 (delta 0)
Receiving objects: 100% (1857/1857), 374.35 KiB | 268.00 KiB/s, done.
Resolving deltas: 100% (772/772), done.
Checking connectivity... done.
$ cd ticgit
$ git remote
origin
```
 The comand: `bash $ git remote -v`  shows you the URLs that Git has stored for 
  the shortname to be used when reading and writing to that remote
### Adding remote repositories 
Use of command: $ git remote
origin
$ git remote add pb https://github.com/paulboone/ticgit
$ git remote -v
origin	https://github.com/schacon/ticgit (fetch)
origin	https://github.com/schacon/ticgit (push)
pb	https://github.com/paulboone/ticgit (fetch)
pb	https://github.com/paulboone/ticgit (push)
### Fetching and publling from your remotes 
To get data from your remote projects, you can run:
 `bash $ git fetch <remote>` 
when you pushing your remotes: 
`bash  $ git push origin master ` <--- This command works only if you cloned from a server
 to which you have write access and if nobody has pushed in the meantime  
## Tagging
Listing the existing tags in Git is straightforward. Just type `bash git tag `
when you create is : `bash $ git tag -a` an -m specifie a tagging message 
 You can see the tag data along with the commit that was tagged by using the git show command:
 `bash git show  v1.4`
 ### Sharing Tags 
 commad `bash git push `doesn’t transfer tags to remote servers
 
## Git Aliases 
 
 Git doesn’t automatically infer your command if you type it in partially. 
Git doesn’t automatically infer your command if you type it in partially.
you can easily set up an alias for each command using `brash git config`
```brash
$ git config --global alias.co checkout
$ git config --global alias.br branch
$ git config --global alias.ci commit
$ git config --global alias.st status
```

# Chapther 3: Git Branching
 
## Branches in a nutshell

 
## Branch management

 
## Branching Workflows 


## Remote Branches
 
## Rebasing  
