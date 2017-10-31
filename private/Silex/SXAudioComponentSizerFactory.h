//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXComponentSizerFactory.h"

@class NSString;

@interface SXAudioComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id <SXDocumentControllerProvider> _documentControllerProvider;
}

@property(readonly, nonatomic) id <SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
- (void).cxx_destruct;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithDocumentControllerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

