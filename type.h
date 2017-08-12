#pragma once

#include "rntype.h"
#include "agent.h"

enum SERVER_TYPE_		//web admin tool에도 정의되었으므로 변경시 함께 생각
{
	SERVER_TYPE_NONE = 0,
	SERVER_TYPE_CENTER,
	SERVER_TYPE_HCASH,
	SERVER_TYPE_LOGIN,
	SERVER_TYPE_PROXY,
	XXX_SERVER_TYPE_RPROXY,
	SERVER_TYPE_GCONTAINER,
	SERVER_TYPE_GMOB,
	SERVER_TYPE_DODB,
	SERVER_TYPE_GLOG,
	SERVER_TYPE_BANK,
	SERVER_TYPE_MONITOR,
	SERVER_TYPE_CHAT,
	SERVER_TYPE_SERVERCMD,
	SERVER_TYPE_RESTORATION,
	SERVER_TYPE_BILLING,
	SERVER_TYPE_TCOIN,
	SERVER_TYPE_MAX
};

// 그룹 추가시 PGROUP_MAX_이전에 정의할것
enum PGROUP_
{
	PGROUP_NONE_,
	PGROUP_GUEST_REQUEST,
	PGROUP_MEMBER_REQUEST,
	PGROUP_GUEST_RESPONSE,
	PGROUP_MEMBER_RESPONSE,
	PGROUP_MEMBER_ANNOUNCE,
	PGROUP_MEMBER_UPDATE,
	PGROUP_MEMBER_DEATH_UPDATE,
	PGROUP_MEMBER_DEATH_ANNOUNCE,
	PGROUP_CHAT_GUEST_REQUEST,
	PGROUP_CHAT_GUEST_RESPONSE,
	PGROUP_CHAT_MEMBER_REQUEST,
	PGROUP_CHAT_MEMBER_RESPONSE,
	PGROUP_CHAT_MEMBER_ANNOUNCE,
	PGROUP_GAME_REQUEST,
	PGROUP_GAME_RESPONSE,
	PGROUP_GAME_ANNOUNCE,
	PGROUP_LOCAL_REQUEST,
	PGROUP_LOCAL_RESPONSE,
	PGROUP_LOCAL_ANNOUNCE,
	PGROUP_HCASH_REQUEST,
	PGROUP_HCASH_RESPONSE,
	XXX_PGROUP_GUILD_ANNOUNCE,
	PGROUP_GUILD_UPDATE,
	XXX_PGROUP_GLOG_ANNOUNCE,
	PGROUP_BANK_REQUEST,
	PGROUP_BANK_RESPONSE,
	PGROUP_CONTAINER_BROKER,
	PGROUP_PARTY_UPDATE,
	PGROUP_MONITOR_REQUEST,
	PGROUP_MONITOR_RESPONSE,
	PGROUP_MAIL_REQUEST,
	PGROUP_MAIL_RESPONSE,
	PGROUP_MAIL_ANNOUNCE,
	PGROUP_CONSIGN_REQUEST,
	PGROUP_CONSIGN_RESPONSE,
	PGROUP_CONSIGN_ANNOUNCE,
	PGROUP_CHAT_REQUEST,
	PGROUP_CHAT_RESPONSE,
	PGROUP_CHAT_ANNOUNCE,
	PGROUP_MONITOR_ANNOUNCE,
	PGROUP_SOUL_CONSIGN_REQUEST,
	PGROUP_SOUL_CONSIGN_RESPONSE,
	PGROUP_SOUL_CONSIGN_ANNOUNCE,
	PGROUP_TCOIN_REQUEST,
	PGROUP_TCOIN_RESPONSE,
	PGROUP_BILLING_REQUEST,
	PGROUP_BILLING_RESPONSE,
	PGROUP_BILLING_ANNOUNCE,
	PGROUP_MAX_
};

enum PTYPE_DEATH_UPDATE_
{
	PTYPE_DEATH_UPDATE_LEVEL,
	PTYPE_DEATH_UPDATE_BSPECIAL,
	PTYPE_DEATH_UPDATE_ISPECIAL,
	PTYPE_DEATH_UPDATE_ANGER_COUNT,
	PTYPE_DEATH_UPDATE_EXP,
	PTYPE_DEATH_UPDATE_JACKPOT_POINT,
	PTYPE_DEATH_UPDATE_MAX_POWERS,
	PTYPE_DEATH_UPDATE_STATS,
	PTYPE_DEATH_UPDATE_PARTY_MEMBER_DEAD,
	PTYPE_DEATH_UPDATE_COIN,
	PTYPE_DEATH_UPDATE_ITEM_PICKUP,
	PTYPE_DEATH_UPDATE_ADD_ITEM_TO_INVENTORY,
	PTYPE_DEATH_UPDATE_REMOVE_ITEM_FROM_INVENTORY,
	PTYPE_DEATH_UPDATE_REMOVE_ITEM_FROM_WEAR,
	PTYPE_DEATH_UPDATE_ITEM_COUNT_FROM_INVENTORY,
	PTYPE_DEATH_UPDATE_ITEM_DURABILITY,
	PTYPE_DEATH_UPDATE_QUEST,
	PTYPE_DEATH_UPDATE_QUEST_BEGIN,
	PTYPE_DEATH_UPDATE_QUEST_END,
	PTYPE_DEATH_UPDATE_MARK_EXP,
	PTYPE_DEATH_UPDATE_ADD_ITEM_TO_PET,
	PTYPE_DEATH_UPDATE_REMOVE_ITEM_FROM_PET,
	PTYPE_DEATH_UPDATE_ITEM_COUNT_FROM_PET,
};

enum PTYPE_DEATH_ANNOUNCE_
{
	PTYPE_DEATH_ANNOUNCE_LEVEL,
	PTYPE_DEATH_ANNOUNCE_BSPECIAL,
	PTYPE_DEATH_ANNOUNCE_ISPECIAL,
	PTYPE_DEATH_ANNOUNCE_AFFECT_ADD,
	PTYPE_DEATH_ANNOUNCE_AFFECT_STACK,
	PTYPE_DEATH_ANNOUNCE_AFFECT_REMOVE,
	PTYPE_DEATH_ANNOUNCE_ITEM_DROP,
	PTYPE_DEATH_ANNOUNCE_ITEM_UNWEAR,
	PTYPE_DEATH_ANNOUNCE_SKILL_DIRECTION_CANCEL,
	PTYPE_DEATH_ANNOUNCE_ATTACK_SELF,
};

// 서버 <-> 클라간 패킷 추가시 PTYPE_MEMBER_MAX 이전에 정의할것
enum PTYPE_MEMBER_
{
	PTYPE_MEMBER_OUTMAP,						//
	PTYPE_MEMBER_WEARITEM,						//
	PTYPE_MEMBER_DROPITEM,						//
	PTYPE_MEMBER_PICKUPITEM,					//
	PTYPE_MEMBER_MOVEITEM,						//
	PTYPE_MEMBER_LINK,							//
	PTYPE_MEMBER_TRADEREQUEST,					//
	PTYPE_MEMBER_TRADEITEM,						//
	PTYPE_MEMBER_TRADE,							//
	PTYPE_MEMBER_BUYITEM,						//
	PTYPE_MEMBER_SELLITEM,						//
	PTYPE_MEMBER_DESTROYITEM,					//
	PTYPE_MEMBER_REPAIRITEM,					//
	PTYPE_MEMBER_BODYPOINT,						//
	PTYPE_MEMBER_EXCHANGE_ITEM,						//
	PTYPE_MEMBER_SKILLPOINT,					//
	PTYPE_MEMBER_INKEEP,						//
	PTYPE_MEMBER_OUTKEEP,						//
	PTYPE_MEMBER_MOVEKEEP,						//
	PTYPE_MEMBER_UPGRADEITEM,					//
	PTYPE_MEMBER_RANDOM_OPTION_UPGRADE,			// 랜덤 옵션 강화
	PTYPE_MEMBER_ACTOROPTION,					//

	PTYPE_MEMBER_MAKE_ITEM,						// 아이템 제작
	PTYPE_MEMBER_UPDATE_RESTORATION_EXP,		// 사망 패널티(경험치) 복구

	PTYPE_MEMBER_ZONE_PORTAL,					// 땅에 찍힌 포탈
	PTYPE_MEMBER_MOVECHANNEL,					// 채널간 이동
	PTYPE_MEMBER_REVIVE,						//
	PTYPE_MEMBER_USEITEM,						//
	PTYPE_MEMBER_ACTION,						//
	PTYPE_MEMBER_USER_MOVE,
	PTYPE_MEMBER_MOVE_TURN,

	PTYPE_MEMBER_BUYCASHITEM, 					//
	PTYPE_MEMBER_BETTING,						// Betting
	PTYPE_MEMBER_CASINOINFO,					// Casino
	PTYPE_MEMBER_USE_ANGER,						// 분노 사용
	PTYPE_MEMBER_NPC_PORTAL,					// Beginner's NPC portal
	PTYPE_MEMBER_SAVE_REVIVEPOINT,				// Save revive point(NPC)
	PTYPE_MEMBER_TELEPORT_SAVED_POSITION,		// 저장 위치로 이동
	PTYPE_MEMBER_LOADMAP_COMPLETED,				// 맵을 다 로딩했을때 ????
	PTYPE_MEMBER_RANDOM_QUEST,					// 랜덤퀘스트 받기
	PTYPE_MEMBER_KILL_QUEST_MOB_START,			// 협행 채집 시작
	PTYPE_MEMBER_KILL_QUEST_MOB,				// 협행 채집 완료
	PTYPE_MEMBER_KILL_QUEST_MOB_CANCEL,			// 햅형 채집 중단 및 취소
	PTYPE_MEMBER_ACCEPT_QUEST,					//
	PTYPE_MEMBER_FORCED_ACCEPT_QUEST,			//
	PTYPE_MEMBER_CANCEL_QUEST,					//
	PTYPE_MEMBER_TALK_QUEST_NPC,				//
	PTYPE_MEMBER_COMPLETE_QUEST,				//
	PTYPE_MEMBER_FIRE_MAPEVENT,
	PTYPE_MEMBER_QUEST_CINEMA_CANCEL,			// 협행 시네마 보는 도중 켄슬

