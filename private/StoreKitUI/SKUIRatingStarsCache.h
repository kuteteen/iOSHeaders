//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIImage;

@interface SKUIRatingStarsCache : NSObject
{
    NSMutableDictionary *_cachedImages;
    UIImage *_emptyStarImage;
    UIImage *_filledStarImage;
    UIImage *_halfStarImage;
}

+ (id)cacheWithProperties:(long long)arg1;
- (void).cxx_destruct;
- (id)ratingStarsImageForRating:(double)arg1;
- (id)initWithProperties:(long long)arg1;

@end
