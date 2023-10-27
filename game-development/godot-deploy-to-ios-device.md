# How do I deploy my game to my iphone/ipad?  


1. Export for iOS from Godot (simulator doesn't work for me. Needs real device)
  - in godot export settings ensure the devID is set properly
  - I had to ensure that my dev profile ID matched my apple dev account id. And sign in with that one to xcode.
2. Open the project in xcode.
3. Fix any problems / signing issues in xcode...

4. Connect your device to your computer.
5. In xcode go to Product->Destination and select your connected real device.
6. Select 'Build' to deploy your godot app to that device.
