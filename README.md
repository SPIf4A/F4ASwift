# F4ASwiftDemo
Fantasy4All Installation Guide

 Swift

Get Started

Prerequisites

Use Xcode 8.0 or higher
Target iOS 8.0 or higher
 

1. Import F4A SDK

    - Drag F4A.framework into your project folder

    - Now, open Build Phases -> Link Binary With Libraries. And click on '+' button.

    - Then click on "Add Other" instead of adding the default framework.

    - Make Sure F4A.framework added in both "Embedded Binaries" and "Linked Framework and Libraries"

Now, you have added framework successfully. That's it.

 You have to set the NSAllowsArbitraryLoads key to YES under NSAppTransportSecurity dictionary in your .plist file.

<key>NSAppTransportSecurity</key>

    <dict>

    <key>NSAllowsArbitraryLoads</key>

    <true/>

    </dict>

 

2. Add Bridging Header

 

    - Add a new file to Xcode (File > New > File), then select “Source” and click   “Header File“.

    - Name your file “YourProjectName-Bridging-Header.h”. 

    - Create the file.

    - Now click target->Build Settings -> Objective-C Bridging Header. Here you will need to add the name/path of your header file

 

Open YourProjectName-Bridging-Header.h and import this bleow line

#import <F4A/FantasyManager.h>

 

 

3. Initialize F4A

Apps should initialize the F4A SDK by calling the

InitializeWithGameID

class method in FantasyManager and passing it their GameID and APIKey

 

Here's an example of how to call the InitializeWithGameID: method in your AppDelegate.swift:

 

 func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {

       

FantasyManager.fantasyBegin().initialize(withGameID: "xxx", apiKey: "xxxxxx")

        return true

    }

 

4. Start F4A Game

Apps should initialize the F4A SDK by calling the

FantasyBegin class method in FantasyManager

 

Here's an example of how to Start F4A FantasyBegin: method in your MyViewController.swift

 

override func viewDidLoad() {

        super.viewDidLoad()

        

        FantasyManager.fantasyBegin().inView(self)

    }

 

Now you can see one floating f4A button over your MyViewController.

Click on that button brings you to the fantasy game.

 

 

5. Update Your Player Score in  F4A Game

Apps should initialize the F4A SDK by calling the

FantasyBegin class method in FantasyManager

 

Here's an example of how to Update Score F4A UpdateWithGameScore: method in your PlayFinishedViewController.swift 

 

func gameCompleted() {

let GetMatchId = FantasyManager.fantasyBegin().getCurrentMatchID

FantasyManager.fantasyBegin().update(withGameScore: "xxx", withMatchID: GetMatchId, inView: self)

}

 

 

 

 

 

 

 
