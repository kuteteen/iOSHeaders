//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface ASDAppUsageStats : NSObject <NSCopying>
{
    NSString *_bundleID;
    double _usageTime;
    long long _usageCount;
}

@property(nonatomic) long long usageCount; // @synthesize usageCount=_usageCount;
@property(nonatomic) double usageTime; // @synthesize usageTime=_usageTime;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)formatTime:(long long)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

