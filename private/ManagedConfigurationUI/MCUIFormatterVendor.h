//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumberFormatter;

@interface MCUIFormatterVendor : NSObject
{
    NSNumberFormatter *_numberFormatter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)_localeDidChange:(id)arg1;
- (id)numberFormatter;

@end

