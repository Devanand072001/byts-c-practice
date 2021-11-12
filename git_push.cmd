@REM commit_message="Default commit"
@REM read -p "Enter commit message: " commit_message
@REM commit_message="$commit_message `date`"
@REM echo "Your commit message : $commit_message\n"
git add .
git commit -a -m "Default commit"
git push origin master
