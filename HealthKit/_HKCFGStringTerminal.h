//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HKCFGStringTerminal : _HKCFGTerminal
{
    _Bool _caseSensitive;
    NSString *_string;
}

@property(nonatomic) _Bool caseSensitive; // @synthesize caseSensitive=_caseSensitive;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)characterSet;
- (unsigned long long)_minimumLength;
- (id)_label;
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;

@end

