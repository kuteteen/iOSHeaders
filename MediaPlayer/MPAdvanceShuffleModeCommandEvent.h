//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPAdvanceShuffleModeCommandEvent : MPRemoteCommandEvent
{
    _Bool _preservesShuffleMode;
}

@property(readonly, nonatomic) _Bool preservesShuffleMode; // @synthesize preservesShuffleMode=_preservesShuffleMode;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

