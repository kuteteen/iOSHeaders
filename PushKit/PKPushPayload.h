//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PKPushPayload : NSObject
{
    NSString *_type;
    NSDictionary *_dictionaryPayload;
}

@property(copy) NSDictionary *dictionaryPayload; // @synthesize dictionaryPayload=_dictionaryPayload;
@property(copy) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