	PTYPE_MEMBER_BSPECIAL,						// bspeical
	PTYPE_MEMBER_FSPECIAL,						// fspecial
	PTYPE_MEMBER_ISPECIAL,						// ispecial

	PTYPE_MEMBER_JACKPOT_ACTION,				// 잭팟을 수동/자동을 선택	(C-S)
	PTYPE_MEMBER_JACKPOT_CLICK,					// 잭팟 start (C-S)

	PTYPE_MEMBER_MOVE_LINK,						// <DO2추가> quick slot에서의 이동
	PTYPE_MEMBER_ADD_ACCEPT_FRIEND,
	PTYPE_MEMBER_ADD_DENY_FRIEND,
	PTYPE_MEMBER_DELETE_ACCEPT_FRIEND,
	PTYPE_MEMBER_DELETE_DENY_FRIEND,

	PTYPE_MEMBER_JOIN_MISSION_MAP,				//
	PTYPE_MEMBER_LEAVE_MISSION_MAP,				//
	PTYPE_MEMBER_JOIN_MISSION_MAP_OBSERVER,
	PTYPE_MEMBER_MISSION_MT_RECORD,
	PTYPE_MEMBER_MISSION_MT_GET_MATCH_LIST,

	PTYPE_MEMBER_CREATE_GUILD,					// 문파 생성
	PTYPE_MEMBER_UPGRADE_GUILD,					// 문파 승급
	PTYPE_MEMBER_DESTROY_GUILD,					// 문파 해체(해산)
	PTYPE_MEMBER_SECEDE_GUILD,					// 문원 탈퇴
	PTYPE_MEMBER_PURGE_GUILD,					// 문원 추방
	PTYPE_MEMBER_NOTIFY_MESSAGE_GUILD,			// 문파 공지
	PTYPE_MEMBER_INVITE_USER,					// 문파 초대
	PTYPE_MEMBER_INVITE_USER_ANSWER,			// 문파 초대 응답
	PTYPE_MEMBER_PROMOTION_GUILD,				// 문원 승급
	PTYPE_MEMBER_OPEN_GUILD_KEEP,				// 문파 창고 사용 여부
	PTYPE_MEMBER_USE_GUILD_KEEP,				// 문파 창고
	PTYPE_MEMBER_CHANGE_GUILD_MARK,				// 문파 문장 변경


	PTYPE_MEMBER_PARTY_INVITE_USER,
	PTYPE_MEMBER_PARTY_INVITE_USER_ANSWER,
	PTYPE_MEMBER_PARTY_SECEDE_MEMBER,
	PTYPE_MEMBER_PARTY_PURGE_MEMBER,
	PTYPE_MEMBER_PARTY_CHANGE_MASTER,

	PTYPE_MEMBER_ATTACK_DIRECTION_TARGET,
	PTYPE_MEMBER_ATTACK_DIRECTION_BOUND,
	PTYPE_MEMBER_ATTACK_DIRECTION_CANCEL,
	PTYPE_MEMBER_ATTACK_TARGET,
	PTYPE_MEMBER_ATTACK_BOUND,
	PTYPE_MEMBER_ATTACK_SELF,
	PTYPE_MEMBER_ATTACK_KNOCKBACK_MOVE,			// 이동 넉백 이동
	PTYPE_MEMBER_ATTACK_CHANNELING_CANCEL,		// 채널링 무공 취소
	PTYPE_MEMBER_ATTACK_COUNTATTACK_DAMAGE,		// 반격에 대한 피해

	PTYPE_MEMBER_MAIL_SEND,						// 전서구 보내기
	PTYPE_MEMBER_MAIL_LIST,						// 전서구 리스트를 요청한다.
	PTYPE_MEMBER_MAIL_READ,						// 전서구 읽기
	PTYPE_MEMBER_MAIL_PICKUP_ITEM,				// 전서구에 동봉된 아이템 및 코인 수령
	PTYPE_MEMBER_MAIL_DELETE,					// 전서구삭제

	PTYPE_MEMBER_CONSIGN_ITEM_LIST,				// 위탁물 검색 리스트
	PTYPE_MEMBER_CONSIGN_REGIST_ITEM_LIST,		// 위탁 등록 리스트
	PTYPE_MEMBER_CONSIGN_REGIST_ITEM,			// 위탁 등록
	PTYPE_MEMBER_CONSIGN_RECALL_ITEM,			// 위탁 회수
	PTYPE_MEMBER_CONSIGN_BUY_ITEM,				// 위탁물 구매
	PTYPE_MEMBER_CONSIGN_CALCULATE_LIST,		// 위탁물 판매된 리스트
	PTYPE_MEMBER_CONSIGN_CALCULATE,				// 위탁물 판매 정산

	PTYPE_MEMBER_ADD_ACCEPT_FRIEND_REQUEST_ANSWER,
	PTYPE_MEMBER_BUY_AFFECT,

	PTYPE_MEMBER_CHAT_OPTION_INFO,					// 채팅 옵션 정보 보기
	PTYPE_MEMBER_CHAT_OPTION_SAVE,					// 채팅 옵션 정보 저장
	PTYPE_MEMBER_CHAT_REGION,						// 리젠 채팅

	PTYPE_MEMBER_PRODUCE_OCCUPATION,			// 생산 NPC 점령
	PTYPE_MEMBER_PRODUCE_START,					// 생산 시작
	PTYPE_MEMBER_PRODUCE_RESULT,				// 생산 결과 요청
	PTYPE_MEMBER_PRODUCE_RESULT_ITEM,			// 생산 결과 아이템 요청
	PTYPE_MEMBER_PRODUCE_OCCUPATION_CLOSE,		// 생산 NPC 점령 취소

	PTYPE_MEMBER_EMOTICON_ITEM_START,		// 이모티콘 아이템 사용시작(액션만한다)
	PTYPE_MEMBER_EMOTICON_ITEM_END,			// 이모티콘 아이템 실제 사용
	PTYPE_MEMBER_EMOTICON_ITEM_CANCEL,		// 이모티콘 아이템 사용 취소

	PTYPE_MEMBER_TALK_TO_NPC,
	PTYPE_MEMBER_RESCUE_NPC,

	PTYPE_MEMBER_CHANGE_LINK,					// 퀵슬롯의 내용을 변경

	PTYPE_MEMBER_USE_DYEING_ITEM,				// 염색 아이템 사용

	PTYPE_MEMBER_MOUNT_RICKSHAW,				// 인력거 타기
	PTYPE_MEMBER_UNMOUNT_RICKSHAW,				// 인력거 내리기

	PTYPE_MEMBER_CHEST_START,					// 전문 능력, 상자 열기 시작
	PTYPE_MEMBER_CHEST_END,						// 전문 능력, 상자 열기 종료
	PTYPE_MEMBER_BLOOD_TO_BLOODCORE,			// 전문 능력, 혈을 혈정으로 교환
	PTYPE_MEMBER_BLOODCORE_ON,					// 혈정 ON
	PTYPE_MEMBER_BLOODCORE_OFF,					// 혈정 OFF

	PTYPE_MEMBER_INC_INVENTORY,					// 가방 확장
	PTYPE_MEMBER_INC_KEEP,						// 창고 확장
	PTYPE_MEMBER_INC_GUILD_KEEP,				// 문파 창고 확장

	PTYPE_MEMBER_KEEP_IN_COIN,					// 창고에 돈을 보관
	PTYPE_MEMBER_KEEP_OUT_COIN,					// 창고에서 돈을 꺼냄

	PTYPE_MEMBER_NORMAL_PRODUCE_RESULT,			// 생산 결과 요청
	PTYPE_MEMBER_NORMAL_PRODUCE_RESULT_ITEM,	// 생산 결과 아이템 요청

	PTYPE_MEMBER_CUBTE_FIXED_MIXING,			// 큐브 - 조합
	PTYPE_MEMBER_CUBTE_RANDOM_MIXING,			// 큐브 - 렌덤 조합
	PTYPE_MEMBER_CUBTE_DISASSEMBLE,				// 큐브 - 분해
	PTYPE_MEMBER_CUBTE_DUPLICATE,				// 큐브 - 복제

	PTYPE_MEMBER_SEALITEM_RECEIVE,				// 봉인지서 받는 패킷
	PTYPE_MEMBER_SEALITEM_TO_SOULITEM,			// 개봉 패킷
	PTYPE_MEMBER_SOULITEM_TO_SEALITEM,			// 봉인 패킷
	PTYPE_MEMBER_SOULITEM_REGIST,				// 등록 패킷
	PTYPE_MEMBER_SOULITEM_WEAR,					// 장착 패킷
	PTYPE_MEMBER_SOULITEM_UNWEAR,				// 탈착 패킷
	PTYPE_MEMBER_SOULITEM_MIX,					// 조합
	PTYPE_MEMBER_SOULITEM_UPGRADE,				// 강화

	PTYPE_MEMBER_DUEL_REQUEST,					// 비무 신청 ( C -> S )
	PTYPE_MEMBER_DUEL_APPROVAL,					// 비무 승인
	PTYPE_MEMBER_DUEL_END_FROM_CLIENT,			// 클라이언트에 의한 비무 종료

	PTYPE_MEMBER_CUSS_REPORT,					// 욕설 신고
	PTYPE_MEMBER_CHAT_BAN_LIMIT_TIME,			// 채팅 금지 남은 시간 (sec)

