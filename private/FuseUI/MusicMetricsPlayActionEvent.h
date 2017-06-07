//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicMetricsEvent.h>

@class NSDictionary;

@interface MusicMetricsPlayActionEvent : MusicMetricsEvent
{
    unsigned long long _index;
    NSDictionary *_storePlatformDictionary;
    unsigned long long _playActionEventType;
    long long _shuffleType;
}

@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) unsigned long long playActionEventType; // @synthesize playActionEventType=_playActionEventType;
@property(copy, nonatomic) NSDictionary *storePlatformDictionary; // @synthesize storePlatformDictionary=_storePlatformDictionary;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)copyJSExtraInfo;
- (id)init;

@end
