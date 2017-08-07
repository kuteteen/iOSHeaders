//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPEmailCompatibleCaptionBarItemChild-Protocol.h>
#import <LinkPresentation/NSCopying-Protocol.h>

@class LPPadding, LPPointUnit, LPSize, UIColor;

__attribute__((visibility("hidden")))
@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying>
{
    LPSize *_size;
    LPPadding *_margin;
    LPPadding *_padding;
    long long _filter;
    UIColor *_backgroundColor;
    LPPointUnit *_backgroundInset;
    double _foregroundOpacity;
    LPPointUnit *_cornerRadius;
    double _darkeningAmount;
    UIColor *_maskColor;
}

@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(nonatomic) double darkeningAmount; // @synthesize darkeningAmount=_darkeningAmount;
@property(retain, nonatomic) LPPointUnit *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double foregroundOpacity; // @synthesize foregroundOpacity=_foregroundOpacity;
@property(retain, nonatomic) LPPointUnit *backgroundInset; // @synthesize backgroundInset=_backgroundInset;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long filter; // @synthesize filter=_filter;
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(readonly, retain, nonatomic) LPPadding *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) LPSize *size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)emailCompatibleMargin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

