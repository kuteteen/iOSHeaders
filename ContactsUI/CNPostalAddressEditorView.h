//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <ContactsUI/ABText-Protocol.h>
#import <ContactsUI/CNCountryPickerControllerDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class CNMutablePostalAddress, CNPostalAddress, CNPostalAddressEditorTableView, NSArray, NSDictionary, NSMutableDictionary, NSString, UIColor;
@protocol CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, CNCountryPickerControllerDelegate, ABText>
{
    CNMutablePostalAddress *_address;
    NSDictionary *_valueTextAttributes;
    id <CNPresenterDelegate> _delegate;
    CNPostalAddressEditorTableView *_tableView;
    NSDictionary *_addressFormats;
    NSArray *_cellsLayout;
    NSMutableDictionary *_textFields;
}

@property(copy, nonatomic) NSMutableDictionary *textFields; // @synthesize textFields=_textFields;
@property(copy, nonatomic) NSArray *cellsLayout; // @synthesize cellsLayout=_cellsLayout;
@property(copy, nonatomic) NSDictionary *addressFormats; // @synthesize addressFormats=_addressFormats;
@property(retain, nonatomic) CNPostalAddressEditorTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <CNPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_cellsLayoutForCountryCode:(id)arg1;
- (id)_normalizeCountryCodeToISO:(id)arg1;
- (id)_countryCode;
- (id)_addressPlaceholderForKey:(id)arg1;
- (id)_addressValueForKey:(id)arg1;
- (void)_setAddressValue:(id)arg1 forKey:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;
- (void)countryPickerDidCancel:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)textFieldChanged:(id)arg1;
- (void)_invalidateCellsLayout;
@property(copy, nonatomic) CNPostalAddress *address;
@property(copy, nonatomic) UIColor *separatorColor;
@property(copy, nonatomic) NSDictionary *ab_textAttributes;
@property(copy, nonatomic) NSString *ab_text;
@property(readonly, nonatomic) long long lineCount;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

