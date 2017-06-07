//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface VSAccountChannels : NSObject <NSCopying>
{
    NSString *_providerID;
    NSString *_adamID;
    NSSet *_channelIDs;
    NSDictionary *_providerInfo;
}

+ (id)deserializationResultWithData:(id)arg1;
@property(copy, nonatomic) NSDictionary *providerInfo; // @synthesize providerInfo=_providerInfo;
@property(copy, nonatomic) NSSet *channelIDs; // @synthesize channelIDs=_channelIDs;
@property(copy, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)serializationResult;
- (id)serializationResultWithFormat:(unsigned long long)arg1;
- (id)init;

@end

