//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QLImageData : NSObject
{
    struct CGImageSource *_imageSource;
}

- (id)type;
- (unsigned long long)count;
- (long long)orientation;
- (id)durations;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (void)dealloc;

@end

