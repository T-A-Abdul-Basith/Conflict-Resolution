# Conflict Resolution
A small git repo to teach how someone can handle conflicts in git

This 'game' is meant to be played by three players/developers.
A designated team leader will fork this repo and add their team members as collaborators within the same project (This is done inside the website itself)

Each player must then clone this forked repo, create their own branch (on their system) to work on, write their code, and push it to the remote
> [!NOTE]
> Ensure that all players create different branch names <br>
> you may need to use ```git push -u origin <branch name>``` since the branch doesn't exist online

After this, the team leader among the 3 players will, with the help of the other 2 players, merge all the branches into the main branch.
The provided check file (```check``` for Linux, ```check.exe``` for Windows) will allow you to confirm whether merging happened successfully on your system side
> [!NOTE]
> Only the Team Leader needs to merge, as such, the check files are for them only

## Commands Used:
To clone a repo: ```git clone <link to github page>``` <br>
To create a branch: 
- Create branch (```git branch <branch name>```)
- Switch to branch (```git switch <branch name>```) <br>
To merge:
- First get all branch data (```git fetch --all```)
- Then go to main branch (```git switch main```)
- Then use ```git merge origin/<branch name 1> origin/<branch name 2> origin/<branch name 3>``` (Replace branch names)
- Then commit it (```git commit -m "<Any message>"```)
- Then push it to main on remote (```git push origin main```)
