//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SXPresentationAttributes : NSObject
{
    _Bool _fadeInComponents;
    _Bool _enableViewportDebugging;
    NSString *_contentSizeCategory;
    unsigned long long _presentationMode;
    unsigned long long _mediaSharingPolicy;
    struct CGSize _canvasSize;
}

@property(nonatomic) _Bool enableViewportDebugging; // @synthesize enableViewportDebugging=_enableViewportDebugging;
@property(nonatomic) unsigned long long mediaSharingPolicy; // @synthesize mediaSharingPolicy=_mediaSharingPolicy;
@property(nonatomic) _Bool fadeInComponents; // @synthesize fadeInComponents=_fadeInComponents;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

