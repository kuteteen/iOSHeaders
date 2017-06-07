//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, NSString;

@protocol CNContactViewHostProtocol <NSObject>
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)isPresentingFullscreen:(_Bool)arg1;
- (void)didDeleteContact:(CNContact *)arg1;
- (void)didCompleteWithContact:(CNContact *)arg1;
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(NSString *)arg3;
- (_Bool)shouldPerformDefaultActionForContact:(CNContact *)arg1 propertyKey:(NSString *)arg2 propertyIdentifier:(NSString *)arg3;
@end

