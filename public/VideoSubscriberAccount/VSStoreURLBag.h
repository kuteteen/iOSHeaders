//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSURLBag;

@interface VSStoreURLBag : NSObject
{
    SSURLBag *_bag;
}

@property(retain, nonatomic) SSURLBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

