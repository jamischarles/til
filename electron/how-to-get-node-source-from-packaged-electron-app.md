# How do I get the node source files from a packaged electron app? 

This worked amazingly!
https://medium.com/how-to-electron/how-to-get-source-code-of-any-electron-application-cbb5c7726c37

Copying in case it gets removed:
```sh
# Open terminal and install asar node module globally
$ npm install -g asar
# Go into the app’s directory, in our case it’s Slack
$ cd /Applications/Slack.app/Contents/Resources
# Create a directory to paste the content of app
$ mkdir example-sourcecode
# Unpack the app.asar file in the above directory using asar
$ asar extract app.asar example-sourcecode 
# Boom cd into it and see the source code of the app
```

Then you can modify it and re-package it and replace the file with yours. WOW
