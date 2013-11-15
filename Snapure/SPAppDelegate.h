//
//  SPAppDelegate.h
//  Snapure
//
//  Created by reeze on 13-11-15.
//  Copyright (c) 2013年 simpie.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SPAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
