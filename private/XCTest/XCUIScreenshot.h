//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, UIImage, XCTImage;

@interface XCUIScreenshot : NSObject
{
    XCTImage *_internalImage;
}

+ (long long)systemScreenshotQuality;
+ (void)setSystemScreenshotQuality:(long long)arg1;
+ (void)initialize;
@property(retain) XCTImage *internalImage; // @synthesize internalImage=_internalImage;
- (id)debugQuickLookObject;
@property(readonly, copy) NSData *PNGRepresentation;
@property(readonly, copy) UIImage *image;
- (void)dealloc;
- (id)initWithImage:(id)arg1;

@end

