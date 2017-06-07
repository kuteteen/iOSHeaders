//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSNowPlayingArtworkRequest : HSRequest
{
    unsigned int _interfaceID;
    unsigned int _playQueueIndex;
    struct CGSize _maximumSize;
}

@property(readonly, nonatomic) unsigned int playQueueIndex; // @synthesize playQueueIndex=_playQueueIndex;
@property(readonly, nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 maximumSize:(struct CGSize)arg2 playQueueIndex:(unsigned int)arg3;

@end
