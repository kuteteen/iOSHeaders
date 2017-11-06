//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

#import "NAIdentifiable.h"

@class MTAlarm, NSString;

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable>
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    MTAlarm *_alarm;
    NSString *_alarmIdentifier;
}

+ (id)na_identity;
@property(copy, nonatomic) NSString *alarmIdentifier; // @synthesize alarmIdentifier=_alarmIdentifier;
@property(copy, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

