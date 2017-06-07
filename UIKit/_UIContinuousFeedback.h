//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFeedback.h>

#import <UIKit/_UIFeedbackContinuousPlayable-Protocol.h>

@class NSString;

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable>
{
    double _duration;
    long long _type;
}

+ (id)continuousFeedbackForType:(long long)arg1;
+ (id)type;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)_debugDictionary;
- (void)_playAtTime:(double)arg1;
- (unsigned long long)_effectiveEventType;
- (id)_playableProtocol;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly) Class superclass;

@end

