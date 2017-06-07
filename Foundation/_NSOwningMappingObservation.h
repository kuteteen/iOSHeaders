//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/_NSConcreteObservation.h>

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSOwningObserver-Protocol.h>

@class NSObservation, NSString;

__attribute__((visibility("hidden")))
@interface _NSOwningMappingObservation : _NSConcreteObservation <NSOwningObserver, NSObservable>
{
    NSObservation *_ownedObservation;
}

- (void)setObservation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

