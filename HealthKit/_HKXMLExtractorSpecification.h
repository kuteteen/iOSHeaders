//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HKXMLExtractorSpecification : NSObject
{
    NSString *_specificationString;
    NSArray *_specificationElements;
}

@property(readonly) NSArray *specificationElements; // @synthesize specificationElements=_specificationElements;
@property(readonly) NSString *specificationString; // @synthesize specificationString=_specificationString;
- (void).cxx_destruct;
- (_Bool)matchesElementStack:(id)arg1;
- (id)initWithSpecificationString:(id)arg1;

@end

