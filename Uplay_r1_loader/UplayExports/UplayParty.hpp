#pragma once
#include <plog/Log.h>

namespace UplayR1Loader::UplayExports
{
	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_Init()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 1;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_InviteToParty()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_RespondToGameInvite()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_ShowGameInviteOverlayUI()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_GetInGameMemberList()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_GetFullMemberList()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_SetUserData(int data)
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 1;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_IsInParty()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_IsPartyLeader()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_PromoteToLeader()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_InvitePartyToGame()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_EnablePartyMemberMenuItem()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_DisablePartyMemberMenuItem()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}

	UPLAY_API inline int UPLAY_FUNC UPLAY_PARTY_SetGuest()
	{
		LOGD_IF(UPLAY_LOG) << "__CALL__";
		return 0;
	}
}