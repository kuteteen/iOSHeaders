//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRCarKitServiceClient;

@interface CRUsageInformation : NSObject
{
    CRCarKitServiceClient *_serviceClient;
}

@property(retain, nonatomic) CRCarKitServiceClient *serviceClient; // @synthesize serviceClient=_serviceClient;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldSuggestCarPlayTips;
- (id)init;

@end

