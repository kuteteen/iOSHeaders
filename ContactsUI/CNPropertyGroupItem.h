//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNCardGroupItem.h>

@class CNCardPropertyGroup, CNContact, CNContactProperty, CNContactStore, CNLabeledValue, CNMutableContact, NSArray, NSString, NSURL;
@protocol CNPropertyGroupItemDelegate;

@interface CNPropertyGroupItem : CNCardGroupItem
{
    _Bool _allowsIMessage;
    _Bool _allowsPhone;
    _Bool _allowsTTY;
    _Bool _allowsEmail;
    CNLabeledValue *_labeledValue;
    CNCardPropertyGroup *_group;
    NSString *_property;
    CNContact *_contact;
    id <CNPropertyGroupItemDelegate> _delegate;
    CNLabeledValue *_originalLabeledValue;
}

+ (id)newPropertyGroupItemForProperty:(id)arg1;
+ (Class)classForProperty:(id)arg1;
+ (id)propertyGroupItemWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;
+ (id)emptyValueForLabel:(id)arg1;
@property(retain, nonatomic) CNLabeledValue *originalLabeledValue; // @synthesize originalLabeledValue=_originalLabeledValue;
@property(nonatomic) _Bool allowsEmail; // @synthesize allowsEmail=_allowsEmail;
@property(nonatomic) _Bool allowsTTY; // @synthesize allowsTTY=_allowsTTY;
@property(nonatomic) _Bool allowsPhone; // @synthesize allowsPhone=_allowsPhone;
@property(nonatomic) _Bool allowsIMessage; // @synthesize allowsIMessage=_allowsIMessage;
@property(nonatomic) __weak id <CNPropertyGroupItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic) __weak CNCardPropertyGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
- (void).cxx_destruct;
- (void)saveChangesImmediately:(_Bool)arg1;
- (void)rejectSuggestion;
- (void)confirmSuggestion;
- (void)_removeSuggestion;
@property(readonly, nonatomic, getter=isSuggested) _Bool suggested;
@property(readonly, nonatomic) _Bool modified;
- (_Bool)isValidIdentifier:(id)arg1;
- (void)updateLabeledValueWithLabel:(id)arg1;
- (void)updateLabeledValueWithValue:(id)arg1;
- (id)updateWithLabel:(id)arg1 value:(id)arg2;
- (void)mergeItem:(id)arg1;
- (id)bestLabel:(id)arg1;
- (id)bestValue:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (_Bool)isEquivalentToItem:(id)arg1;
@property(readonly, nonatomic) NSURL *defaultActionURL;
- (_Bool)isFavoriteOfActionType:(id)arg1 bundleIdentifier:(id)arg2;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) _Bool canRemove;
@property(readonly, nonatomic, getter=isReadonly) _Bool readonly;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)replacementForInvalidValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (id)valueForDisplayString:(id)arg1;
- (id)displayStringForValue:(id)arg1;
@property(readonly, nonatomic) __weak NSArray *supportedLabels;
@property(readonly, nonatomic) NSString *placeholderString;
@property(readonly, nonatomic) NSString *editingStringValue;
@property(readonly, nonatomic) NSString *displayLabel;
@property(readonly, nonatomic) NSString *displayValue;
@property(readonly, nonatomic) id normalizedValue;
@property(readonly, nonatomic) CNContactStore *contactStore;
@property(readonly, nonatomic) CNMutableContact *mutableContact;
- (int)labeledValueMultiValueIdentifierForChosenSourceContact;
- (int)anyContactLegacyIdentifier;
@property(readonly, nonatomic) CNContactProperty *contactProperty;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;
- (id)initWithLabel:(id)arg1 group:(id)arg2 contact:(id)arg3;
- (id)initWithGroup:(id)arg1;
- (id)init;

@end

