//
//  AppDelegate.h
//  GoogleMapPod
//
//  Created by Felix ITs 07 on 06/01/18.
//  Copyright © 2018 Felix. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

