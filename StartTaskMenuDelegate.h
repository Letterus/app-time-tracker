#import <Cocoa/Cocoa.h>
@class MainController;

@interface StartTaskMenuDelegate : NSObject <NSMenuDelegate> {
    MainController *_controller;
}

-(id) initWithController:(MainController*) controller;
@end
