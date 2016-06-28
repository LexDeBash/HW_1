//
//  Dog.h
//  HW_1
//
//  Created by Alexey Efimov on 28.06.16.
//  Copyright © 2016 Alexey Efimov. All rights reserved.
//

#import <Realm/Realm.h>

@interface Dog : RLMObject

@property NSString *name;
@property NSData *picture;
@property NSInteger age;

@end
