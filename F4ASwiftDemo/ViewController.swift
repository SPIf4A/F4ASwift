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
        
       
        
        FantasyManager.fantasyBegin().inView(self)
        // Do any additional setup after loading the view, typically from a nib.
    }
    
    
    func GameCompleted() {
       
        
        let GetMatchId = FantasyManager.fantasyBegin().getCurrentMatchID
            
        FantasyManager.fantasyBegin().update(withGameScore: "xxx", withMatchID: GetMatchId(), inView: self)
            
    }
    
    

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