	PTYPE_MEMBER_AUTO_PROTECT_AUTH,				// 오토 방지 인증
	PTYPE_MEMBER_AUTO_PROTECT_REPORT,			// 오토 방지 신고

	PTYPE_MEMBER_SOUL_CONSIGN_SEARCH,			// 검색
	PTYPE_MEMBER_SOUL_CONSIGN_REGIST,			// 경매 등록
	PTYPE_MEMBER_SOUL_CONSIGN_REGIST_LIST,		// 경매 등록리스트
	PTYPE_MEMBER_SOUL_CONSIGN_RECALL_ITEM,		// 경매 회수
	PTYPE_MEMBER_SOUL_CONSIGN_CALCULATE,		// 경매 판매정산
	PTYPE_MEMBER_SOUL_CONSIGN_BUY_ITEM,			// 경매 구매

	PTYPE_MEMBER_CASH_INFO,						// 케쉬 정보

	PTYPE_MEMBER_CASH_SELF_REVIVE,				// 케쉬 부활
	PTYPE_MEMBER_USE_CASH_REVIVE_ITEM,			// 케쉬 부활 아이템

	PTYPE_MEMBER_REMAIN_REVIVE_COUNT,			// 남은 제자리 부활 횟수
	PTYPE_MEMBER_MOVECHANNEL_START,				// 채널 이동 시작

	PTYPE_MEMBER_CUBTE_FIXED_MIXING_START,		// 큐브 - 조합 시작
	PTYPE_MEMBER_CUBTE_RANDOM_MIXING_START,		// 큐브 - 렌덤 조합 시작
	PTYPE_MEMBER_CUBTE_DISASSEMBLE_START,		// 큐브 - 분해 시작
	PTYPE_MEMBER_CUBTE_DUPLICATE_START,			// 큐브 - 복제 시작

	PTYPE_MEMBER_ITEM_OPTION_CLEAR,				// 아이템 옵션 초기화
	PTYPE_MEMBER_ITEM_BIND_CANCEL,				// 아이템 종속 해제
	PTYPE_MEMBER_TOURNAMENT_ACCEPT_INFO,		// 참가 신청 창 표시 정보
	PTYPE_MEMBER_TOURNAMENT_REGISTER,			// 참가 신청
	PTYPE_MEMBER_TOURNAMENT_UNREGISTER,			// 참가 신청 취소
	PTYPE_MEMBER_TOURNAMENT_STATUS,				// 상태 변경 시
	PTYPE_MEMBER_TOURNAMENT_JOINMAP,			// 맵 입장

	PTYPE_MEMBER_TOURNAMENT_MATCH_LIST,			// 대진표 전송
	PTYPE_MEMBER_TOURNAMENT_REWARD,				// 토너먼트 보상
	PTYPE_MEMBER_TOURNAMENT_WINNER,				// 우승 길드 알려줌
	PTYPE_MEMBER_TB_STATUS, 					// 전투맵 상태 변경 시
	PTYPE_MEMBER_TB_END_BATTLE,					// 전투맵 승패 전송
	PTYPE_MEMBER_TB_GAMEINFO,					// 전투맵 게임 정보
	PTYPE_MEMBER_TB_USERINFO,					// 전투맵 유저 정보
	PTYPE_MEMBER_TB_HPINFO,						// 전투맵 HP 정보
	PTYPE_MEMBER_TB_DS_POINT,					// 파쇄진 점수 정보
	PTYPE_MEMBER_TB_DS_HPINFO,					// 파쇄진 오브젝트 hp 정보
	PTYPE_MEMBER_TB_ST_MOVE_ITEM,				// 길드원에게 신단령 아이템 이동
	PTYPE_MEMBER_TB_ST_ITEM_INFO,				// 신단령에 신단수 정보
	PTYPE_MEMBER_TB_ST_PLAYER_ITEM_INFO,		// 개인 신단수 갯수
	PTYPE_MEMBER_TOURNAMENT_LEAVEMAP, 			// 맵 퇴장
	PTYPE_MEMBER_TOURNAMENT_WINNER_LIST,		// 승자 길드 리스트
	PTYPE_MEMBER_AUTO_COUNT,					// 오토 방지를 위한 정보
	PTYPE_MEMBER_AUTO_USER_QUESTION,			// 오토유저인지 질문하기

	PTYPE_MEMBER_CHANGE_GUILD_NAME,				// 길드 이름 변경
	PTYPE_MEMBER_OUTMAP_START,					// 맵 나감 시작

	PTYPE_MEMBER_SPECIAL_DISASSEMBLE_START,		// 아이템 해체기 시작
	PTYPE_MEMBER_SPECIAL_DISASSEMBLE,			// 아이템 해체기 완료

	PTYPE_MEMBER_RANDOM_EXPAND,					// 랜덤 옵션 갯수 증가
	PTYPE_MEMBER_DIRECT_UPGRADE,				// 즉시 강화
	PTYPE_MEMBER_REPRESS_QUEST,					// 진압 퀘스트
	PTYPE_MEMBER_OUT_COMBINEKEEP,				// 두번째 창고에서 아이템 빼기

	PTYPE_MEMBER_QUEST_SELECT_QUEST,			// 진행 중인 퀘스트 중 유저가 선택한 퀘스트

	PTYPE_MEMBER_SORT_INVENTORY,				// 일반 인벤토리 정렬
	PTYPE_MEMBER_SORT_PP_INVENTORY,				// PP 인벤토리 정렬
	PTYPE_MEMBER_SORT_KEEP,						// 창고 정렬
	PTYPE_MEMBER_INIT_SKILL_EX,					// 스킬 초기화

	PTYPE_MEMBER_LEVEL_GRADE_REWARD,			// 레벨별 차등 보상

	PTYPE_MEMBER_AVATAR_DISASSEMBLE,			// 아바타 - 분해
	PTYPE_MEMBER_AVATAR_DISASSEMBLE_START,		// 아바타 - 분해 시작

	PTYPE_MEMBER_AVATAR_OPTION_UPGRADE,			// 아바타 - 집혼석 사용
	PTYPE_MEMBER_BIND_SEAL,						// 종속 아이템 봉인
	PTYPE_MEMBER_WORLD_EVENT_STATUS,			// 월드 이벤트 진행상황 보기

	PTYPE_MEMBER_GUILD_MASTER_MANDATE,			// 길드장 위임
	PTYPE_MEMBER_UPGRADEITEM_START,				// 아이템 업그레이드 시작
	PTYPE_MEMBER_MAKE_ITEM_START,				// 아이템 제작 시작

	PTYPE_MEMBER_CUBE_FIXED_MIXING_CANCEL,		// 큐브 - 조합 취소
	PTYPE_MEMBER_CUBE_RANDOM_MIXING_CANCEL,		// 큐브 - 렌덤 조합 취소
	PTYPE_MEMBER_CUBE_DISASSEMBLE_CANCEL,		// 큐브 - 분해 취소
	PTYPE_MEMBER_CUBE_DUPLICATE_CANCEL,			// 큐브 - 복제 취소
	PTYPE_MEMBER_UPGRADEITEM_CANCEL,			// 아이템 업그레이드 취소
	PTYPE_MEMBER_MAKE_ITEM_CANCEL,				// 아이템 제작 취소
	PTYPE_MEMBER_SPECIAL_DISASSEMBLE_CANCEL,	// 아이템 해체기 취소
	PTYPE_MEMBER_AVATAR_DISASSEMBLE_CANCEL,		// 아바타 분해 취소
	PTYPE_MEMBER_ITEM_RANDOM_OPTION_CLEAR,		// 아이템 랜덤옵션 클리어(랜덤 옵션만)
	PTYPE_MEMBER_CHANGE_TOWER_STATUS,			// 달의 탑 상태 변경
	PTYPE_MEMBER_TOWER_INFO,					// 달의 탑 입장 가능 여부 얻기
	PTYPE_MEMBER_REWARD_TOWER,					// 달의 탑 보상
	PTYPE_MEMBER_LEAVE_TOWER,					// 달의 탑 나가기
	PTYPE_MEMBER_SKIP_TOWER_STATUS,				// 타이틀,대화상태 넘김
	PTYPE_MEMBER_TOWER_RANKING,					// 달의 탑 랭킹
	PTYPE_MEMBER_STEAL_COIN,					// 돈 뺏는 스킬
	PTYPE_MEMBER_TOWER_REMAIN_PORTION_COUNT,	// 사신도 남은 사용 가능한 포션 수

	PTYPE_MEMBER_GUILD_WAR_REQUEST,				// [길드전쟁] 선포
	PTYPE_MEMBER_GUILD_WAR_ACCEPT,				// [길드전쟁] 수락 여부
	PTYPE_MEMBER_GUILD_WAR_GIVEUP,				// [길드전쟁] 항복

	PTYPE_MEMBER_ITEM_CREATE_TIME,				// 아이템 생성 시간 요청
	PTYPE_MEMBER_REFUND_CASH_ITEM,				// 케쉬 아이템 환불

	PTYPE_MEMBER_SAVE_LANDMARK_POINT,			// 대지부 아이템 사용
	PTYPE_MEMBER_REMOVE_LINK,					// 같은 종류의 링크를 모두 삭제

	PTYPE_MEMBER_START_REGION_WAR,
	PTYPE_MEMBER_END_REGION_WAR,
	PTYPE_MEMBER_CHAT_REGION_APPEND_ITEM,		// 리젠 채팅 아이템 첨부형

