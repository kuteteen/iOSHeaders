//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PKPass;

@interface PKEditPendingCacheRequest : NSObject
{
    _Bool _fullPass;
    _Bool _stacked;
    NSString *_cacheKey;
    PKPass *_pass;
    CDUnknownBlockType _completionBlock;
    struct CGSize _imageSize;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool stacked; // @synthesize stacked=_stacked;
@property(nonatomic) _Bool fullPass; // @synthesize fullPass=_fullPass;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;

@end
