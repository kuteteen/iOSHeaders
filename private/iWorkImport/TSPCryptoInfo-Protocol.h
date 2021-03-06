//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SFUCryptoKey;

@protocol TSPCryptoInfo <NSObject>
@property(readonly, nonatomic) unsigned long long decodedLength;
@property(readonly, nonatomic) _Bool hasDecodedLength;
@property(readonly, nonatomic) NSArray *blockInfos;
@property(readonly, nonatomic) unsigned long long preferredBlockSize;
@property(readonly, nonatomic) SFUCryptoKey *cryptoKey;
- (id <TSPMutableCryptoInfo>)mutableCryptoInfoCopy;
@end