	PTYPE_MEMBER_DECLARE_REGION_WAR,
	PTYPE_MEMBER_UNDECLARE_REGION_WAR,
	PTYPE_MEMBER_REGION_WAR_CITY_INFO,
	PTYPE_MEMBER_ADJUST_INCOME_TAX_RATE,
	PTYPE_MEMBER_ADJUST_EXCISE_TAX_RATE,
	PTYPE_MEMBER_WITHDRAW,
	PTYPE_MEMBER_EMPLOY_GUARD,
	PTYPE_MEMBER_CAPTURE_CITY,
	PTYPE_MEMBER_ADD_WAR_GUILD,
	PTYPE_MEMBER_REMOVE_WAR_GUILD,
	PTYPE_MEMBER_REGION_WAR_STATUS,
	PTYPE_MEMBER_REGION_WAR_ALL_CITY_INFO,
	PTYPE_MEMBER_ADD_CURSE_AMULET,
	PTYPE_MEMBER_ADD_BLESSING_AMULET,

	PTYPE_MEMBER_ITEM_FUSION_START,				// 아이템 퓨전(전승) 시작
	PTYPE_MEMBER_ITEM_FUSION_CANCEL,			// 아이템 퓨전(전승) 취소
	PTYPE_MEMBER_ITEM_FUSION_END,				// 아이템 퓨전(전승) 완료

	PTYPE_MEMBER_MAIL_GM_SEND,					// GM이 전체 우편 보내기

	PTYPE_MEMBER_LUCKY_ROULETTE_START,			// 행운의 룰렛 시작
	PTYPE_MEMBER_LUCKY_ROULETTE_END,			// 행운의 룰렛 끝
	PTYPE_MEMBER_USE_PORTALALLAREA_ITEM,		// 축지첩 사용

	PTYPE_MEMBER_USE_CHARM_ITEM,				// 이동부적 사용
	PTYPE_MEMBER_USE_CHARM_ITEM_START,			// 이동부적 사용 시작
	PTYPE_MEMBER_USE_CHARM_ITEM_CANCEL,			// 이동부적 취소

	PTYPE_MEMBER_ACTOR_PET_SUMMON,				// 유저의 팻을 소환 한다.
	PTYPE_MEMBER_ACTOR_PET_RELEASE,				// 유저의 팻을 해제 한다.
	PTYPE_MEMBER_ACTOR_PET_COMMAND,				// 유저의 팻에 명령
	PTYPE_MEMBER_ACTOR_PET_MOUNT,				// 유저의 팻을 탑기
	PTYPE_MEMBER_ACTOR_PET_UNMOUNT,				// 유저의 팻을 내리기

	PTYPE_MEMBER_ACTOR_PET_TO_ITEM,				// 유저의 팻을 다시 아이템으로 만든다.
	PTYPE_MEMBER_ACTOR_PET_REVIVE_START,
	PTYPE_MEMBER_ACTOR_PET_REVIVE_CANCEL,
	PTYPE_MEMBER_ACTOR_PET_REVIVE,				// 유저의 팻을 소생 한다.
	PTYPE_MEMBER_ACTOR_PET_MOVE_LIST,			// 유저의 팻 리스트를 이동
	PTYPE_MEMBER_ACTOR_PET_REMOVE_LIST,			// 유저의 팻 리스트에서 팻 삭제
	PTYPE_MEMBER_ACTOR_PET_FOOD,				// 펫에 음식 먹이기

	PTYPE_MEMBER_SAVE_KEY_BINDING,				// 단축키 저장
	PTYPE_MEMBER_TOWER_ENTER_PORTAL,			// 사신도 비연봉으로 이동
	PTYPE_MEMBER_TOWER_RETURN_PORTAL,			// 사신도또는 비연봉에서 원래 위치로 이동

	PTYPE_MEMBER_BROKER_QUEST_REQUEST,			// 거간꾼 퀘스트 요청
	PTYPE_MEMBER_BROKER_QUEST_ACCEPT,			// 거간꾼 퀘스트 수락
	PTYPE_MEMBER_BROKER_QUEST_SELECT,			// 거간꾼 퀘스트 Select / Unselect
	PTYPE_MEMBER_BROKER_QUEST_CANCEL,			// 거간꾼 퀘스트 포기
	PTYPE_MEMBER_BROKER_QUEST_COMPLETE,			// 거간꾼 퀘스트 완료

	PTYPE_MEMBER_SELF_SHOP_START,				// 개인상점 개설
	PTYPE_MEMBER_SELF_SHOP_VIEW,				// 개인상점 보기
	PTYPE_MEMBER_SELF_SHOP_BUY,					// 개인상점에서 구입
	PTYPE_MEMBER_SELF_SHOP_END,					// 개인상점 종료
	PTYPE_MEMBER_INSTANCE_RESET,
	PTYPE_MEMBER_INSTANCE_RESET_LIST,
	PTYPE_MEMBER_INSTANCE_COOLTIME_LIST,
	PTYPE_MEMBER_INSTANCE_ADD_COOLTIME,
	PTYPE_MEMBER_INSTANCE_UPDATE_UNLOAD_TIME,
	PTYPE_MEMBER_REQUEST_INSTANCE_BIND,
	PTYPE_MEMBER_ANSWER_INSTANCE_BIND,

	PTYPE_MEMBER_SELF_SHOP_OPEN_CHECK,			// 개인상점 개설 가능 여부 체크

	PTYPE_MEMBER_CHAT_ITEM_INFO,				// 채팅을 통해서 들어온 아이템 정보
	PTYPE_MEMBER_EVENT_BOARD,					// 이벤트 리스트 요청

	PTYPE_MEMBER_ATTATCH_UPDATE,				// 추가 강화권

	PTYPE_MEMBER_PARTY_AGENCY_REGISTER,
	PTYPE_MEMBER_PARTY_AGENCY_UNREGISTER,
	PTYPE_MEMBER_PARTY_AGENCY_SOLO_LIST,
	PTYPE_MEMBER_PARTY_AGENCY_PARTY_LIST,
	PTYPE_MEMBER_PARTY_AGENCY_PARTY_INFO,
	PTYPE_MEMBER_PARTY_AGENCY_REQUEST_PARTY_INVITE,
	PTYPE_MEMBER_PARTY_AGENCY_ANNOUNCE_MESSAGE,
	PTYPE_MEMBER_PARTY_AGENCY_CHANGE_COMMENT,

	PTYPE_MEMBER_USE_RANDOM_BOX_START,			// 랜덤박스 사용 시작
	PTYPE_MEMBER_USE_RANDOM_BOX_END,			// 랜덤박스 사용 끝

	PTYPE_MEMBER_BUY_EVENT_CASHITEM,			// 이벤트 케쉬 아이템 구매
	PTYPE_MEMBER_ITEM_EVENT_FUSION,				// 아이템 이벤트 퓨전(전승)
	PTYPE_MEMBER_COPY_AVATAR_OPTION,			// 아바타 옵션 복사 패킷


	PTYPE_MEMBER_VOTE_EVENT_POLL,				// 이벤트 투표
	PTYPE_MEMBER_EVENT_POLL_INFO,				// 이벤트 투표 결과 보기
	PTYPE_MEMBER_FIRE_MAPEVENT_WITH_ITEM,		// 아이템으로 발동하는 맵 이벤트
	PTYPE_MEMBER_CHANGE_ACTOR_NAME,

	PTYPE_MEMBER_DONATE_RICHES_GUILD_ITEM,
	PTYPE_MEMBER_START_GUILD_RESEARCH,
	PTYPE_MEMBER_CANCEL_GUILD_RESEARCH,
	PTYPE_MEMBER_USE_GUILD_RESEARCH,
	PTYPE_MEMBER_GUILD_RESEARCH_INFO,
	PTYPE_MEMBER_GUILD_RESEARCH_ALL_INFO,
	PTYPE_MEMBER_CUSTOMIZE_CHAR,

	PTYPE_MEMBER_WEAR_UPGRADE,					// 아이템 장착창 강화
	PTYPE_MEMBER_RANK_UP_GROWTH_WEAPON_START,
	PTYPE_MEMBER_RANK_UP_GROWTH_WEAPON_CANCEL,
	PTYPE_MEMBER_RANK_UP_GROWTH_WEAPON,
	PTYPE_MEMBER_EXCHANGE_GROWTH_WEAPON,

	PTYPE_MEMBER_GROWTH_FOOD_DISSEMBLE_START,
	PTYPE_MEMBER_GROWTH_FOOD_DISSEMBLE_CANCEL,
	PTYPE_MEMBER_GROWTH_FOOD_DISSEMBLE,
	PTYPE_MEMBER_GROWTH_WEAPON_MIXING_START,
	PTYPE_MEMBER_GROWTH_WEAPON_MIXING_CANCEL,
	PTYPE_MEMBER_GROWTH_WEAPON_MIXING,
	PTYPE_MEMBER_GROWTH_WEAPON_NPC_MIXING,

	PTYPE_MEMBER_LIMIT_EXCHANGE_INFO,			// 제한 교환 정보 요청
	PTYPE_MEMBER_LIMIT_EXCHANGE,				// 제한 교환 요청
	PTYPE_MEMBER_EUP_ONFF,

	PTYPE_MEMBER_PICKUPITEM_AUTO,				// 자동 줍기

	PTYPE_MEMBER_SEND_CLIENT_MAX,				// client가 보낼수 있는 패킷의 최대 TYPE //////////////////////////////////////

	PTYPE_MEMBER_INMAP,							//
	PTYPE_MEMBER_INMAP_FAIL,					//
	PTYPE_MEMBER_INMAP_WITH_MOVE,				//
	PTYPE_MEMBER_ACTORDIE,						//
	PTYPE_MEMBER_UNWEARITEM,					// 주위 캐릭터가 장비를 벗을 때
	PTYPE_MEMBER_CHANGELEVEL,					//
	PTYPE_MEMBER_ACTORINFO,						//
	PTYPE_MEMBER_MOVEMAP,						//
	PTYPE_MEMBER_REGIONINFO,					//
	PTYPE_MEMBER_MOB_MOVE,
	PTYPE_MEMBER_REGRET,						//

