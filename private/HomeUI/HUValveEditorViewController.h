//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HUValveEditorItemManager;

@interface HUValveEditorViewController : HUItemTableViewController
{
    HUValveEditorItemManager *_valveEditorItemManager;
}

@property(retain, nonatomic) HUValveEditorItemManager *valveEditorItemManager; // @synthesize valveEditorItemManager=_valveEditorItemManager;
- (void).cxx_destruct;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithSourceItem:(id)arg1 editorMode:(unsigned long long)arg2;

@end

