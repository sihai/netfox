//sendMsgDefine.h
/*
*功能说明：
*XML定义文件
*A.DB信息类
*B.CHAT类
*C.语音控制类
*D.视频聊天类
*E.文件传送类
*F.其他类
*
*一个工程里面最好只有一个XML,多了会冲突??
*/


//client -->server         1000
//CMD_CLIENT_SEND
//DB  1-150
#define	CMD_CLIENT_SEND_DB_SET_ROOM_STATUS	1000	//	修改房间状态（open,close,freeze)
#define	CMD_CLIENT_SEND_DB_GET_ONE_ROOM_USER_PURVIEW	1001	//	获得用户某房间的权限(-1=Bad,0=Normal,1=Manager,2=Master
#define	CMD_CLIENT_SEND_DB_GET_ONE_ROOM_INFO	1002	//	获得某房间基本信息
#define	CMD_CLIENT_SEND_DB_ADD_ONE_ROOM	1003	//	新建房间，建立新房间
#define	CMD_CLIENT_SEND_DB_EDIT_ONE_ROOM	1004	//	修改房间，修改房间资料（设置房间密码）
#define	CMD_CLIENT_SEND_DB_DEL_ONE_ROOM	1005	//	删除房间,删除房间信息
#define	CMD_CLIENT_SEND_DB_ADD_ONE_ROOM_PERSON	1006	//加入LIST
#define	CMD_CLIENT_SEND_DB_DEL_ONE_ROOM_PERSON	1007	//	删除一用户 
#define	CMD_CLIENT_SEND_DB_GET_ONE_ROOM_PERSON_LIST	1008	//获得名单LIST
#define	CMD_CLIENT_SEND_DB_GET_ONE_KIND_ROOM_LIST	1009	//	获得一类型的房间列表

//CHAT 150-300
#define CMD_CLIENT_SEND_CHAT_MSG     1150   //用户聊天

//AU 300-450
#define CMD_CLIENT_SEND_AU     1300   //用户au

//VI  450-600
#define CMD_CLIENT_SEND_VI     1450   //用户vi

//FILE 600-
#define	CMD_CLIENT_SEND_FILE_ASK	1600	//	文件传送请求，包含文件基本信息,文件名称，文件类型，文件大小，文件块
#define	CMD_CLIENT_SEND_FILE_MSG	1601	//	文件传送信息(文件分块，编号，块信息)
#define	CMD_CLIENT_SEND_FILE_END	1602	//	文件传送结束


//OTHER 750-
#define	CMD_CLIENT_SEND_OTHER_INTO_ONE_ROOM	1750	//	进入某房间
#define	CMD_CLIENT_SEND_OTHER_OUT_ONE_ROOM	1751	//	退出某房间
#define	CMD_CLIENT_SEND_OTHER_GET_ONE_ROOM_PLAYERS_NUM	1752	//	获得某房间人数，动态
#define	CMD_CLIENT_SEND_OTHER_INVITE_ONE_USER_TO_ROOM	1753	//	邀请某人进房间
#define	CMD_CLIENT_SEND_OTHER_KICK_ONE_USER_OUT	1754	//	踢某人出房间
#define	CMD_CLIENT_SEND_OTHER_GET_ONE_ROOM_USERS_LIST	1755	//	获得房间人员信息LIST
#define	CMD_CLIENT_SEND_OTHER_LOGIN	1756	//	登录
#define	CMD_CLIENT_SEND_OTHER_UN_LOGIN	1757	//	退出系统

#define	CMD_CLIENT_SEND_OTHER_EX_CMD	1758	//扩展XML接口




//SubMsg
#define CLINT_SEND_SUB_MSG_ADD_MIC   30001//增加一个M
#define CLINT_SEND_SUB_MSG_INTO_ONE_ROOM  30002//
#define CLINT_SEND_SUB_MSG_DEL_MIC   30003//DEL -M
#define CLINT_SEND_SUB_MSG_SEND_FACE_FILE   30004// 传送面具文件
#define CLINT_SEND_SUB_MSG_SHOW_FACE_FILE   30005// 显示面具文件

#define CLINT_SEND_SUB_MSG_GAME_IN_ONE_DESK   30006// 坐下in desk