	PTYPE_MEMBER_BEGIN_QUEST,					// 퀘스트 시작
	PTYPE_MEMBER_UPDATE_QUEST,					// 퀘스트 상태 변경
	PTYPE_MEMBER_END_QUEST,						// 퀘스트 종료

	PTYPE_MEMBER_MAPEVENT_SUMMON_MOB,
	PTYPE_MEMBER_MAPEVENT_PORTAL,
	PTYPE_MEMBER_KEEP_TIME,						// 표국 확장 탭의 유효 시간을 보낸다.
	PTYPE_MEMBER_JACKPOT_MONEY,					// 잭팟 머니 (S-C)
	PTYPE_MEMBER_JACKPOT_CLICK_RESULT,			// 잭팟 결과 (S-C)
	PTYPE_MEMBER_JACKPOT_RESULT_BROADCASTING,	// 다른 캐릭터의 잭팟 결과 (S-C)
	PTYPE_MEMBER_JACKPOT_POINT,					// 캐릭터의 잭팟 포인터 (s-C)
	PTYPE_MEMBER_ALIVE,
	PTYPE_MEMBER_ADD_ACCEPT_FRIEND_INFO,
	PTYPE_MEMBER_ADD_DENY_FRIEND_INFO,
	PTYPE_MEMBER_ACCEPT_FRIEND_LOGONOFF,

	PTYPE_MEMBER_MISSION_MAP_ANNOUNCE,			//
	PTYPE_MEMBER_CHANGE_MISSIONMAP_STATUS,		//
	PTYPE_MEMBER_MISSION_END,					//
	PTYPE_MEMBER_MISSION_PD_UPDATE_POINT,		//
	PTYPE_MEMBER_MISSION_TS_UPDATE_STEP,		//
	PTYPE_MEMBER_MISSION_TS_BEST_ZONE_STEP,		//
	PTYPE_MEMBER_CURRENT_MISSIONMAP_STATUS,		//
	PTYPE_MEMBER_MISSION_REWARD,				//
	PTYPE_MEMBER_MISSION_REWARD_RANK,			//
	PTYPE_MEMBER_MISSION_DG_UPDATE,
	PTYPE_MEMBER_MISSION_POINT_RANK,
	PTYPE_MEMBER_MISSION_RV_GAMEINFO,
	PTYPE_MEMBER_MISSION_RV_PLAYER_POINT,
	PTYPE_MEMBER_MISSION_RV_REWARD,
	PTYPE_MEMBER_MISSION_RV_HP_INFO,
	PTYPE_MEMBER_MISSION_MT_MATCH_LIST,
	PTYPE_MEMBER_MISSION_MT_MATCH_INFO,
	PTYPE_MEMBER_MISSION_MT_ROUND_STATUS,
	PTYPE_MEMBER_MISSION_MT_SEED_INFO,
	PTYPE_MEMBER_MISSION_MT_SEED_INFO_ANNOUNCE,
	PTYPE_MEMBER_MISSION_MT_MATCH_RESULT,
	PTYPE_MEMBER_MISSION_MT_HP_INFO,
	PTYPE_MEMBER_MISSION_MT_MATCH_RESULT_NOTICE,

	PTYPE_MEMBER_GUILD_KEEP_INFO,				// 문파 창고 정보
	PTYPE_MEMBER_REGISTER_GUILD_MARK,			// 문파 문장 등록 (유저)

	PTYPE_MEMBER_GUILD_DISPLAY_INFO_ANNOUNCE,	// 클라의 화면 출력용
	PTYPE_MEMBER_GUILD_INFO,
	PTYPE_MEMBER_GUILD_MEMBER_INFO_ALL,
	PTYPE_MEMBER_GUILD_MEMBER_INFO_ONE_ANNOUNCE,
	PTYPE_MEMBER_GUILD_MEMBER_LOGINON_ANNOUNCE,
	PTYPE_MEMBER_GUILD_MEMBER_LOGINOFF_ANNOUNCE,
	PTYPE_MEMBER_GUILD_CHANGE_POSITION_ANNOUNCE,
	PTYPE_MEMBER_GUILD_CHANGE_LEVEL_ANNOUNCE,
	PTYPE_MEMBER_GUILD_CHANGE_SORT_ANNOUNCE,
	PTYPE_MEMBER_GUILD_CHANGE_MARK_ANNOUNCE,
	PTYPE_MEMBER_GUILD_CHANGE_NOTIFY_MESSAGE_ANNOUNCE,
	PTYPE_MEMBER_GUILD_CHANGE_COIN_FAME_ITEM_ANNOUNCE,
	PTYPE_MEMBER_GUILD_DESTROY_ANNOUNCE,
	PTYPE_MEMBER_GUILD_SECEDE_MEMBER_ANNOUNCE,
	PTYPE_MEMBER_GUILD_PURGE_MEMBER_ANNOUNCE,

	PTYPE_MEMBER_PARTY_INFO,
	PTYPE_MEMBER_PARTY_MEMBER_INFO_ONE_ANNOUNCE,
	PTYPE_MEMBER_PARTY_SECEDE_MEMBER_ANNOUNCE,
	PTYPE_MEMBER_PARTY_PURGE_MEMBER_ANNOUNCE,
	PTYPE_MEMBER_PARTY_CHANGE_MASTER_ANNOUNCE,
	PTYPE_MEMBER_PARTY_CHANGE_HP_MP_SP_ANNOUNCE,
	PTYPE_MEMBER_PARTY_CHANGE_LIVE_ANNOUNCE,
	PTYPE_MEMBER_PARTY_CHANGE_DEAD_ANNOUNCE,
	PTYPE_MEMBER_PARTY_CHANGE_MAP_ANNOUNCE,
	PTYPE_MEMBER_PARTY_CHANGE_LEVEL_ANNOUNCE,
	PTYPE_MEMBER_ATTACK_FAIL_USE,

	PTYPE_MEMBER_ACTIVATED_LINKED_SKILL_ID,		// 연계 무공 발동 전달 only server to client(181)
	PTYPE_MEMBER_MAIL_SEND_ANNOUNCE,			// 전서구 받은사람 알림
	XXX_PTYPE_MEMBER_SUMMON_REQUEST,
	XXX_PTYPE_MEMBER_SIEGE_CASTLE_INFO,
	XXX_PTYPE_MEMBER_SIEGE_UPDATE_SIEGE_TIME,
	XXX_PTYPE_MEMBER_SIEGE_CHANGE_SIEGE_STATUS,
	XXX_PTYPE_MEMBER_SIEGE_CHANGE_TAX_RATE,
	XXX_PTYPE_MEMBER_SIEGE_CHANGE_DEVELOPMENT,
	XXX_PTYPE_MEMBER_SIEGE_CHANGE_INVENTMENT_GRADE,
	XXX_PTYPE_MEMBER_SIEGE_DEFENCE_MOB_INFO,
	XXX_PTYPE_MEMBER_SIEGE_GATE_DURABILITY,
	XXX_PTYPE_MEMBER_SIEGE_BATTLE_WINNER,
	XXX_PTYPE_MEMBER_SIEGE_OCCUPY_CASTLE,
	PTYPE_MEMBER_PRODUCE_INDICATE_ANNOUNCE,		// 생산 예시
	PTYPE_MEMBER_PRODUCE_SUCCESS_ANNOUNCE,		// 생산 성공시 주변에 알림
	PTYPE_MEMBER_ENTER_BATTLE,
	PTYPE_MEMBER_LEAVE_BATTLE,
	PTYPE_MEMBER_INIT_SKILL_AND_SKILLPOINT,		// 무공 초기화

	PTYPE_MEMBER_DUEL_REQUEST_POSSIBILITY,		// 비무 신청 가능 여부
	PTYPE_MEMBER_DUEL_QUESTIONS_APPROVALS,		// 비무 신청 ( S -> C )
	PTYPE_MEMBER_DUEL_START,					// 비무 시작
	PTYPE_MEMBER_DUEL_RESULT,					// 비무 결과 (종료)
	PTYPE_MEMBER_DUEL_POINT,					// 비무 포인트 (승리자에게만)

	PTYPE_MEMBER_ADD_PASSIVE_SKILL,
	PTYPE_MEMBER_REMOVE_PASSIVE_SKILL,

	PTYPE_MEMBER_CHANNEL_COUNT,					// 현재 맵의 채널수를 클라에게 전송

	PTYPE_MEMBER_UPDATE_FAME,
	PTYPE_MEMBER_UPDATE_COIN,
	PTYPE_MEMBER_UPDATE_LEVEL,
	PTYPE_MEMBER_UPDATE_BODY_POINT,
	PTYPE_MEMBER_UPDATE_SKILL_POINT,
	PTYPE_MEMBER_UPDATE_EXP,
	PTYPE_MEMBER_UPDATE_STATS,

	PTYPE_MEMBER_UPDATE_HP,
	PTYPE_MEMBER_UPDATE_MP,
	PTYPE_MEMBER_UPDATE_SP,
	PTYPE_MEMBER_UPDATE_HPMP,
	PTYPE_MEMBER_UPDATE_HPSP,
	PTYPE_MEMBER_UPDATE_MPSP,
	PTYPE_MEMBER_UPDATE_HPMPSP,

	PTYPE_MEMBER_UPDATE_MAX_HP,
	PTYPE_MEMBER_UPDATE_MAX_MP,
	PTYPE_MEMBER_UPDATE_MAX_SP,
	PTYPE_MEMBER_UPDATE_MAX_HPMP,
	PTYPE_MEMBER_UPDATE_MAX_HPSP,
	PTYPE_MEMBER_UPDATE_MAX_MPSP,
	PTYPE_MEMBER_UPDATE_MAX_HPMPSP,

	PTYPE_MEMBER_LEARN_SKILL,

