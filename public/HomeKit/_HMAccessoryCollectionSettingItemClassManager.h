//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface _HMAccessoryCollectionSettingItemClassManager : NSObject
{
    NSMutableDictionary *_classes;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)sharedManager;
+ (id)defaultItemValueClasses;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;
- (id)itemValueClassesForKeyPath:(id)arg1;
- (id)init;

@end

