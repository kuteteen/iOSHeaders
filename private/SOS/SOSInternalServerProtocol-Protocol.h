//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOSServerProtocol.h"

@protocol SOSInternalServerProtocol <SOSServerProtocol>
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (void)dismissSOSWithCompletion:(void (^)(_Bool))arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
@end