	PTYPE_MEMBER_ADD_ITEM_TO_INVENTORY,
	PTYPE_MEMBER_REMOVE_ITEM_FROM_INVENTORY,
	PTYPE_MEMBER_UPDATE_ITEM_COUNT_FROM_INVENTORY,

	PTYPE_MEMBER_ADD_ITEM_TO_WEAR,
	PTYPE_MEMBER_REMOVE_ITEM_FROM_WEAR,

	PTYPE_MEMBER_ADD_ITEM_TO_KEEP,
	PTYPE_MEMBER_ADD_ITEM_TO_COMBINE_KEEP,
	PTYPE_MEMBER_REMOVE_ITEM_FROM_KEEP,
	PTYPE_MEMBER_REMOVE_ITEM_FROM_COMBINE_KEEP,
	PTYPE_MEMBER_UPDATE_ITEM_COUNT_FROM_KEEP,

	PTYPE_MEMBER_UPDATE_ITEM_DURABILITY,
	PTYPE_MEMBER_UPGRADE_ITEM,
	PTYPE_MEMBER_UPGRADE_RANDOM_OPTION_ITEM,
	PTYPE_MEMBER_UPDATE_JACKPOT_POINT,

	PTYPE_MEMBER_UPDATE_BSPECIAL,
	PTYPE_MEMBER_UPDATE_FSPECIAL,
	PTYPE_MEMBER_UPDATE_ISPECIAL,

	PTYPE_MEMBER_UPDATE_ANGER,

	PTYPE_MEMBER_ADD_AFFECT,
	PTYPE_MEMBER_REMOVE_AFFECT,
	PTYPE_MEMBER_STACK_AFFECT,
	PTYPE_MEMBER_IMMUNE_AFFECT,

	PTYPE_MEMBER_COMPLETED_QUEST_INFO,			// 퀘스트 정보

	PTYPE_MEMBER_AUTO_LEARN_SKILL,				// 스킬 트리에 따른 자동 습득 정보

	PTYPE_MEMBER_CASINO_ROLL,

	PTYPE_MEMBER_TICK_DAMAGES,

	PTYPE_MEMBER_START_HINT,					// 몹 암시
	PTYPE_MEMBER_CANCEL_HINT,
	PTYPE_MEMBER_ACTOR_ANIMATION,

	PTYPE_MEMBER_SPECIAL_ABILITY_INFO,			// only S -> C, 전문 능력 정보

	PTYPE_MEMBER_TRANSFROM_LINK,				// 변신 데이타 quick link
	PTYPE_MEMBER_TRANSFROM_SKILL,				// 변신 데이타 skill

	PTYPE_MEMBER_MESSAGE_SPAWN_MOB,
	PTYPE_MEMBER_MESSAGE_DEAD_MOB,

	PTYPE_MEMBER_UPDATE_MARK_EXP,				// 칭호 경험치 업데이트

	PTYPE_MEMBER_PARTY_POSITION,					// 현재 맵,채널에 접속한 유저의 위치를 클라이언트에 전달

	PTYPE_MEMBER_ADD_SEALITEM,
	PTYPE_MEMBER_REMOVE_SEALITEM,
	PTYPE_MEMBER_ADD_SOULITEM,
	PTYPE_MEMBER_REMOVE_SOULITEM,
	PTYPE_MEMBER_UPDATE_SOULITEM_COUNT,
	PTYPE_MEMBER_UPGRADE_SOULITEM,

	PTYPE_MEMBER_UPDATE_MAKE_GUILD_ITEM,		// 길드 장인산물
	PTYPE_MEMBER_UPDATE_BATTLE_GUILD_ITEM,		// 길드 전쟁산물
	PTYPE_MEMBER_UPDATE_PURIFY_GUILD_ITEM,		// 길드 정화산물
	PTYPE_MEMBER_GUILD_KEEP_LINES_ANNOUNCE,		// 길드 창고 라인수 (모든 길드원에게 전달)

	PTYPE_MEMBER_ADD_ITEM_TO_GUILDKEEP,
	PTYPE_MEMBER_REMOVE_ITEM_FROM_GUILDKEEP,
	PTYPE_MEMBER_UPDATE_ITEM_COUNT_FROM_GUILDKEEP,
	PTYPE_MEMBER_SWAP_ITEM_INTO_GUILDKEEP,		// 길드창고에서의 교환
	PTYPE_MEMBER_SOUL_ITEM_HISTORY,

	PTYPE_MEMBER_KEEP_INFO,						// 창고 정보
	PTYPE_MEMBER_COMBINE_KEEP_INFO,				// 통합 창고 정보
	PTYPE_MEMBER_UPDATE_KEEP_LINES,				// 창고 라인수
	PTYPE_MEMBER_UPDATE_SECOND_KEEP_LINES,		// 두번째 창고 라인수
	PTYPE_MEMBER_UPDATE_KEEP_COIN,				// 창고 금액

	PTYPE_MEMBER_SOUL_ITEM_USE,					// 7혼 아이템 사용

	PTYPE_MEMBER_GM_PUBLIC_NOTIFY,					// 채팅 서버가 내려갔을시에 프록시에 강제로 내려주는 시스템 공지

	PTYPE_MEMBER_PARTY_PICKUP_ITEM,				// 파티 후 자동분배시 획득한 아이템에 누가 주웠는지에 대한 정보 패킷
	PTYPE_MEMBER_CHANGE_PARTY_AUTO_DEVIDE,		// 파티 분배 방식 변경

	PTYPE_MEMBER_AUTO_PROTECT_AUTH_REQUEST,			// 오토 사용 검사

	PTYPE_MEMBER_SERVICE_EXPIRE_TIME,			// 서비스 종료 남은 시간

	PTYPE_MEMBER_PCBANG_FLAG_UPDATE,			// 피씨방 플러그 업데이트
	PTYPE_MEMBER_UPDATE_SEAL_COOL_TIME,			// 봉인지서 쿨타임 갱신

	PTYPE_MEMBER_UPDATE_NOW_CASH,				// 현재 케쉬 업데이트

	PTYPE_MEMBER_UPDATE_RESET_GUILD_INFO,

	PTYPE_MEMBER_BILLING_SERVICE_LOCK,			// 빌링 서비스 락
	PTYPE_MEMBER_UPDATE_BIND,					// 바인드 업데이트

	PTYPE_MEMBER_ADD_GUILD_AFFECT,
	PTYPE_MEMBER_REMOVE_GUILD_AFFECT,

	PTYPE_MEMBER_AUTO_USER_FROM_SERVER,			// 유저가 오토인지를 서버가 알려주는 패킷

	PTYPE_MEMBER_UPDATE_ACTIVITY_POINT,			// 활동력 포인트 전달

	PTYPE_MEMBER_UPDATE_INVENTORY,				// 일반 인벤토리 전체 정보 전달
	PTYPE_MEMBER_UPDATE_PPINVENTORY,			// PP 인벤토리 전체 정보 전달

	PTYPE_MEMBER_SORT_ITEM,						// 인벤토리/창고 정렬

	PTYPE_MEMBER_UPDATE_DAILY_QUEST,			// 일일 반복 퀘스트 업데이트
	PTYPE_MEMBER_UPDATE_ALL_DAILY_QUEST,		// 일일 반복 퀘스트 전체 업데이트
	PTYPE_MEMBER_DESTROY_WEARED_ITEM_BY_PK_PENALTY,	// PK 페널티로 창작한 아이템(귀속 등의 버리기 불가) 파괴
	PTYPE_MEMBER_DESTROY_GUARD_WEARED_ITEM_BY_PK_PENALTY,	// PK 페널티로 창작한 아이템(귀속 등의 버리기 불가) 파괴 방어
	PTYPE_MEMBER_CURRENT_WORLD_EVENT,			// 진행 중인 월드 이벤트 아이디
	PTYPE_MEMBER_COMPLETE_WORLD_EVENT_FLAG,		// 일정 목표 달성 시
	PTYPE_MEMBER_START_WORLD_EVENT,				// 월드 이벤트 시작 시
	PTYPE_MEMBER_COMPLETE_WORLD_EVENT,			// 월드 이벤트 완료 시
	PTYPE_MEMBER_DEBUFF_WORLD_EVENT,			// 월드 이벤트 몹 디버프

	PTYPE_MEMBER_ANOTHER_CHAR_INFO_GM_COMMAND,	// 다른 캐릭터의 정보를 보여줌
	PTYPE_MEMBER_UPDATE_ACCOUNT_EVENT_POINT,	// 계정 이벤트 포인트

	PTYPE_MEMBER_GUILD_WAR_OTHER_GUILD_INFO,	// 전쟁중인 길드 정보를 받음
	PTYPE_MEMBER_ACTION_HELP,
	PTYPE_MEMBER_ACTION_FLEEING,

	PTYPE_MEMBER_CONSIGN_SELL_ALERT,			// 경매 판매됨 알림
	PTYPE_MEMBER_UPDATE_ITEM_ALL_OPTION,		// 아이템의 모든 옵션 변경 알림

	PTYPE_MEMBER_UPDATE_GP,						// 근성 수치 업데이트

	PTYPE_MEMBER_CLEAR_INVENTORY_AND_CASH_INVENTORY,	// 모든 가방과 캐쉬 가방을 초기화함
	PTYPE_MEMBER_UPDATE_PLAY_TIME,
	PTYPE_MEMBER_UPDATE_TOWER_COUNT,			// 달의 탑 입장 횟수

	PTYPE_MEMBER_CHANGE_WDAY,					// 요일 변경
	PTYPE_MEMBER_STOP_ROULETTE,					// 룰렛 스톱

