//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXShareInteractionHandlerFactory.h"

@class NSString, NUVideoViewController;

@interface NUVideoShareInteractionHandlerFactory : NSObject <SXShareInteractionHandlerFactory>
{
    NUVideoViewController *_videoViewController;
    id <NUVideoActivityViewControllerFactory> _activityViewControllerFactory;
}

@property(readonly, nonatomic) id <NUVideoActivityViewControllerFactory> activityViewControllerFactory; // @synthesize activityViewControllerFactory=_activityViewControllerFactory;
@property(readonly, nonatomic) __weak NUVideoViewController *videoViewController; // @synthesize videoViewController=_videoViewController;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoViewController:(id)arg1 activityViewControllerFactory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

