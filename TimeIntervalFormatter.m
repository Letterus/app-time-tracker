//
//  TimeIntervalFormatter.m
//  Time Tracker
//
//  Created by Ivan Dramaliev on 10/18/05.
//  Copyright 2005 __MyCompanyName__. All rights reserved.
//

#import "TimeIntervalFormatter.h"


@implementation TimeIntervalFormatter

@synthesize decimalMode = _decimalMode;

+ (NSString *) secondsToString: (NSInteger) seconds
{
	NSInteger hours = seconds / 3600;
	NSInteger minutes = (seconds % 3600) / 60;
	NSInteger secs = seconds % 60;
	return [NSString stringWithFormat: @"%@%ld:%@%ld:%@%ld",
		(hours < 10 ? @"0" : @""), (long) hours,
		(minutes < 10 ? @"0" : @""), (long) minutes,
		(secs < 10 ? @"0" : @""), (long) secs];
}

+ (NSString*) secondsToDecimalHours: (NSInteger) seconds
{
    float hours = ((float) seconds) / 3600.0f;
    return [NSString stringWithFormat:@"%.2fh", hours];
}

- (NSString*) transformSeconds:(NSInteger) seconds {
    if (_decimalMode) {
        return [TimeIntervalFormatter secondsToDecimalHours: seconds];
    } else {
        return [TimeIntervalFormatter secondsToString: seconds];
    }    
}

- (id)transformedValue:(id)value {
    return [self transformSeconds: [value intValue]];
}

+ (Class) transformedValueClass 
{ 
	return [NSString class]; 
}

+ (BOOL)allowsReverseTransformation 
{ 
	return NO; 
}

@end