	PTYPE_MEMBER_ADD_ITEM_TO_PET,
	PTYPE_MEMBER_REMOVE_ITEM_FROM_PET,
	PTYPE_MEMBER_UPDATE_ITEM_COUNT_FROM_PET,
	PTYPE_MEMBER_ADD_ACTOR_PET,					// 팻 추가
	PTYPE_MEMBER_REMOVE_ACTOR_PET,				// 팻 삭제
	PTYPE_MEMBER_UPDATE_ACTOR_PET_COOL_TIME,	// 팻 쿨타임 업데이트
	PTYPE_MEMBER_UPDATE_ACTOR_PET_DEATH_COOL_TIME,// 팻 데스 쿨타임 업데이트
	PTYPE_MEMBER_MOVE_LANDMARK_POINT,			// 대지부 아이템 이동 결과 리턴

	PTYPE_MEMBER_EVENT_FLAG_SESO_TIME,			// 세소 이벤트 업데이트

	PTYPE_MEMBER_UPDATE_BROKER_QUEST,			// 거간꾼 퀘스트 업데이트
	PTYPE_MEMBER_END_BROKER_QUEST,				// 거간꾼 퀘스트 종료


	PTYPE_MEMBER_COMPLETED_ONEDAY_QUEST_INFO,	// 일일반복 퀘스트 완료 정보
	PTYPE_MEMBER_RESET_COMPLETED_ONEDAY_QUEST_INFO, // 일일 반복 퀘스트 완료 리스트 리셋

	PTYPE_MEMBER_START_SELFSHOP,				// 개인상점 시작
	PTYPE_MEMBER_END_SELFSHOP,					// 개인상점 끝
	PTYPE_MEMBER_SELL_SELFSHOP,					// 개인상점에서 아이템 판매됨

	PTYPE_MEMBER_RESET_TODAY_MISSION,			// 오늘의 미션 리셋
	PTYPE_MEMBER_UPDATE_TODAY_MISSION,			// 오늘의 미션 업데이트
	PTYPE_MEMBER_COMPLETE_TODAY_MISSION,		// 오늘의 미션 완료


	PTYPE_MEMBER_UPDATE_RICHES_GUILD_ITEM,

	PTYPE_MEMBER_UPDATE_ACTOR_PET_EXPIRE_TIME,	// 팻 만료 시간 업데이트

	PTYPE_MEMBER_CHANGE_PARTY_COIN_DEVIDE,		// 파티 코인 분배 방식 변경
	PTYPE_MEMBER_UPDATE_WEAR_UPGRADE,			// 케릭터 장착창 정보 업데이트
	PTYPE_MEMBER_UPDATE_GROWTH_WEAPON,
	PTYPE_MEMBER_UPDATE_RANK_UP_GROWTH_WEAPON,
	PTYPE_MEMBER_RESET_ITEM_COOLTIME,
	PTYPE_MEMBER_UPDATE_INS_RESET_COUNT,
	PTYPE_MEMBER_INIT_AWAKE_SKILL_AND_SKILL_POINT,		// 무공 초기화
	PTYPE_MEMBER_CHANGE_RESTORATION_EXP,
	PTYPE_MEMBER_TRANSFER_MAX,					// 클라와 주고받는 최대값
};

enum PTYPE_GAME_
{
	PTYPE_GAME_ADDACTOR_TOMOB,				//  0
	PTYPE_GAME_REMOVEACTOR,					//  2
	PTYPE_GAME_UPDATEACTOR_DEAD,			//  5
	PTYPE_GAME_UPDATEACTOR_REVIVE,			//  6
	PTYPE_GAME_UPDATEACTOR_INFO,			//  7
	PTYPE_GAME_MOVEACTOR,					//  9
	PTYPE_GAME_MOVE_TURN_ACTOR,
	PTYPE_GAME_RECALLMOB,					//  7 몹소환
	PTYPE_GAME_CASINO,						//  7 카지노

	PTYPE_GAME_CREATE_MOB,
	PTYPE_GAME_DEAL_DAMAGE,
	PTYPE_GAME_DEAD_MOB,
	PTYPE_GAME_DELETE_MOB,
	PTYPE_GAME_ADD_MOB_AFFECT,
	PTYPE_GAME_REMOVE_MOB_AFFECT,
	PTYPE_GAME_HEAL_MOB,
	PTYPE_GAME_CAST_SKILL,
	PTYPE_GAME_CAST_SKILL_SELF,
	PTYPE_GAME_ADD_MISSION_MOB,
	PTYPE_GAME_REMOVE_ZONE_MISSION_MOB,
	PTYPE_GAME_ATTACK_KNOCKBACKMOVE,
	PTYPE_GAME_SUMMON_MAP_EVENT_MOB,
	PTYPE_GAME_SET_INVULNERABILITY_AFFECT,
	PTYPE_GAME_UPDATE_POWERS,
	PTYPE_GAME_MODIFY_AGGRO_PERCENT,
	PTYPE_GAME_HIDDEN_STATUS,

	PTYPE_GAME_ENTER_BATTLE,
	PTYPE_GAME_LEAVE_BATTLE,
	PTYPE_GAME_STOP_FOR_TALK,
	PTYPE_GAME_START_HINT,
	PTYPE_GAME_CANCEL_HINT,
	PTYPE_GAME_ATTACK_REACTION,

	PTYPE_GAME_PET_SUMMON,
	PTYPE_GAME_USER_EVENT_ATTACK,
	PTYPE_GAME_USER_EVENT_ATTACKED_BY,

	PTYPE_GAME_MOUNT_RICKSHAW,
	PTYPE_GAME_UNMOUNT_RICKSHAW,

	PTYPE_GAME_ACTOR_ANIMATION,

	PTYPE_GAME_CREATE_INSTANCE_MAP,
	PTYPE_GAME_DESTROY_INSTANCE_MAP,
	PTYPE_GAME_RESET_KILL_EXPIRED_TIME,

	PTYPE_GAME_ADD_MGT_MISSION_MOB,
	PTYPE_GAME_ADD_AGGRO,

	PTYPE_GAME_RESCUE_MOB,
	PTYPE_GAME_CANCEL_RESCUE,
	PTYPE_GAME_CHANGE_STONE_REGENABLE,
	PTYPE_GAME_WEAR_MARK_ITEM,
	PTYPE_GAME_UNWEAR_MARK_ITEM,

	PTYPE_GAME_GM_HIDE,
	PTYPE_GAME_RESPAWN_UNIQUE_MOB,
	PTYPE_GAME_LEAVE_BATTLE_SUMMON_MOB,
	PTYPE_GAME_DEAD_UNIQUE_MOB,
	PTYPE_GAME_WORLD_EVENT_STATUS,
	PTYPE_GAME_ACTION_HELP,
	PTYPE_GAME_ACTION_FLEEING,
	PTYPE_GAME_REGION_WAR_STATUS,
	PTYPE_GAME_REGION_WAR_INFO,
	PTYPE_GAME_START_REGION_WAR,
	PTYPE_GAME_END_REGION_WAR,
	PTYPE_GAME_ADD_WAR_GUILD,
	PTYPE_GAME_REMOVE_WAR_GUILD,
	PTYPE_GAME_CAPTURE_CITY,
	PTYPE_GAME_RESET_TOTEM,

	PTYPE_GAME_ACTOR_PET_SUMMON,
	PTYPE_GAME_ACTOR_PET_COMMAND,
	PTYPE_GAME_READY_MOB_SERVER,
	PTYPE_GAME_UPDATE_MAX_HP,


	PTYPE_GAME_CHANGE_ACTOR_NAME,

	PTYPE_GAME_MAX							// MAX
};


enum PTYPE_CHAT_
{
	PTYPE_CHAT_LOGIN,
	PTYPE_CHAT_LOGOUT,
	PTYPE_CHAT_INMAP,
	PTYPE_CHAT_OUTMAP,
	PTYPE_CHAT_UPDATE_GUILD_ID,
	PTYPE_CHAT_UPDATE_PARTY_ID,
	PTYPE_CHAT_SYSTEM_NOTIFY,
	PTYPE_CHAT_PRIVATE_NOTIFY,
//	PTYPE_CHAT_MAKEITEM_NOTIFY,
	PTYPE_CHAT_INMAP_CHECK,
	PTYPE_CHAT_GM_PUBLIC_NOTIFY,
	PTYPE_CHAT_GM_PRIVATE_NOTIFY,
//	PTYPE_CHAT_UPGRADEITEM_NOTIFY,
//	PTYPE_CHAT_GUILDWAR_START_NOTIFY,
//	PTYPE_CHAT_GUILDWAR_GIVEUP_NOTIFY,
//	PTYPE_CHAT_GUILDWAR_DENY_NOTIFY,
	PTYPE_CHAT_GUILDWAR_START_NOTIFY,
	PTYPE_CHAT_GUILDWAR_GIVEUP_NOTIFY,
	PTYPE_CHAT_GUILDWAR_DENY_NOTIFY,
	PTYPE_CHAT_LUCKYROULETTEITEM_NOTIFY,
	PTYPE_CHAT_EVENT_ITEM_NOTIFY,
	PTYPE_CHAT_PARTY_AGENCY_ANNOUNCE_MESSAGE,
	PTYPE_CHAT_CHANGE_ACTOR_NAME,
	PTYPE_CHAT_GM_MAP_NOTIFY,
	PTYPE_CHAT_DB_STATUS,
};

