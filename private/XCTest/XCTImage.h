//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSCopying-Protocol.h>

@class NSData, NSString, UIImage, _XCTImageImplementation;

@interface XCTImage : NSObject <NSCopying>
{
    _XCTImageImplementation *_internalImplementation;
}

+ (id)_dataForImage:(id)arg1 quality:(long long)arg2;
+ (double)_scaleForImage:(id)arg1;
+ (id)UTIForQuality:(long long)arg1;
+ (double)compressionQualityForQuality:(long long)arg1;
@property(retain) _XCTImageImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (id)debugQuickLookObject;
- (void)_ensureImage;
@property(readonly) double scale;
@property(copy) NSString *name;
- (id)attachment;
@property(readonly, copy) UIImage *image;
@property(readonly, copy) NSData *data;
- (id)dataWithQuality:(long long)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithImage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (void)dealloc;

@end

