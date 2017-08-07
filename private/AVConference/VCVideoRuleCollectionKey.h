//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionKey : NSObject <NSCopying>
{
    int _payload;
    unsigned char _transportType;
    unsigned char _encodingType;
}

@property(readonly, nonatomic) unsigned char encodingType; // @synthesize encodingType=_encodingType;
@property(readonly, nonatomic) unsigned char transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) int payload; // @synthesize payload=_payload;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3;

@end

