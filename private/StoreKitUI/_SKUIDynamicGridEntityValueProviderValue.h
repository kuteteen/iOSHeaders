//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IKEntityValueProviding;

@interface _SKUIDynamicGridEntityValueProviderValue : NSObject
{
    id <IKEntityValueProviding> _entityValueProvider;
    long long _sectionIndex;
}

@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) id <IKEntityValueProviding> entityValueProvider; // @synthesize entityValueProvider=_entityValueProvider;
- (void).cxx_destruct;

@end
