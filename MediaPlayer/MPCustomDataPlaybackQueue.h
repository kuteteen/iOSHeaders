//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSData, NSString;

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue
{
}

@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *identifier;
- (id)description;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2;

@end

