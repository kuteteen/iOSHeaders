//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface C3DBinding : NSObject
{
    id sourceObject;
    NSString *keyPathSrc;
    NSString *keyPathDst;
    NSDictionary *options;
}

@property(retain, nonatomic) NSDictionary *options; // @synthesize options;
@property(retain, nonatomic) NSString *keyPathDst; // @synthesize keyPathDst;
@property(retain, nonatomic) NSString *keyPathSrc; // @synthesize keyPathSrc;
@property(retain, nonatomic) id sourceObject; // @synthesize sourceObject;
- (void)dealloc;

@end

