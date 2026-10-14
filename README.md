# Conflict Resolution
A small git repo to teach how someone can handle conflicts in git

This 'game' is meant to be played by three players/developers.
A designated team leader will fork this repo and add their team members as collaborators within the same project (This is done inside the website itself)

Each player must then clone this forked repo, create their own branch (on their system) to work on, write their code, and push it to the remote
> [!NOTE]
> you may need to use ```git push -u origin <branch name>``` since the branch doesn't exist online

After this, the team leader among the 3 players will, with the help of the other 2 players, merge all the branches into the main branch
> [!NOTE]
> Team Leader must first use ```git fetch --all``` and then use ```git switch main``` followed by ```git merge <branch names separated by space>``` then ```git commit -m "Merge"``` and then ```git push origin main```

The provided check file (```check``` for Linux, ```check.exe``` for Windows) will allow you to confirm whether merging happened successfully on your system side
