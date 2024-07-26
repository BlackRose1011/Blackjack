# FOR CODERS USE ONLY

g++ -Iinclude -Iconfig -Idatabase additional/*.cpp main/*.cpp -o trash/program
# config the program

./trash/program 
# Start program

cd /Users/il/Desktop/Blackjack 
# path to folder

git commit -m "name_of_commit" 
# create commit

git status 
# check file status prepared for commit

git add . 
# add all files to new commit

git push origin master 
# send commit to Github