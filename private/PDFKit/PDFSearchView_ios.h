//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <PDFKit/UITableViewDataSource-Protocol.h>
#import <PDFKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PDFDocument, PDFSearchViewPrivate;
@protocol PDFSearchViewDelegate;

@interface PDFSearchView_ios : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    PDFSearchViewPrivate *_private;
}

- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_commonInit;
- (void)beginFindString:(id)arg1;
- (void)findString:(id)arg1;
- (void)clearSearchSelections;
@property(retain, nonatomic) NSArray *searchSelections;
@property(nonatomic) __weak id <PDFSearchViewDelegate> searchViewDelegate;
@property(retain, nonatomic) PDFDocument *document;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
