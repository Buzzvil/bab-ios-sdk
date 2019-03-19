//
//  BABAdLauncher.h
//  BAB
//
//  Created by Jaehee Ko on 30/01/2019.
//  Copyright © 2019 Buzzvil. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@class BABAd;

@protocol BABAdLauncher <NSObject>

- (void)openUrl:(NSURL *)url forAd:(BABAd *)ad;

@end

NS_ASSUME_NONNULL_END