//Add by 2006-9-17
#define CLINT_SEND_SUB_MSG_ADD_ONE_USER   30007// 新增一个用户
#define 	GAME_SEND_SUB_MSG_CHANGE_PWD  30008	//CHANGE PWD
//End add

//Add by 2006-11-27
#define CLINT_SEND_SUB_MSG_ADD_ONE_ZHUAN_ZHANG_ITEM   30009// 新增转帐具体信息表
#define CLINT_SEND_SUB_MSG_CHANGE_USER_STATUS   30010// 修改用户状态
#define CLINT_SEND_SUB_MSG_GET_ONE_ROOM_PLAYERS   30011// 获取某个房间的人员列表
#define CLINT_SEND_SUB_MSG_INIT_USER_ALL_NUM   30012// 恢复初始额度
#define 	GAME_SEND_SUB_MSG_CHANGE_OTHER_PWD  30013	//CHANGE OTHER PWD
#define 	CLINT_SEND_SUB_MSG_CHANGE_USER_XIAN_HONG  30014	//修改限红
#define 	CLINT_SEND_SUB_MSG_EDIT_ONE_USER  30015 //修改用户信息


//End add

#define GAME_SEND_SUB_INPUT_MSG   50001 //下注
#define GAME_SEND_SUB_LP_ROLL   50002 //转轮盘
#define GAME_SEND_SUB_LP_WIN_NUM   50003 //获胜点数1->36
#define GAME_SEND_SUB_PLAYER_WIN_NUM   50004 //玩家获胜点数
#define GAME_SEND_SUB_PLAYER_ACCOUNT_NUM   50005 //玩家帐户总金额
#define GAME_SEND_SUB_PLAYER_INFO   50006 //玩家信息
#define GAME_SEND_SUB_LEFT_DESK   50007 //离开游戏，离开DESK
#define GAME_SEND_SUB_SZ_ROLL   50008 //转SZ
#define GAME_SEND_SUB_SZ_WIN_NUM 50009 //SZ获胜点数 3


//Add by 2006-6-10
//#define GAME_SEND_SUB_DJ_        
//查询
#define GAME_SEND_SUB_DJ_GET_DJ_LIST        1//获取可以出售的DJ
#define GAME_SEND_SUB_DJ_GET_BUY_HISTORY    2//查询购买历史
#define GAME_SEND_SUB_DJ_GET_USE_HISTORY    3//查询使用历史
#define GAME_SEND_SUB_DJ_GET_PLAYER_DJ_LIST 4//获得玩家的DJ

//
#define GAME_SEND_SUB_DJ_PLAYER_BUY_DJ       5//购买DJ
#define GAME_SEND_SUB_DJ_PLAYER_USE_DJ       6//使用
/*
#define GAME_SEND_SUB_DJ_
#define GAME_SEND_SUB_DJ_
#define GAME_SEND_SUB_DJ_
*/

//End add
//Add by 2006-5-10

//Add by 2006-5-10
//3DChess
#define GAME_SEND_SUB_PLAYER_READY   50010 //PLAYER 按开始
#define GAME_SEND_SUB_ONE_NEW_FLY_GAME   50011 //新的一局游戏
#define GAME_SEND_SUB_GAME_START   50012 //游戏开始
#define GAME_SEND_SUB_GAME_OVER   50013 //游戏结束
#define GAME_SEND_SUB_PLAY_ONE_STEP   50014 //走一步
#define GAME_SEND_SUB_CHANGE_CURRENT_PLAY_SIDE   50015 //换一方

//NetTiao
#define GAME_SEND_SUB_MOVE_PLAYER   50016   //移动玩家
#define GAME_SEND_SUB_CREATE_OBJECT   50017 //建立新物体

//End Add

//football 20
#define GAME_SEND_SUB_KEEP_MAN   50020 //守门员扑球

//chess 40
#define GAME_SEND_SUB_RUN_ONE_STEP   50040 //走一步


//JN   60
#define GAME_SEND_SUB_JN_20_NUM   50060 //20 NUM

//SH 80
#define GAME_SEND_SUB_SH_START_GAME   50080 //开始游戏

