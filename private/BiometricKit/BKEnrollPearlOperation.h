//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BiometricKit/BKEnrollOperation.h>

@interface BKEnrollPearlOperation : BKEnrollOperation
{
    _Bool _clientToComplete;
}

@property(nonatomic) _Bool clientToComplete; // @synthesize clientToComplete=_clientToComplete;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)suspendWithError:(id *)arg1;
- (_Bool)completeWithError:(id *)arg1;

// Remaining properties
@property(nonatomic) __weak id <BKEnrollPearlOperationDelegate> delegate; // @dynamic delegate;

@end
