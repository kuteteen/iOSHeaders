//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIImage, NSString;

__attribute__((visibility("hidden")))
@interface SCNRenderTarget : NSObject
{
    CDStruct_fd8065c6 _description;
    // Error parsing type: , name: _size
    CIImage *_ciImage;
    id _texture;
    NSString *_name;
    long long _referenceCount;
    long long _timeStamp;
}

@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) long long referenceCount; // @synthesize referenceCount=_referenceCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id texture; // @synthesize texture=_texture;
- (id)ciImage;
- (_Bool)matchesDescription:(CDStruct_fd8065c6 *)arg1 size: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) unsigned char renderBufferFormat;
@property(readonly, nonatomic) _Bool viewportDependant;
- (id)description;
- (void)dealloc;
- (id)initWithDescription:(CDStruct_fd8065c6 *)arg1 size: /* Error: Ran out of types for this method. */;

@end

