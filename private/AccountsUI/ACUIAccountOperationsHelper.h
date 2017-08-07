//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;
@protocol ACUIAccountOperationsDelegate, OS_dispatch_queue;

@interface ACUIAccountOperationsHelper : NSObject
{
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_accountOperationsQueue;
    _Bool _isRemovingAccount;
    _Bool _isSavingAccount;
    id <ACUIAccountOperationsDelegate> _delegate;
}

@property _Bool isSavingAccount; // @synthesize isSavingAccount=_isSavingAccount;
@property _Bool isRemovingAccount; // @synthesize isRemovingAccount=_isRemovingAccount;
@property(nonatomic) __weak id <ACUIAccountOperationsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2 withError:(id *)arg3;
- (void)removeAccount:(id)arg1;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(_Bool)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2;
- (void)saveAccount:(id)arg1 requireVerification:(_Bool)arg2;
- (void)saveAccount:(id)arg1;
- (id)initWithAccountStore:(id)arg1;

@end

