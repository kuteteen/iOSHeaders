//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoVision/NSObject-Protocol.h>

@class NSString;
@protocol PVFaceProtocol, PVFetchResultProtocol;

@protocol PVPersonProtocol <NSObject>
@property(retain, nonatomic) id <PVFaceProtocol> keyFace;
@property(nonatomic) long long manualOrder;
@property(nonatomic) _Bool isVerified;
@property(readonly, nonatomic) long long verifiedType;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool favorite;
@property(readonly, nonatomic) unsigned long long faceCount;
@property(readonly, nonatomic) NSString *localIdentifier;
- (void)pv_addMergeCandidatePersons:(id <PVFetchResultProtocol>)arg1;
@end

