//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPModelPlayEvent, MPModelSong, NSData, NSString;

@interface MPCReportingLyricsViewEvent : NSObject
{
    MPModelSong *_modelSong;
    MPModelPlayEvent *_modelPlayEvent;
    double _visibleDuration;
    NSString *_featureName;
    NSData *_recommendationData;
    long long _sourceType;
}

@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSData *recommendationData; // @synthesize recommendationData=_recommendationData;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(nonatomic) double visibleDuration; // @synthesize visibleDuration=_visibleDuration;
@property(retain, nonatomic) MPModelPlayEvent *modelPlayEvent; // @synthesize modelPlayEvent=_modelPlayEvent;
@property(retain, nonatomic) MPModelSong *modelSong; // @synthesize modelSong=_modelSong;
- (void).cxx_destruct;

@end

