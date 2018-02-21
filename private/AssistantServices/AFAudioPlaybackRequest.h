//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSURL;

@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding>
{
    float _volume;
    NSURL *_itemURL;
    NSData *_itemData;
    long long _numberOfLoops;
    double _fadeInDuration;
    double _fadeOutDuration;
    NSDictionary *_userInfo;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(readonly, nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) long long numberOfLoops; // @synthesize numberOfLoops=_numberOfLoops;
@property(readonly, copy, nonatomic) NSData *itemData; // @synthesize itemData=_itemData;
@property(readonly, copy, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithItemURL:(id)arg1 itemData:(id)arg2 numberOfLoops:(long long)arg3 volume:(float)arg4 fadeInDuration:(double)arg5 fadeOutDuration:(double)arg6 userInfo:(id)arg7;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

