//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SiriCoreDESPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (void)synchronize;
- (void)setDESPolicyCDNOverride:(id)arg1;
- (id)DESPolicyCDNOverride;
- (void)setDESLotteryWinOverrideIsEnabled:(_Bool)arg1;
- (_Bool)DESLotteryWinOverrideIsEnabled;
- (void)setDESRecordingAlwaysIsEnabled:(_Bool)arg1;
- (_Bool)DESRecordingAlwaysIsEnabled;

@end

