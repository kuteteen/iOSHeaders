//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NURouter.h"

@class NSString;

@interface NURouter : NSObject <NURouter>
{
    id <NUURLHandling> _urlHandler;
}

@property(readonly, nonatomic) id <NUURLHandling> urlHandler; // @synthesize urlHandler=_urlHandler;
- (void).cxx_destruct;
- (void)routeToNewsAppForYouFeed;
- (id)initWithURLHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

