//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Rapport/RPProfileSession.h>

@interface RPRangingSession : RPProfileSession
{
    CDUnknownBlockType _measurementHandler;
}

@property(copy, nonatomic) CDUnknownBlockType measurementHandler; // @synthesize measurementHandler=_measurementHandler;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (id)init;

@end
