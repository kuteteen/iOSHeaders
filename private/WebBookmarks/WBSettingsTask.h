//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBWebsiteDataRecord;

@interface WBSettingsTask : NSObject
{
    long long _taskType;
    WBWebsiteDataRecord *_websiteDataRecord;
}

+ (id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg1;
+ (id)taskWithType:(long long)arg1;
@property(readonly, nonatomic) WBWebsiteDataRecord *websiteDataRecord; // @synthesize websiteDataRecord=_websiteDataRecord;
@property(readonly, nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 websiteDataRecord:(id)arg2;

@end

