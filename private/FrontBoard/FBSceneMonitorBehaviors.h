//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/NSCopying-Protocol.h>

@interface FBSceneMonitorBehaviors : NSObject <NSCopying>
{
    _Bool _monitorsCommits;
    _Bool _monitorsSettings;
    _Bool _monitorsPairingStatus;
    _Bool _monitorsClientSettings;
    _Bool _monitorsEffectiveSettings;
}

@property(nonatomic) _Bool monitorsEffectiveSettings; // @synthesize monitorsEffectiveSettings=_monitorsEffectiveSettings;
@property(nonatomic) _Bool monitorsClientSettings; // @synthesize monitorsClientSettings=_monitorsClientSettings;
@property(nonatomic) _Bool monitorsPairingStatus; // @synthesize monitorsPairingStatus=_monitorsPairingStatus;
@property(nonatomic) _Bool monitorsSettings; // @synthesize monitorsSettings=_monitorsSettings;
@property(nonatomic) _Bool monitorsCommits; // @synthesize monitorsCommits=_monitorsCommits;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

