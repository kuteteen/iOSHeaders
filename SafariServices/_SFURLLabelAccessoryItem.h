//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFCrossfadingImageView;

__attribute__((visibility("hidden")))
@interface _SFURLLabelAccessoryItem : NSObject
{
    SFCrossfadingImageView *_view;
    double _spacing;
    double _squishedSpacing;
    double _verticalOffset;
    struct CGSize _size;
    struct CGSize _squishedSize;
    struct CGSize _interpolatedSize;
}

@property(nonatomic) struct CGSize interpolatedSize; // @synthesize interpolatedSize=_interpolatedSize;
@property(nonatomic) struct CGSize squishedSize; // @synthesize squishedSize=_squishedSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(nonatomic) double squishedSpacing; // @synthesize squishedSpacing=_squishedSpacing;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(retain, nonatomic) SFCrossfadingImageView *view; // @synthesize view=_view;
- (void).cxx_destruct;

@end

