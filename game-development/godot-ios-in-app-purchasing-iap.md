


### Notes from using the IAP plugin:

readme examples have wrong variables...


## Required steps:
1) go to Must go to app connect -> agreements -> paid apps (actions)
2) add the IAP
Once the agreements are  signed it'll show up from the SDK.


## Problems
* product lookup not showing anything from iap on app connect. Do I need to approve it first?

What needs to happen on app connect for it to work in development?


* missing metadata right now (maybe that's why)

### insights
Sandbox is for testing purchases. Not for having test IAP products...


## errors encounteder during godot export of app
/Users/jacharles/dev_games/Matchy Match.xcodeproj: warning: The iOS deployment target 'IPHONEOS_DEPLOYMENT_TARGET' is set to 11.0, but the range of supported deployment target versions is 12.0 to 17.0.99. (in target 'Matchy Match' from project 'Matchy Match')
^ not terminal ^^

/Users/jacharles/dev_games/Matchy Match.xcodeproj: error: "Matchy Match" requires a provisioning profile with the In-App Purchase feature. Select a provisioning profile in the Signing & Capabilities editor. (in target 'Matchy Match' from project 'Matchy Match')
** ARCHIVE FAILED **



Good news:
xcode logs from iphone show
`client-environment-type=Sandbox}`


1. You have to create a sandbox test account
2. You have to sign in to the sandbox account when the icloud popup comes up in the app (fugly)
3. After that you can see that you are signed in to sandbox (and your normal account) in settings->app store




## Reading for how the interop between godot and ios works...
https://developer.apple.com/documentation/xcode/creating-a-multi-platform-binary-framework-bundle#Generate-the-XCFramework-bundle
