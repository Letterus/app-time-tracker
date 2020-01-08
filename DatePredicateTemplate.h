//
//  DatePredicateTemplate.h
//  Time Tracker
//
//  Created by Rainer Burgstaller on 27.11.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>


@interface DatePredicateTemplate : NSPredicateEditorRowTemplate {
    NSArray *_templateViews;
    
}
    
@property(retain, nonatomic) NSArray* _templateViews;
@end
