//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyAction.h>

#import <ContactsUI/CNPropertyBestIDSValueQueryDelegate-Protocol.h>

@class CNPropertyBestIDSValueQuery;

__attribute__((visibility("hidden")))
@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate>
{
    long long _type;
    CNPropertyBestIDSValueQuery *_bestFaceTimeQuery;
}

@property(retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery; // @synthesize bestFaceTimeQuery=_bestFaceTimeQuery;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)queryComplete;
- (void)_queryFaceTimeStatus;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (_Bool)canPerformAction;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;

@end

