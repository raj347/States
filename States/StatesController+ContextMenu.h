//
//  StatesController+ContextMenu.h
//  States
//
//  Created by Dmitry Rodionov on 06/06/16.
//  Copyright © 2016 Internals Exposed. All rights reserved.
//

#import "StatesController.h"

/// A category that builds a context menu for selected rows
@interface StatesController (ContextMenu) <NSMenuDelegate>

- (void)menuNeedsUpdate: (NSMenu *)menu;

@end
