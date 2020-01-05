//
//  WorkPeriodMainPredicateTemplate.h
//  Time Tracker
//
//  Created by Rainer Burgstaller on 29.11.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>


@interface WorkPeriodMainPredicateTemplate : NSPredicateEditorRowTemplate {
    NSArray *_templateViews;
    IBOutlet NSObject *buttonDelegate;
}

@property(retain, nonatomic) NSArray* _templateViews;
@end
