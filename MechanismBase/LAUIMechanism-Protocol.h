//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MechanismBase/LAContextExternalizationProt-Protocol.h>

@class NSDictionary, NSError;

@protocol LAUIMechanism <LAContextExternalizationProt>
- (void)internalInfoWithReply:(void (^)(NSDictionary *))arg1;
- (void)uiFailureWithError:(NSError *)arg1;
- (void)uiSuccessWithResult:(NSDictionary *)arg1;
- (void)uiEvent:(long long)arg1 options:(NSDictionary *)arg2;
@end

