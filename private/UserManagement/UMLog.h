//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMLog : NSObject
{
    unsigned long long _type;
}

+ (id)fault;
+ (id)error;
+ (id)debug;
+ (id)info;
+ (id)standard;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)logMessage:(id)arg1;
- (void)logPrivateFormat:(id)arg1;
- (void)logPublicFormat:(id)arg1;

@end

