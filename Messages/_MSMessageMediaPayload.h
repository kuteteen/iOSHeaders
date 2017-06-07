//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, UIImage;

@interface _MSMessageMediaPayload : NSObject <NSSecureCoding>
{
    _Bool _isSticker;
    UIImage *_image;
    NSURL *_mediaURL;
    NSString *_mediaType;
    NSString *_text;
    NSData *_mediaData;
    NSString *_mediaFilename;
    NSData *_data;
    NSString *_accessibilityLabel;
    NSDictionary *_attributionInfo;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *mediaFilename; // @synthesize mediaFilename=_mediaFilename;
@property(copy, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSticker:(id)arg1;

@end

