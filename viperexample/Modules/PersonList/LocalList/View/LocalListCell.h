//
//  LocalListCell.h
//  viperexample
//
//  Created by Igor Lipovac on 19/09/15.
//  Copyright (c) 2015 Igor Lipovac. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *reuseIdentifier = @"LocalListCell";

@interface LocalListCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;

@end
