//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLAsynchronousOperation.h>

@class QLItem, UIImage;
@protocol QLItemThumbnailGeneratorProtocol;

__attribute__((visibility("hidden")))
@interface QLItemThumbnailGenerationOperation : QLAsynchronousOperation
{
    UIImage *_thumbnail;
    id <QLItemThumbnailGeneratorProtocol> _generator;
    QLItem *_item;
    double _scale;
    struct CGSize _size;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) QLItem *item; // @synthesize item=_item;
@property(retain, nonatomic) id <QLItemThumbnailGeneratorProtocol> generator; // @synthesize generator=_generator;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (void)main;
- (id)initWithThumbnailGenerator:(id)arg1 item:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4;

@end

