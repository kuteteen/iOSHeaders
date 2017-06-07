//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@class NSNumber;

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent
{
    double _blockingSecureKeyLoadDuration;
    NSNumber *_perceivedTotalStartupTime;
    double _tracklistLoadDuration;
}

@property(nonatomic) double tracklistLoadDuration; // @synthesize tracklistLoadDuration=_tracklistLoadDuration;
@property(copy, nonatomic) NSNumber *perceivedTotalStartupTime; // @synthesize perceivedTotalStartupTime=_perceivedTotalStartupTime;
@property(nonatomic) double blockingSecureKeyLoadDuration; // @synthesize blockingSecureKeyLoadDuration=_blockingSecureKeyLoadDuration;
- (void).cxx_destruct;
- (id)eventPayload;
- (long long)eventCode;

@end

