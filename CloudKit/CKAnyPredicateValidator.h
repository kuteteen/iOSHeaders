//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKAnyPredicateValidator : CKPredicateValidatorInstance
{
    NSArray *_validators;
}

@property(retain, nonatomic) NSArray *validators; // @synthesize validators=_validators;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidators:(id)arg1;

@end

