//
//  AppDelegate.h
//  PrintTest
//
//  Created by 张慧慧 on 2019/10/29.
//  Copyright © 2019 Aisino. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

