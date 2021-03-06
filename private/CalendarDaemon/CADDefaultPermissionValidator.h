//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CADPermissionValidator.h"

@class ClientConnection, NSString;

__attribute__((visibility("hidden")))
@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator>
{
    ClientConnection *_connection;
}

@property(retain) ClientConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (_Bool)_valueForBooleanEntitlement:(id)arg1 defaultValue:(_Bool)arg2;
@property(readonly) _Bool hasCalendarToolEntitlement;
@property(readonly) _Bool hasSyncClientEntitlement;
@property(readonly) _Bool hasMigrationEntitlement;
@property(readonly) _Bool hasContactsUIEntitlement;
@property(readonly) _Bool internalAccessLevelGranted;
@property(readonly) _Bool testingAccessLevelGranted;
@property(readonly) _Bool canModifyCalendarDatabase;
@property(readonly) _Bool canMakeSpotlightChanges;
@property(readonly) _Bool canModifySuggestedEventCalendar;
- (id)initWithClientConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

