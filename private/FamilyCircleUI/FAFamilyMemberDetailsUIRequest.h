//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FamilyCircleUI/FAFamilyRequest.h>

@class NSNumber, NSString;

@interface FAFamilyMemberDetailsUIRequest : FAFamilyRequest
{
    NSNumber *_memberDSID;
    NSString *_memberEmail;
}

@property(copy, nonatomic) NSString *memberEmail; // @synthesize memberEmail=_memberEmail;
@property(copy, nonatomic) NSNumber *memberDSID; // @synthesize memberDSID=_memberDSID;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (_Bool)isUserInitiated;

@end

