//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIViewServiceDeputyXPCInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewControllerControlMessageDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>
{
}

- (id)connectionInvocation;
- (SEL)connectionSelector;
- (id)connectionProtocol;
- (id)hostObjectInterface;
- (id)exportedInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

