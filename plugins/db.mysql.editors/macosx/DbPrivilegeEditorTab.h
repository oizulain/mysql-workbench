/*
 * Copyright (c) 2009, 2017, Oracle and/or its affiliates. All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

namespace bec {
  class DBObjectEditorBE;
}

@interface DbPrivilegeEditorTab : NSObject

@property(weak) IBOutlet NSView *view;

- (instancetype)initWithObjectEditor:(bec::DBObjectEditorBE *)be NS_DESIGNATED_INITIALIZER;

- (IBAction)addRole:(id)sender;
- (IBAction)deleteRole:(id)sender;

@end
