//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSIndexSet, NSMutableArray, NSString, Protocol, _UIFeedbackParameters, _UIFeedbackPattern;
@protocol UICoordinateSpace, _UIFeedbackPlayer;

@interface _UIFeedback : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _playing;
    float _position;
    _UIFeedbackParameters *_audioParameters;
    _UIFeedbackParameters *_hapticParameters;
    long long _audioOutputMode;
    long long _hapticOutputMode;
    id <_UIFeedbackPlayer> _player;
    NSMutableArray *_playerDequeueBlocks;
    _UIFeedbackPattern *_parentPattern;
    double _delay;
    NSDictionary *_debugDictionary;
    NSString *_name;
    NSString *_category;
    unsigned long long _eventToken;
    id <UICoordinateSpace> _coordinateSpace;
}

+ (id)feedbackWithDictionaryRepresentation:(id)arg1;
+ (Class)_parametersClass;
+ (Class)classForType:(id)arg1;
+ (id)type;
+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=_coordinateSpace, setter=_setCoordinateSpace:) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic, getter=_eventToken, setter=_setEventToken:) unsigned long long eventToken; // @synthesize eventToken=_eventToken;
@property(retain, nonatomic, getter=_category, setter=_setCategory:) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic, getter=_name, setter=_setName:) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic, getter=_debugDictionary) NSDictionary *debugDictionary; // @synthesize debugDictionary=_debugDictionary;
@property(nonatomic, getter=_delay, setter=_setDelay:) double delay; // @synthesize delay=_delay;
@property(nonatomic, getter=_parentPattern, setter=_setParentPattern:) __weak _UIFeedbackPattern *parentPattern; // @synthesize parentPattern=_parentPattern;
@property(retain, nonatomic, getter=_playerDequeueBlocks, setter=_setPlayerDequeueBlocks:) NSMutableArray *playerDequeueBlocks; // @synthesize playerDequeueBlocks=_playerDequeueBlocks;
@property(retain, nonatomic, getter=_player, setter=_setPlayer:) id <_UIFeedbackPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) float position; // @synthesize position=_position;
@property(nonatomic) long long hapticOutputMode; // @synthesize hapticOutputMode=_hapticOutputMode;
@property(nonatomic) long long audioOutputMode; // @synthesize audioOutputMode=_audioOutputMode;
@property(readonly, nonatomic) _UIFeedbackParameters *hapticParameters; // @synthesize hapticParameters=_hapticParameters;
@property(readonly, nonatomic) _UIFeedbackParameters *audioParameters; // @synthesize audioParameters=_audioParameters;
- (void).cxx_destruct;
- (id)description;
- (void)stop;
- (void)play;
- (void)_playAtTime:(double)arg1;
@property(readonly, nonatomic, getter=_effectiveDelay) double effectiveDelay;
@property(readonly, nonatomic, getter=_allSystemSoundIDs) NSIndexSet *allSystemSoundIDs;
@property(readonly, nonatomic, getter=_allEventTypes) NSIndexSet *allEventTypes;
@property(readonly, nonatomic, getter=_effectiveSystemSoundID) unsigned int effectiveSystemSoundID;
@property(readonly, nonatomic, getter=_effectiveEventType) unsigned long long effectiveEventType;
@property(readonly, nonatomic, getter=_effectivePlayableFeedbackTypes) unsigned long long effectivePlayableFeedbackTypes;
@property(readonly, nonatomic, getter=_effectiveEnabledFeedbackTypes) unsigned long long effectiveEnabledFeedbackTypes;
@property(readonly, nonatomic, getter=_effectiveFeedbackTypes) unsigned long long effectiveFeedbackTypes;
@property(readonly, nonatomic, getter=_playableProtocol) Protocol *playableProtocol;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly) NSMutableArray *visualizerSources;
@property(readonly) NSMutableArray *systemSoundSources;

@end