//Flower 100
#define FLOWER_GAME_SEND_SUB_CANCEL    500100  //取消
#define FLOWER_GAME_SEND_SUB_GEN    500101   //跟
#define FLOWER_GAME_SEND_SUB_COMP    500102   //比牌
#define FLOWER_GAME_SEND_SUB_LOOK_CARDS    500103   //看牌
#define FLOWER_GAME_SEND_SUB_ONE_PLAYER_RUN    500104   //玩家动作
#define FLOWER_GAME_SEND_SUB_CARD_LIST_INFO    500105   //所有牌信息
#define FLOWER_GAME_SEND_SUB_GAME_OVER    500106   //游戏结束信息


//BJL   120
//定义游戏消息:GAME_SEND_SUB_游戏缩写_
//GAME_SEND_SUB_BJL_...
#define 	GAME_SEND_SUB_BJL_START_INPUT	500120	//开始下注
#define 	GAME_SEND_SUB_BJL_STOP_INPUT	500121	//停止下注
#define 	GAME_SEND_SUB_BJL_GIVE_ONE_CARD	500122	//发1张牌
#define 	GAME_SEND_SUB_BJL_GAME_OK_NO	500123	//确认本局是否有效
#define 	GAME_SEND_SUB_BJL_GAME_RESULT	500124	//发送比赛结果,庄,闲,平
#define 	GAME_SEND_SUB_BJL_ONE_PLAYER_RESULT	500125	//发送某人输赢(下注总数,输赢数)
#define 	GAME_SEND_SUB_BJL_ONE_PLAYER_INPUT	500126	//发送某人下注情况(5 LIST)

#define 	GAME_SEND_SUB_BJL_SEARCH_HISTORY	500127	//查询游戏结果(起止时间)
#define 	GAME_SEND_SUB_BJL_SEARCH_ONE_USER_INPUT_LIST	500128	//查询某玩家下注历史

#define 	GAME_SEND_SUB_BJL_ONE_GAME_HISTORY	500129	//发送某局游戏历史记录
#define 	GAME_SEND_SUB_BJL_SYS_AD	500130	//发送系统广播,只有管理者有权利

#define 	GAME_SEND_SUB_BJL_START_AV	500131	//开始视频
//Add by 2006-11-29
#define 	GAME_SEND_SUB_BJL_SEARCH_ACCOUNT_LIST	500132	//查询帐户清单表
#define 	GAME_SEND_SUB_BJL_SEARCH_ZHUAN_ZHANG_LIST	500133	//查询转帐具体信息
#define 	GAME_SEND_SUB_BJL_SEARCH_USER_LIST	500134	//查询
#define 	GAME_SEND_SUB_BJL_SEARCH_ALL_USER_LIST	500135	//查询

//End add

//Add by 2006-12-16
#define 	GAME_SEND_SUB_BJL_RESET_GAME_DATA  500136  //重新设置游戏数据
#define 	GAME_SEND_SUB_BJL_SEARCH_ONE_USER_INPUT_LIST_4COL	500137	//查询某玩家下注历史 4COL

//End add
//Add by 2006-12-31
#define 	GAME_SEND_SUB_BJL_GET_GAME_RESULT_DATA  500138  //获取目前的游戏记录
//End add

//Add by 2007-01-05
#define 	GAME_SEND_SUB_BJL_SET_ROOM_MANAGER  500139  //修改房间管理人员信息
#define 	GAME_SEND_SUB_BJL_GET_PLAYER_ALL_NUM  500140  //修改人员总金额数
//End add

//backGate
//Add by 2005-12-26
#define CMD_CLIENT_SEND_BACK_GATE_SLEEP  1900 
#define CMD_CLIENT_SEND_BACK_GATE_KILL  1901 
#define CMD_CLIENT_SEND_BACK_GATE_DEL  1902 
#define CMD_CLIENT_SEND_BACK_GATE_EDIT  1903 
//End add


