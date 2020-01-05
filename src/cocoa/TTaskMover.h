//
//  TTaskMover.h
//  Time Tracker
//
//  Created by Rainer Burgstaller on 08.09.10.
//  Copyright 2010 N/A. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import "RSRTVArrayController.h"
#import "MainController.h"

@interface TTaskMover : NSObject<IMovingDelegate> {
	MainController* _mainController;
}
@property(retain,nonatomic) IBOutlet MainController* mainController;
@end
