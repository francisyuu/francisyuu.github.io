# Quick Key Mannual
created by francisyuu  
***
## vim
### normal
- h l k j : move the cursor
- H L K J : move to the line head/line end/head line/end line 
- \> : add tab,example:>10j 
- \< : delete tab,example:<<
- \<C-b> : move page back
- \<C-f> : move page front
- \<C-j> : change window size
- \<C-i> : quick jump next,use together with YcmGoTo
- \<C-o> : quick jump back
- \<C-p> : CtrlP plug
- \<C-s> : quick save
- \<space>j : move between window
- \<space>- : split window
- \<space>_ : vertical split window
- \<space>c : new tab
- \<space>n : next tab
- \<space>p : previous tab
- \<space>w : quick save
- \<space>q : quick quit
- \<space>S : quick source vimrc
- \<space>z : quick zoom
- \<space>t : tagbar plug
- \<space>T : NERDTree plug
- \<space>f : easymotion plug
### visual
- i( :in () select
- ib : =i(
- iB : =i{
- ip : in select paragraph,split by \n
- is : in select sentence,split by .
- iw : in select word,split by similar content
- iW : in select WORD,split by space
- it : in select tag
- a( : include () select
- ~  : toggle case
### plugin
#### surround
- cs"' : change surroundings from " to '
- ds" : delete surroundings "
- ysiw( : you surrund iw(text object) with (),iw can be vim motion or text object(see visual for more info)
- ySs( : you surrund this line within()in a new line.
#### nerd commenter
- \<space>cb :=cc with both sides aligned
- \<space>ci :=toggle comment current line or selected
- \<space>cA :=Adds comment to the end of line
- \<space>ca :=Switches to the alternative set of delimiters.
- \<space>cy :=cc except that the commented line(s) are yanked first.
#### CtrlP
- \<C-f> : front mode
- \<C-b> : back mode
- \<C-d> : switch to filename only search instead of full path.
- \<C-r> : switch to regexp mode.
- \<C-j> : move j
- \<C-t> : open in new tab
- \<C-x> : open in new window 
- \<C-v> : open in new window vertical
- \<C-p> : search history,C-n for next
#### easymotion
- f : single character find
- \<space>f : double character find
#### youcompleteme
- \<space>d : quick goto
- \<space>y : symbol find,<C-j>to move, <C-c>to quit
***
## chezmoi
- chezmoi cd
- chezmoi re-add
- git add .
- git commit
- git push
- chezmoi diff
- chezmoi apply
- chezmoi -nv apply
- exit
***
## tree
- -d : only show dir
- -D : show modified time
- -f : show full path
- -p : show permission mode
- -s : show size
- -t : sort by time
- -L : level depth
- example: tree -DfpstL 3
***
## git
- git init
- git clone [url]
- git add [file/dir/.] : .means all files in current dir
- git rm [file/dir] :remove file from cache and workspace
  - -f : force rm modified files in cache
  - --cached : only remove them from tracing list
  - -r : recursive if rm a dir
- git add [file] : 
- git status -s : for short output
- git diff : show all diff between now and cached
  - [file/dir] : specify which to show
  - [brancha]...[branchb] ： show diff between branches/commits
  - --cached : show diff between cached and last commit
- git commit
  - [file/dir] : only commit specified files
  - -m : commit message without pop-up window
  - -a : don't need to add modified files before commit,no use for new files
  - --amend : merge with last commit
- git log : show log
  - --oneline : short log
  - --graph : look like graph
  - --reverse : reverse output sort
  - --author : specify author
  - --before : --before={3.weeks.ago}
  - --after : --after={2010-04-18}
- git blame : 
  - --date : --date=relative, change date format
  - --porcelain : full information
- git reset : back to HEAD,give up cached files
  - [branch] : back to specified branch,give up cached files and commits
  - --hard : DANGEROUS, back to specified branch,give up cached files and commits and delete them
- git remote
  - -v : show all remote repository
  - show [remote] : show info of specified repository
  - add [shortname] [url] : add remote repository
  - rm [name] :remove remote repository
  - rename [oldname] [newname] : rename remote repository
- git fetch [repo]: get repo code
- git pull [repo/branch:localbranch] : git fetch and merge repo branch with localbranch
- git push [repo localbranch:repobranch] : push localbranch to repo/repobranch
  - --force : force push
- git branch
  - -d delete branch
- git checkout
  - -b create a new branch and checkout it
- git merge [brancha branchb] : merge branches
***
## shell
### keymap
- \<C-aa> : go line ahead,aa because tmux uses \<C-a> as leader key,=\<C-left>
- \<C-e> : go line end,=\<C-right>
- \<C-b> : =\<left>
- \<C-f> : =\<right>
- \<C-w> : delete previous word
- \<C-u> : delete line 
- \<C-k> : delete until line end
- \<C-t> : switch characters
- \<C-y> : paste delete cmd
- \<C-p> : previous cmd
- \<C-l> : clear screen
- \<C-s> : stop screen output
- \<C-q> : quit \<C-s> stop
- \<C-c> : kill job
- \<C-z> : suspended job background
### script
- $0 : Name of the script
- $1 to $9 : Arguments to the script. $1 is the first argument and so on.
- $@ : All the arguments
- $# : Number of arguments
- $? : Return code of the previous command
- $$ : Process identification number (PID) for the current script
- !! : Entire last command, including arguments. sudo !!
- $_ : Last argument from the last command, equals to \<esc>.
***
## makefile
- @ : do not print current command
- \- : ignore all errors while making
- $(var) : get var val
- = : recursively-Expanded

- := : simply-Expanded
- ?= : conditional assignment, do assignment if the var hasn't been defined
- += : append assignment
- $@ : target file
- $^ : list of all prerequisites
- $< : the first prerequisite
- $? : list of all prerequisites that are newer than the target
- $% : The target member's name, if the rule's target is an archive
- % : pattern match,matches a non-empty string called the "stem"
- $* : The "stem" of an implicit or pattern rule
- .PHONY : pseudo target
***
## tmux
- \<C-a>c : create tab
- \<C-a>n : next tab
- \<C-a>p : previous tab
- \<C-a>- : split window
- \<C-a>_ : vertical split window
- \<C-a>s : list sessions
- \<C-a>$ : rename session
- \<C-a>d : detach session
- \<C-a>j : swap windows
- \<C-a><up> : resize window
- \<M-j> : move between windows
- ls : list sessions,alias:tml
- new -s name : creat new session,alias:tmn
- attach -t 0 : attach session 0,alias:tma
- kill-session -t 0 : kill session 0,alias:tmk
***
## sed
***
## awk
- example : `$awk '$1>2 && $2=="Are" {print $1,$2,$3}' log.txt `
***
## tee
***
## tldr
***
## gcc
***
##