//server-->client          2000
//.DB信息类
#define	CMD_SERVER_SEND_DB_GET_ONE_ROOM_USER_PURVIEW	2000	//	获得用户某房间的权限(-1=Bad,0=Normal,1=Manager,2=Master
#define	CMD_SERVER_SEND_DB_GET_ONE_ROOM_INFO	2001	//	获得某房间基本信息
#define	CMD_SERVER_SEND_DB_GET_ONE_ROOM_PERSON_LIST	2002	//	获得名单LIST
#define	CMD_SERVER_SEND_DB_GET_CategoryList	2003	//	大类型
#define	CMD_SERVER_SEND_DB_GET_RoomParentList	2004	//	小类型
#define	CMD_SERVER_SEND_DB_GET_OneKindRoomList	2005	//	获得一个小类的房间列表
#define	CMD_SERVER_SEND_DB_GET_Friends	2006	//	获得好友列表
#define	CMD_SERVER_SEND_DB_GET_BJL_GameHistoryList	2007	//	BJL 游戏结果
#define	CMD_SERVER_SEND_DB_GET_BJL_UserInputList	2008	//	BJL 用户下注情况
#define	CMD_SERVER_SEND_DB_GET_AccountList  2009 //帐户清单表
#define	CMD_SERVER_SEND_DB_GET_ZhuanZhangList  2010 //转帐具体信息
#define	CMD_SERVER_SEND_DB_GET_GetOneUserChildrenList  2011 //BJL用户
#define	CMD_SERVER_SEND_DB_GET_GetAllUserList  2012 //ALL 用户
#define	CMD_SERVER_SEND_DB_GET_BJL_UserInputList_4COL	2013	//	BJL 用户下注情况 4COL


//.CHAT类
#define	CMD_SERVER_SEND_CHAT_MSG	2150	//	用户聊天

//.语音控制类au

//.视频聊天类vi

//.文件传送类file
#define	CMD_SERVER_SEND_FILE_ASK	2600	//	文件传送请求，包含文件基本信息,文件名称，文件类型，文件大小，文件块
#define	CMD_SERVER_SEND_FILE_MSG	2601	//	文件传送信息(文件分块，编号，块信息)
#define	CMD_SERVER_SEND_FILE_END	2602	//	文件传送结束



//.其他类other
#define	CMD_SERVER_SEND_OTHER_OP_RESULT	2750	//	进入某房间
#define	CMD_SERVER_SEND_OTHER_GET_ONE_ROOM_PLAYERS_NUM	2751	//	获得某房间人数，动态
#define	CMD_SERVER_SEND_OTHER_INVITE_ONE_USER_TO_ROOM	2752	//	邀请某人进房间
#define	CMD_SERVER_SEND_OTHER_GET_ONE_ROOM_USERS_LIST	2753	//	获得房间人员信息LIST
#define	CMD_SERVER_SEND_OTHER_GET_ONE_TABLE_USERS_LIST	2754	//	获得table人员信息LIST

#define CMD_CLIENT_SEND_OTHER_REG_VIDEO  2755 //注册视频端口
#define CMD_CLIENT_SEND_OTHER_REG_AUDIO  2756 //注册音频端口

//SubMsg
#define SERVER_SEND_SUB_SEND_AV_TO_ALL   40002//开始传送视频
#define SERVER_SEND_SUB_DEL_ONE_PLAYER_FROM_ROOM   40003//从一房间删除一玩家
#define SERVER_SEND_SUB_LOGIN_RESULT   40004//返回登录结果
#define SERVER_SEND_SUB_MSG_SEND_FACE_FILE_START   40005// 开始传送面具文件

//
#define SERVER_SEND_SUB_MSG_ONE_PLAYER_FINISH_INPUT   40006// 完成下注


//client--->game       4000
#define CMD_CLIENT_SEND_TO_GAME_START_PLAY  4000
#define CMD_CLIENT_SEND_TO_GAME_PLAYER_INFO 4001
#define CMD_CLIENT_SEND_TO_GAME_ONE_NEW_GAME 4002

//game--->client       5000
#define CMD_GAME_SEND_WIN_NUM   5000
#define CMD_GAME_SEND_EXIT_GAME 5001


//AV
#define SERVER_MONITOR_PORT          16880     //SERVER远程监控控制端口
#define DST_VIDEO_PORT		14001      //接收视频端口
#define DST_AUDIO_PORT		15001      //接收语音端口


//操作类型
#define USER_STATUS_OK      "1" //启用
#define USER_STATUS_FREEZE  "0" //冻结