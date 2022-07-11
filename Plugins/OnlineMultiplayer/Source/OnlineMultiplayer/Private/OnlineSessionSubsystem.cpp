// Copyright Sam Collier 2022

#include "OnlineSessionSubsystem.h"

#include "OnlineSubsystem.h"

UOnlineSessionSubsystem::UOnlineSessionSubsystem():
	CreateSessionCompleteDelegate(
		FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(
		FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnFindSessionsComplete)),
	JoinSessionCompleteDelegate(
		FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinSessionComplete)),
	DestroySessionCompleteDelegate(
		FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnDestroySessionComplete)),
	StartSessionCompleteDelegate(
		FOnStartSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnStartSessionComplete))
{
	IOnlineSubsystem* oss = IOnlineSubsystem::Get();
	if (oss)
	{
		SessionInterface = oss->GetSessionInterface();
	}
}

// public interface
void UOnlineSessionSubsystem::CreateSession(int32 NumPublicConnections, FString MatchType)
{
}

void UOnlineSessionSubsystem::FindSessions(int32 MaxSearchResults)
{
}

void UOnlineSessionSubsystem::JoinSession(const FOnlineSessionSearchResult& SessionResult)
{
}

void UOnlineSessionSubsystem::DestroySession()
{
}

void UOnlineSessionSubsystem::StartSession()
{
}

// Callbacks
void UOnlineSessionSubsystem::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
}

void UOnlineSessionSubsystem::OnFindSessionsComplete(bool bWasSuccessful)
{
}

void UOnlineSessionSubsystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
}

void UOnlineSessionSubsystem::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
}

void UOnlineSessionSubsystem::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
}
