//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject
{
    MPModelObject *_model;
    long long _personalizationStyle;
}

@property(readonly, nonatomic) long long personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
@property(readonly, nonatomic) MPModelObject *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2;

@end

