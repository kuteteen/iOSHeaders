//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _HKCDADocumentExtractedFields : NSObject
{
    NSDate *_extractedDate;
    NSString *_extractedTitle;
    NSString *_extractedPatient;
    NSString *_extractedAuthorName;
    NSString *_extractedCustodianName;
}

@property(readonly, nonatomic) NSString *extractedCustodianName; // @synthesize extractedCustodianName=_extractedCustodianName;
@property(readonly, nonatomic) NSString *extractedAuthorName; // @synthesize extractedAuthorName=_extractedAuthorName;
@property(readonly, nonatomic) NSString *extractedPatient; // @synthesize extractedPatient=_extractedPatient;
@property(readonly, nonatomic) NSString *extractedTitle; // @synthesize extractedTitle=_extractedTitle;
@property(readonly, nonatomic) NSDate *extractedDate; // @synthesize extractedDate=_extractedDate;
- (void).cxx_destruct;
- (id)_parseCDADate:(id)arg1;
- (id)_personNameFrom:(id)arg1 familyTagRule:(id)arg2 givenTagRule:(id)arg3 nilOnFail:(_Bool)arg4;
- (id)_firstFrom:(id)arg1 tagRule:(id)arg2 nilOnFail:(_Bool)arg3;
- (void)extractHeaderFieldsFromDocumentData:(id)arg1;
- (id)initWithDocumentData:(id)arg1;

@end

