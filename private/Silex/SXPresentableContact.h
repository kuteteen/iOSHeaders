//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SXPresentableContact : NSObject
{
    NSString *_email;
    NSString *_phoneNumber;
}

@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithEmail:(id)arg1;

@end

