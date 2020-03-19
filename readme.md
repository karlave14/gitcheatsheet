## Comands of GIT 
The main tools for check your files -> `  git status `
when you clone a repository should see:
```
 git status
On branch master  nothing to commit, working directory clean
```
it is that you do not have file tracked and modified 
## When you reate a repository in the Comand line is:
` echo "#project1" >> README.md ` 
```
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
       `cd /home/user/my_project `
 When follow a exist project in Git should use: 
       ` git init` <--- this creates a new subdirectory `bash .git `
 comands that specify file you want to track:
       ` git add ` -  `bash git add FILE
 followed by a coment: `bash  git commit -m 'Commit'
  ### 2. Cloning an existing repository 
 This gets a copy of an existing Git repository: ` git clone `
 This comand is by cloning with url: ` git clone [url] ` 
 This its the same is: ` mylibgit `

## Recording Changes to the repository
   ### Checking the status of your files 
  Tool you use to deretermine which diles are in which state is: ` git status `
  Show this that clean working directory and the comand tells wich branch
   you are on and informs you that it has not diverged fromsame branch on serve: 
  ``` git status 
	On branchmaster 
	Your branch is up-to-date with 'origin/master'
	nothing to commit, working directory clean
  ```
  If file did exist before, you see untracked like: 
 ``` $ echo 'My Project' > REAME
	  $ git status 
	On branch master 
	Your branch is up-to-date with 'origin/master'
	Untracked files: 
		(use "git add <file>..")
 ```
 ### Traking new files 
 To begin traking the `bash README` file:
 ` $ git add README `
 When you run, you can see: 
 ``` $ git status 
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
  ``` $ git status
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
  ``` $ git add CONTRIBUTING.md
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
 ``` $ git status -s
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
With ` .gitignore` you can ignore some files that generated files 
such as log files or files produced by your build system.
 Command use for ignore any file with `bash ".o" or ".a" `
 To ignore all files whose names end with a tilde (~)
 which is used by many text editors 
 ``` 
	$ cat .gitignore
	*.[oa]
	*~  
 
```
When you ignore only files with ".a" is: `bash ignore all .a files
### Viewing your staged and unstaged changes 

This command show exactly waht you cahnged, not just which files were chnged : ` git status -s`
This command shows you the exact lines added and removed: ` git diff`
This command compares yout staged changes to your last commit: ` git diff --staged`

### Committing your changes 

This command use to commit is to type: ` git commit -m`
This command use "-a" add all with a commit: ` git commit -a -m 'Add new benchmarks'
This command command: ` git rm (from staging and from working dir)`

### Removing Files 
This command: ` git rm --cached file (only from staging)`
If remove files with ` git rim ` the file will be gone and no longer tracked. 
If you modified the file or had already added it to the staging area, you must force 
the removal with the -f option
This command removes all files that have the .log extension in the log/ directory: 
` $ git rm log/\*.log or $ git rm \*~`

### Moving Files 
This command is move files: `bash git mv file_from file_to (tracked as renamed)`
Also: 
``` $ mv README.md README
	$ git rm README.md
	$ git add README
```
## Viewing the Commint History
For see the modifications that have been carried out use 
This command:`bash git log´ (look back to see the commits)
options: 
  ` -p` (--patch)
  ` -2 `(two last entries)
  `bash --stat` ( if you want to see some abbreviated stats for each commit)
  `--pretty`: oneline|short|full|fuller|format
 
## Undoing things 
 when you commit too early and possibly forget to add some files 
or you mess up your commit message.If you want to redo that commit 
make the additional changes you forgot
 use: `bash $git commit --amend `
if you commit and then realize you forgot to stage the changes in a file you wanted 
to add to this commit, you can do something like this:
```
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
 Whe you make a commit, Git stores a commit object that contains a pointer 
 to the snapshot of the content you staged
 ` $git add REAME test.rb LICENSE `
 ` $ git commit -m 'initial commit of my project' `
 When you create the commit by running git commit, Git checksums each subdirectory
 and stores them as a tree object in the Git repositor. 
 Git then creates a commit object that has the metadata and a pointer 
 to the root project tree so it can re-create that snapshot when needed.
 ### Creating a new branch 
 when you make a nwe branch doing so creates a new pointer for you to move around 
 with this comand: ` $ git branch testing `
 when you running a simple  ` git log ` command that shows you where 
 the branch pointers are pointing. This option is called ` --decorate`
 ### Switching Branches 
  To switch to an existing branch, you run the git checkout command
  Switch to the new testing branch: `$ git checkout testing `
  You can also see this easily with the git log command. 
   If you run git log `--oneline --decorate --graph --all`
 
## Branch management
The git branch command does more than just create and delete branches
When run it with no arguments, you get a simple listing of your current branches
  `
  $ git branch
  iss53
* master
  testing
  `
  To see the last commit on each branch, you can run git branch -v:
  `
  $ git branch -v
  iss53   93b412c Fix javascript issue
* master  7a98805 Merge branch 'iss53'
  testing 782fd34 Add scott to the author list in the readme
  `
  The useful `--merged` and `--no-merged` options can filter this list to branches 
  that you have or have not yet merged into the branch you’re currently on.
  To see which branches are already merged into 
  the branch you’re on, you can run git branch`--merged`:
 ```
  $ git branch --merged
  iss53
* master
```  
## Branching Workflows 
   ### Long-Running Branches 
 This means you can have several branches that are always open and that
 you use for different stages of your development cycle; you can merge regularly 
 from some of them into others.
 They have another parallel branch named develop or next that they work from or use to test stability 
 but whenever it gets to a stable state, it can be merged into`master`.
  ### Topic Branches
 A topic branch is a short-lived branch that you create and use for 
 a single particular feature or related work.
 This is something you’ve likely never done with a VCS before 
 because it’s generally too expensive to create 

## Remote Branches
  Remote references are references (pointers) in your remote repositories, 
  including branches, tags, and so on 
  You can get a full list of remote references explicitly 
  with git ls-remote <remote>, or git remote show <remote> 
 Remote-tracking branch names take the form `<remote>/<branch>`.

 
## Rebasing  
   ### The Basic Rebase
  he easiest way to integrate the branches, as we’ve already covered, 
  is the merge command. It performs a three-way merge between
  the two latest branch snapshots.
You would check out the experiment branch, and then rebase it onto the master branch as follows: 
 ```
$ git checkout experiment
$ git rebase master
First, rewinding head to replay your work on top of it...
Applying: added staged command
  ```
