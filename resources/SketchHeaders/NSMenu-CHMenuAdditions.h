//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenu.h"

@interface NSMenu (CHMenuAdditions)
- (void)addItemsFromArray:(id)arg1;
- (void)insertItemsFromArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isInMainMenu;
- (id)addItemWithTitle:(id)arg1 font:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)addSmallItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)addSmallItalicItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 submenu:(id)arg4;
- (id)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 representedObject:(id)arg4;
- (id)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)addItemWithTruncatedTitle:(id)arg1 small:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)addItemWithTitle:(id)arg1 small:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2;
@end

