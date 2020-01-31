//
//  RadomComments.m
//  AwemeDylib
//
//  Created by xiaoyuan on 2020/1/28.
//  Copyright © 2020 enba. All rights reserved.
//

#import "RadomComments.h"

@interface RadomComments ()

@property (nonatomic, strong) NSMutableArray<NSString *> *tempCommentArray;

@end

@implementation RadomComments

+ (instancetype)sharedInstance {
    static id _instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance = [self new];
    });
    return _instance;
}

+ (NSArray<NSString *> *)getCommentArray {
    static NSArray *comments = nil;
    if (comments == nil) {
        comments = @[
           @"当你只能依靠自己时，你要当心，因为走错一步身后就是万丈深渊[啤酒][胡瓜]。", @"我是个俗气至顶的人，见山是山，见海是海，见花便是花[送心]。唯独见了你，云海开始翻涌，江潮开始澎湃，昆虫的小触须挠着全世界的痒。你无需开口，我和天地万物便通通奔向你。[玫瑰][玫瑰][玫瑰]",
            @"如果有一天，你穿上西服，成为别人的新郎，[送心]我闭口不提，曾经的疯狂。如果有一天，我穿上婚纱，成为别人的新娘，嫁给你，依然是我最初的梦想。[捂脸]",
            @"确认过眼神，我遇上对的人。[捂脸]",
            @"我真的好想你，在每一个雨季，你选择遗忘的，[送心]是我最不舍的。纸短情长啊，道不尽太多涟漪，我的故事都是关于你呀。怎么会爱上了他，并决定跟他回家，放弃了我的所有我的一切无所谓。纸短情长啊，诉不完当时年少，我的故事还是关于你呀[玫瑰]。",
                     @"从前初识这世间，万般流连，看着天边似在眼前[不失礼貌的微笑]，[送心]也甘愿赴汤蹈火去走它一遍。如今走过这世间，万般流连，翻过岁月不同侧脸，措不及防闯入你的笑颜[玫瑰]。",
        @"[送心]我做了一个梦，梦里你蓄起了长发，我们一起慢慢变老[送心]。",
        @"[送心]我对你付出的青春这么多年，换来一句谢谢你的成全。成全了你的潇洒与冒险，成全了我的碧海蓝天[玫瑰]。",
        @"[666][玫瑰]还记得你答应过我不会让我把你找不见，可你跟随那南归的候鸟飞的那么远，爱像风筝断了线，拉不住你许下的诺言。",
        @"[666][玫瑰]我曾经跨过山河大海，也穿过人山人海。我曾经拥有着一切，转眼都消散如烟[玫瑰]。",
        @"[666][玫瑰]我懵懵懂懂过了一年，这一年似乎没有改变，守着你离开后的世界，空空如也[玫瑰]。",
        @"[666][玫瑰]多热烈的白羊，多善良多抽象，多完美的她呀，却是下落不详，心好空荡，都快要失去形状[玫瑰]。",
        @"[666][玫瑰]曾经小小少年，到如今风度翩翩，还是那双桃花眼，初心仍未改变。喜欢看你笑的见牙不见脸，记忆中温柔的脸[玫瑰]。",
        @"[666][玫瑰]慢慢喜欢你，慢慢的亲密，慢慢聊自己，慢慢和你走在一起，慢慢我想配合你，慢慢把我给你[玫瑰]。",
        @"有一个地方叫稻城，我要和我最心爱的人[666][玫瑰]，[机智]一起去到那里，看蔚蓝的天空，看白色的雪山，看金黄的草地，看一场秋天的童话。[色][过年鼠][灯笼]",
                     @"哇，出不了门，只能抖音啦，[不失礼貌的微笑]在家浪里个浪，呵呵!",
                     @"我保证这是我今天刷的最后一条抖音！[赞][呲牙][微笑][耶]",
                     @"如果我用你待我的方式来待你，[机智]恐怕你早已离去，不管亲情，[不失礼貌的微笑]友情，还是爱情，凡事换个角度，假如你是我，你未必有我大度。",
                     @"看开了许多事情，没什么非你不可，也没什么不可失去。愿意留下来的人，就好好相处，彼此信任；想要远走的，就挥挥手说声抱歉，恕不远送[过年鼠][灯笼]。",
                     @"别像个怨妇一样到处挑刺，不清楚的事情不要评论，[不失礼貌的微笑]与你无关的事情不要抨击，三观正一点，爱你的人才多一点。",
                     @"无论世界是否待你温柔，请保持住你的善良，[不失礼貌的微笑]因为好运会与你不期而遇。——许灵子[过年鼠][灯笼]",
                     @"有些人，[机智][来看我]走着走着就进了心里，恰似故友；有些人，走着走着就淡出视线，难以交心；所以，人与人之间的相遇靠缘分，心与心相知靠真诚[过年鼠][灯笼]。",
                     @"熬过来是庆幸，熬不过是经历[不失礼貌的微笑]。愿你容得下生命的不完美，也经得起世事的颠簸[过年鼠][灯笼]。",
                     @"没有人能烦恼你，除非你拿别人的言行来烦恼自己。人这辈子，[不失礼貌的微笑]简简单单就是幸福，无病无灾就是顺利，平平淡淡就是真谛[过年鼠][灯笼]。",
                     @"跟我玩个性，[机智][来看我]我就让你哭的很有节奏[微笑][耶]。",
                     @"你要相信，总有人，[机智][来看我]山高路远，为你而来，护你周全。",
                     @"喜欢占八分，自尊留两分，我爱你，但我也需要爱自己[过年鼠][灯笼]。",
                     @"容我喊喊旧人的名字，[不失礼貌的微笑]拾起身后的孤影，灌一杯烈酒，重新生活[过年鼠][灯笼]。",
                     @"愿所有梦见远方的人，[不失礼貌的微笑]心有惊雷，生似静湖[过年鼠]",
                     @"我希望生活有惊喜 还希望喜欢有回应[过年鼠] ",
                     @"人言可畏 愿你能找到一[不失礼貌的微笑]个为你捂住耳朵的人[过年鼠]",
                     @"个人都不是生而伟大，而是在其成长过程中变得伟大[灯笼]",
                     @"幸得识卿桃花面，自此阡陌多暖春[灯笼]",
                     @"闲走天涯看白首，晚来一场风雪，落尽灯花，风波又起笑作罢，余生，且由他[灯笼]。",
                     @"去见你想见的人，趁阳光正好，趁微风不噪，趁他还在，趁你未老[机智][来看我]",
                     @"没有借口，没有谎言，也不会食言[机智][来看我]。",
                     @"谁我都不想等了，以后就等红灯，等雨停，等死[灯笼]。",
                     @"无聊的人会选择在一起腐烂，有趣的人才要在一起蓬荜生辉[小鼓掌][偷笑][石化]",
                     @"[小鼓掌][偷笑][石化]别否认自己 你特别好、特别温柔、特别值得",
                     @"人的一生注定会遇到两个人[微笑][耶]",
                     @"喜欢挖掘日常琐碎里深埋的小星光，[不失礼貌的微笑]愿它照亮我们的生活[微笑][耶]",
                     @"你不会遇到第二个我，友情也好，爱情也罢[微笑][耶]",
                     @"我想要陪你走到最后 就算最后没有我[微笑][耶]",
                     @"支离破碎的想起你 还是让我那么心痛[微笑][耶]",
                     @"[小鼓掌][偷笑][石化]如果说我学到了一件事 那就是男人不能信[微笑][耶]",
                     @"这笑声没有几年的哮喘是笑不出来的/这笑声和我家水壶开了是的/敷面膜的我直接笑出了皱纹！[微笑][耶] ",
                     @"[小鼓掌][偷笑][石化]你站在这别动，我去买几个橘子给你吧",
                     @"看到了有人摔倒了我毫[不失礼貌的微笑]不犹豫的点赞了[微笑][耶]！",
                     @"我做了一个梦，梦里你蓄起了长发，我们一起慢慢变老。[微笑][耶]  ",
                     @"我是个俗气至顶的人，见山是山，见海是海，见花便是花。唯独见了你，云海开始翻涌，江潮开始澎湃，昆虫的小触须挠着全世界的痒。你无需开口，我和天地万物便通通奔向你。[微笑][耶]",
                     @"[小鼓掌][偷笑][石化]如果有一天，你穿上西服，成为别人的新郎，我闭口不提，曾经的疯狂。如果有一天，我穿上婚纱，成为别人的新娘，嫁给你，依然是我最初的梦想。[微笑][耶]",
                     @"确认过眼神，我遇上对的人[玫瑰]。",
                     @"我真的好想你，在每一个雨季，你选择遗忘的，是我最不舍的。纸短情长啊，道不尽太多涟漪，我的故事都是关于你呀。怎么会爱上了他，并决定跟他回家，放弃了我的所有我的一切无所谓。纸短情长啊，诉不完当时年少，我的故事还是关于你呀。[微笑][耶]",
                     @"[小鼓掌][偷笑][石化]我曾经跨过山河大海，也穿过人山人海。我曾经拥有着一切，转眼都消散如烟。[玫瑰]",
                     @"[小鼓掌][偷笑][石化]我懵懵懂懂过了一年，这一年似乎没有改变，守着你离开后的世界，空空如也[玫瑰]。",
                     @"[小鼓掌][偷笑][石化]对不起，我是刚下载都抖音的，不懂规矩，请问是直接笑吗？还是走什么仪式！[玫瑰][玫瑰][玫瑰]",
                     @"自从有了抖音，生活其乐融融[哈哈]",
                     @"[小鼓掌][偷笑][石化]生命太短，没留时间给我们每日带着遗憾醒来。所以去爱那些对你好的人，忘掉那些不知珍惜你的人[小鼓掌][偷笑][石化]。",
                     @"一个人最好的生活状态，是该看书时看书，该玩时尽情玩，看见优秀的人欣赏，看到落魄的人也不轻视，有自己的小生活和小情趣，不用去想改变世界，努力去活出自己。没人爱时专注自己，有人爱时，有能力拥抱彼此。",
                     @"[灵机一动][耶]看清了很多人，却不能随意拆穿；讨厌着很多人，却又不能轻易翻脸。有时候，生活就是要逼自己变得逆来顺受，宠辱不惊[灵机一动][耶]。",
                     @"不哭长夜者，不足与人生。所谓的成年人就是把哭泣的声音一再调低，乃至无声的过程。待到黎明到来，擦干眼泪，再一次涌入车水马龙的街头[哈欠][大笑][打脸]。",
                     @"永远不要高估自己在别人心里的地位，这个世界上，最尴尬的事就是，别人压根没把你当回事，你自己还在那里多愁善感[哈欠][大笑][打脸]。",
                     @"[锦鲤][派对]对一个人最好的放下，就是无论再想念，也不要去打扰。得不到的人，就别要了[锦鲤][派对]。",
                     @"[锦鲤][派对]最好的爱情就是你陪我走过一无所有，我陪你走到时间尽头[锦鲤][派对]。",
                     @"有人在吗？聊个天啊，吵个架也行啊！！！",
                     @"[小鼓掌]哈哈哈哈哈哈哈，好开森！",
                     @"[小鼓掌]卧槽[小鼓掌]！！！",
                     @"[666][玫瑰]好漂亮[666][玫瑰]",
                     @"此时此刻我不知道还能说什么[送心]！",
                     @"没事我可以",
                     @"我一直试图保持一颗上进心、童真的❤️",
                     @"[灯笼][过年鼠][福][饺子][饺子][锦鲤][锦鲤][派对][礼物][微笑][色][发呆][酷拽][流泪][流泪][晕][调皮][害羞][睡][呲牙][发怒]",
                     @"[衰][闭嘴][机智][来看我][灵机一动][耶][捂脸][疑问][困][送心][震惊][哈欠][大笑][打脸][泣不成声][小鼓掌][偷笑][石化][思考][思考]",
                     @"[赞][感谢][感谢][嘴唇][去污粉][666][玫瑰][飞吻][鄙视][舔屏][委屈][我想静静][啤酒][胡瓜][再见][紫薇别走][听歌][拥抱][绝望的凝视][不失礼貌的微笑]",
                     @"[过年鼠]2020鼠年大吉，鼠你最棒，祝你身体健康，万事如意[感谢]！",
                     @"[福]希望武汉和全国人民早日度过难关，一切如今，不忘初心[福]",
                    @"不好意思，我只会 [偷笑][石化] print(\"hello world\")",
                    @"我墙都不服，只服你[偷笑][石化]",
                    @"[紫薇别走]兄弟姐妹们，快顶我，我要让她看到[紫薇别走]",
                    @"[来看我]哈哈哈哈哈一向爱学习的我现在也开始滑呀滑，欲罢不能啊[耶][捂脸]",
                    @"闯红灯的一般有两种后果，要么比别人快一分钟，要么比别人快一辈子。",
                    @"只要瘦，什么都百搭，要是胖，什么都白搭。",
                    @"我那么平凡,就不要把我丢在人群中",
                    @"别人都是笑起来很好看，但是你却不一样，你是看起来很好笑。",
                    @"有些人一旦错过了真他妈谢天谢地。",
                    @"宁可相信世上有鬼也不能相信男人那张破嘴",
                    @"喜欢一个人就要去表白，不用管那么多，虽然失败的可能性很大，但是万一成了备胎呢！",
                    @"近年来获得的成功主要分为三类：登录成功、下载成功、付款成功。",
                    @"一般长得好看的人都是单身的，例如我。",
                    @"人家的老婆都会生气，我的老婆还在充气。",
                    @"希望520情人节全国停电，气死那些唱歌喝酒泡吧看电影的，再来一场鹅毛大雪，冻死那些牵手逛街的，最后JC集体搜查，憋死那些想开房的。反正情人节我在家，不过了！",
                    @"小学耗铅笔，中学耗本子，高中耗脑子，大学耗流量。",
                    @"别跟我谈感情，谈感情伤钱。",
                    @"高中是钱够花，觉不够睡，大学是觉够睡，[泣不成声][小鼓掌]钱不够花，现在上班好了，钱既不够花觉又不够睡。",
                    @"人生的坎，过不去就是绝命谷；踏过去了，还有新的坎等着你。",
                    @"天下没有不散的宴席，但是如果你请客，我可以陪你多吃点。",
                    @"有一次和朋友吃饭他跟我炫耀身高他说：我妈妈155我爸爸160我竟然能长到183哈哈哈我并不羡慕他我觉得他是一个有故事的人",
                    @"[泣不成声][小鼓掌]自从老妈知道单身狗这个词之后，她已经忘了我的名字。",
                    @"结婚就是给自由穿件棉衣，活动起来不方便，但会很温暖。",
                    @"女人喜欢长得坏坏的男人，不是喜欢长坏了的男人。",
                    @"如果你觉得我哪里不对，请一定要告诉我，反正我也不会改，你别憋出病来。",
                    @"你要记住今天我叫你宝贝明天我也可以叫别人baby今天的我你爱理不理明天的我浪漫升级",
                    @"夜撩了酒，酒撩了你，你撩了我，穷困潦倒了我们[泣不成声][小鼓掌]",
                    @"世上总有一种无私的人，他们宁愿让自己不开心，也要让别人不开心。",
                    @"我家有一个死皮赖脸的单身狗，谁来给她领走，她是我妹妹🧍‍♀️[偷笑]！",
                    @"出门一定带口罩，安全第一！[送心]",
                    @"加油，健康中国。"
        ];
    }
    
    return comments;
}


- (NSString *)getRadomComment {
    if (self.tempCommentArray.count == 0) {
        self.tempCommentArray = [RadomComments getCommentArray].mutableCopy;
    }
    
    NSInteger index = (NSInteger)arc4random_uniform((uint32_t)self.tempCommentArray.count);
    NSString *randomComment = self.tempCommentArray[index];
    [self.tempCommentArray removeObjectAtIndex:index];
    return randomComment;
}

@end
