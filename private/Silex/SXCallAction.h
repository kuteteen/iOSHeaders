//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXAction.h>

@class NSString;

@interface SXCallAction : SXAction
{
    NSString *_phoneNumber;
}

@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)handlerClass;
- (id)initWithPhoneNumber:(id)arg1 addition:(id)arg2;
- (id)initWithAddition:(id)arg1;

@end
