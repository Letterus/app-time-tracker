#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
@class MainController;

@interface StartTaskMenuDelegate : NSObject {
    MainController *_controller;
}

-(id) initWithController:(MainController*) controller;
@end
