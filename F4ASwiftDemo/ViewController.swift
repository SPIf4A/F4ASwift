//
//  ViewController.swift
//  F4ASwiftDemo
//
//  Created by Raja on 23/09/2018.
//  Copyright © 2018 Raja. All rights reserved.
//

import UIKit


class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        FantasyManager.fantasyBegin().initialize(withGameID: "5", apiKey: "25d96c538508c648ac7c4e9c89c514f9f55a05b2cbc5b4bcc34bd14e94a05ffb")
        
        FantasyManager.fantasyBegin().inView(self)
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

