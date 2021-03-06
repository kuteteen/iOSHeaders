//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUAdManagerConfigurationProvider.h"

@class FCAppConfigurationManager, NSString;

@interface NUAppConfigurationAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider>
{
    FCAppConfigurationManager *_appConfigurationManager;
}

@property(readonly, nonatomic) FCAppConfigurationManager *appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
- (void).cxx_destruct;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