enum PTYPE_MONITOR_
{
	PTYPE_MONITOR_RESULT				= 0,		//  0
	PTYPE_MONITOR_DAEMON_RUN,						//  데몬 구동	(웹 명령)
	PTYPE_MONITOR_DAEMON_KILL,						//  데몬 내림	(웹 명령)
	PTYPE_MONITOR_USER_LOCK,						//  유저 접속 해제 및 데이타 싱크
	PTYPE_MONITOR_USER_DATA_SYNC,					//  데이타 싱크
	PTYPE_MONITOR_DAEMON_START_ALERT,				//  데몬 시작 알림
	PTYPE_MONITOR_DAEMON_END_ALERT,					//  데몬 종료 알림
	PTYPE_MONITOR_SERVICE_LOCK,						//  서비스 락
	PTYPE_MONITOR_ALL_USER_BAN,						//	서버에 모든 접속 유저들 밴 시킴
	PTYPE_MONITOR_GM_PUBLIC_NOTIFY,					//  공지
	PTYPE_MONITOR_CHANNEL_DAEMON_RUN,				//	게임 체널 데몬들 올림
	PTYPE_MONITOR_SEND_MAIL_ALERT,					//	웹에서 메일 보냄 액터에 알림
	PTYPE_MONITOR_CURRENT_CONNECT_USERS,			//	동접자수 요청
	PTYPE_MONITOR_MAP_CONNECT_USERS,				//	맵 채널별 동접자수
	PTYPE_MONITOR_GM_PRIVATE_NOTIFY,					//	개인공지

	PTYPE_MONITOR_SERVER_DOWN,
	PTYPE_MONITOR_SERVER_UP,
	PTYPE_MONITOR_ABNORMAL_EXP,

	PTYPE_MONITOR_REFRESH_SERVERCMD_CONNECT,		//	SERVERCMD 접속 정보 갱신
	PTYPE_MONITOR_REFRESH_PACKET_VERSION,			//	패킷 버전 갱신
	PTYPE_MONITOR_REALTIME_EVENT_UPDATE,			//	경험치, 명성 등등 이벤트 경험치 변경

	PTYPE_MONITOR_LOGIN_CONNECT_COUNT_INFO,			//	최대 동접자수 변경
	PTYPE_MONITOR_UPDATE_LOGIN_CONNECT_COUNT,		//	최대 동접자수 변경
	PTYPE_MONITOR_MAP_CONNECT_COUNT_INFO,			//	맵별 최대 동접자수 변경
	PTYPE_MONITOR_UPDATE_MAP_CONNECT_COUNT,			//	맵별 최대 동접자수 변경

	PTYPE_MONITOR_FORCE_LOGOUT,						//	모니터에서 유저가 종료 안될시에 메모리에서 강제 해제
	PTYPE_MONITOR_CHAT_BAN,							//	채팅 금지
	PTYPE_MONITOR_USE_NPROTECT_AUTH,
	PTYPE_MONITOR_SERVICE_EXPIRE_TIME,				//	서비스 종료 남은 시간(시간 종료후 모든 유저 강종)
	PTYPE_MONITOR_SERVICE_GROUP_LOCK,				//  서비스 군별 서비스 락
	PTYPE_MONITOR_BILLING_SERVICE_LOCK,				//	빌링 서비스 락
	PTYPE_MONITOR_AUTOUSER_BAN,						//	오토유저 밴
	PTYPE_MONITOR_CHANGE_SERVER_SETTING,
	PTYPE_MONITOR_GET_SERVER_SETTING,
	PTYPE_MONITOR_CHANGE_STATUS_VALUE,
	PTYPE_MONITOR_GET_STATUS_VALUE,
	PTYPE_MONITOR_ADD_SERVER_COMMAND,
	PTYPE_MONITOR_DEL_SERVER_COMMAND,
	PTYPE_MONITOR_UPDATE_SERVER_COMMNAD,
	PTYPE_MONITOR_UPDATE_EVENT_LIST,				// 이벤트 리스트 Update
	PTYPE_MONITOR_AWAKE_ACCOUNT,

	PTYPE_MONITOR_Process_Status,
};

enum PTYPE_CHAT_GUEST_
{
	PTYPE_CHAT_GUEST_LOGIN,				// 유저가 맵에 들어오면서 채팅에도 로그인
	PTYPE_CHAT_GUEST_LOGOUT,			// 유저가 맵을 나가면 채팅에도 로그아웃
};

enum PTYPE_CHAT_MEMBER_
{
	PTYPE_CHAT_MEMBER_INMAP,					// 인 맵
	PTYPE_CHAT_MEMBER_OUTMAP,					// 아웃 맵
	PTYPE_CHAT_MEMBER_ALIVE,					// 라이브패킷

	PTYPE_CHAT_MEMBER_MAP,						// 맵 채팅
	PTYPE_CHAT_MEMBER_TRADE,					// 교환 채팅

	PTYPE_CHAT_MEMBER_GUILD,					// 길드 채팅
	PTYPE_CHAT_MEMBER_PARTY_SEARCH,				// 파티 찾기 채팅
	PTYPE_CHAT_MEMBER_PARTY,					// 파티 채팅
	PTYPE_CHAT_MEMBER_WHISPER,					// 귓말 채팅
	PTYPE_CHAT_MEMBER_SYSTEM_NOTIFY,			// 시스템 공지
	PTYPE_CHAT_MEMBER_PRIVATE_NOTIFY,			// 개인 공지
	PTYPE_CHAT_MEMBER_CHARGED_ITEM_NOTIFY,		// 유료 아이템 공지

	PTYPE_CHAT_MEMBER_CUSTOM,					// 커스텀 체널 채팅
	PTYPE_CHAT_MEMBER_CUSTOM_CREATE,			// 커스텀 체널 생성
	PTYPE_CHAT_MEMBER_CUSTOM_DELETE,			// 커스텀 체널 삭제
	PTYPE_CHAT_MEMBER_CUSTOM_JOIN,				// 참여
	PTYPE_CHAT_MEMBER_CUSTOM_EXIT,				// 이탈
	PTYPE_CHAT_MEMBER_CUSTOM_KICK,				// 추방
	PTYPE_CHAT_MEMBER_CUSTOM_BAN,				// 영구 추방
	PTYPE_CHAT_MEMBER_CUSTOM_ENTRUST,			// 위임
	PTYPE_CHAT_MEMBER_CUSTOM_LIST,				// 자기가 속한 체널 리스트 보기

	PTYPE_CHAT_MEMBER_GUILD_SHORT_NOFIFY,		// 길드 채팅
	PTYPE_CHAT_MEMBER_MAKEITEM_NOTIFY,			// 아이템 강화 공지

	PTYPE_CHAT_MEMBER_GM_PUBLIC_NOTIFY,			// GM 전체 공지
	PTYPE_CHAT_MEMBER_GM_PRIVATE_NOTIFY,		// GM 개인 공지

	PTYPE_CHAT_MEMBER_UPGRADEITEM_NOTIFY,		// 강화 공지
	PTYPE_CHAT_MEMBER_GUILDWAR_START_NOTIFY,	// 길드 전쟁 시작 공지
	PTYPE_CHAT_MEMBER_GUILDWAR_GIVEUP_NOTIFY,	// 길드 전쟁 항복(종료) 공지
	PTYPE_CHAT_MEMBER_GUILDWAR_DENY_NOTIFY,		// 길드 전쟁 거절 공지


	PTYPE_CHAT_MEMBER_MAP_APPEND_ITEM,						// 맵 채팅 아이템 첨부형
	PTYPE_CHAT_MEMBER_TRADE_APPEND_ITEM,					// 교환 채팅 아이템 첨부형
	PTYPE_CHAT_MEMBER_GUILD_APPEND_ITEM,						// 길드 채팅 아이템 첨부형
	PTYPE_CHAT_MEMBER_PARTY_SEARCH_APPEND_ITEM,				// 파티 찾기 채팅 아이템 첨부형
	PTYPE_CHAT_MEMBER_PARTY_APPEND_ITEM,						// 파티 채팅 아이템 첨부형
	PTYPE_CHAT_MEMBER_WHISPER_APPEND_ITEM,					// 귓말 채팅 아이템 첨부형
	PTYPE_CHAT_MEMBER_CUSTOM_APPEND_ITEM,					// 커스텀 체널 채팅 아이템 첨부형
	PTYPE_CHAT_MEMBER_GUILD_SHORT_NOFIFY_APPEND_ITEM,		// 길드 채팅 아이템 첨부형

	PTYPE_CHAT_MEMBER_LUCKYROULETTEITEM_NOTIFY,	// 행운의 룰렛 공지
	PTYPE_CHAT_MEMBER_ITEM_INFO,				// 채팅을 통해서 들어온 아이템 정보
	PTYPE_CHAT_MEMBER_EVENT_ITEM_NOTIFY,		// 렌덤 박스 공지

	PTYPE_CHAT_MEMBER_PARTY_AGENCY_ANNOUCE_MESSAGE,
};

enum PTYPE_LOG_
{
	PTYPE_LOG_NORMAL,
	PTYPE_LOG_CUSS_REPORT,
	PTYPE_LOG_BILLING,
};

enum PTYPE_TCOIN_
{
	PTYPE_TCOIN_CHECK_IN,
	PTYPE_TCOIN_CHECK_OUT,
	PTYPE_TCOIN_CHARGE,
};

enum PTYPE_BILLING
{
	PTYPE_BILLING_CASH_INFO,				// 케쉬 정보
	PTYPE_BILLING_NOW_CASH,					// 케쉬 정보 업데이트
	PTYPE_BILLING_BUY_ITEM,					// 상점 아이템 구매
	PTYPE_BILLING_INC_INVENTORY,			// 가방 확장
	PTYPE_BILLING_INC_KEEP,					// 창고 확장
	PTYPE_BILLING_SELF_REVIVE,				// 제자리 부활
	PTYPE_BILLING_PARTY_REVIVE,				// 파티원 부활
	PTYPE_BILLING_INIT_SKILL,				// 스킬 초기화
	PTYPE_BILLING_REMOTE_KEEP,				// 원격 창고
	PTYPE_BILLING_DEC_DEAD_EXP_PANALTY,		// 사망 시 경험치 패널티 하락
	PTYPE_BILLING_SERVICE_LOCK,				// 빌링 서비스 락
	PTYPE_BILLING_REFUND_ITEM,				// 아이템 환불
};
