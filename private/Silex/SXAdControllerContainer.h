//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXAdControllerContainer.h"

@class NSString, SXAdController;

@interface SXAdControllerContainer : NSObject <SXAdControllerContainer>
{
    SXAdController *_adController;
}

@property(readonly, nonatomic) SXAdController *adController; // @synthesize adController=_adController;
- (void).cxx_destruct;
- (void)registerAdController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

