//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCAggregateLogProfileKey.h>

@class NSString;

@interface MCAggregateLogProfilePayloadKey : MCAggregateLogProfileKey
{
    Class _payloadClass;
    NSString *_nameSuffix;
}

+ (id)payloadClass:(Class)arg1 name:(id)arg2;
@property(retain, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(nonatomic) __weak Class payloadClass; // @synthesize payloadClass=_payloadClass;
- (void).cxx_destruct;
- (unsigned long long)value;
- (id)name;

@end
