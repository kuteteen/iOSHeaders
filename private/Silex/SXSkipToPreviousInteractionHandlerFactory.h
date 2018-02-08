//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoInteractionHandlerFactory.h"

@class NSString;

@interface SXSkipToPreviousInteractionHandlerFactory : NSObject <SXVideoInteractionHandlerFactory>
{
    id <SXVideoPlaybackSkipping> _skipper;
}

@property(readonly, nonatomic) id <SXVideoPlaybackSkipping> skipper; // @synthesize skipper=_skipper;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackSkipper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

