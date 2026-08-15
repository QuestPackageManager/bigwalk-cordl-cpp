#pragma once
// IWYU pragma private; include "Steamworks/SteamGameSearch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameSearch_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EGameSearchErrorCode_t_def.hpp"
#include "Steamworks/zzzz__EPlayerResult_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameSearch.AddGameSearchParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(::StringW, ::StringW)>(&::Steamworks::SteamGameSearch::AddGameSearchParams)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805ab7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"AddGameSearchParams", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.SearchForGameWithLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(::Steamworks::CSteamID, int32_t, int32_t)>(&::Steamworks::SteamGameSearch::SearchForGameWithLobby)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805abb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SearchForGameWithLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.SearchForGameSolo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(int32_t, int32_t)>(&::Steamworks::SteamGameSearch::SearchForGameSolo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805abb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SearchForGameSolo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.AcceptGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)()>(&::Steamworks::SteamGameSearch::AcceptGame)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ab790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"AcceptGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.DeclineGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)()>(&::Steamworks::SteamGameSearch::DeclineGame)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ab960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"DeclineGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.RetrieveConnectionDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(::Steamworks::CSteamID, ::by_ref<::StringW>, int32_t)>(&::Steamworks::SteamGameSearch::RetrieveConnectionDetails)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805abaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"RetrieveConnectionDetails", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.EndGameSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)()>(&::Steamworks::SteamGameSearch::EndGameSearch)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ab990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"EndGameSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.SetGameHostParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(::StringW, ::StringW)>(&::Steamworks::SteamGameSearch::SetGameHostParams)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805abce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SetGameHostParams", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.SetConnectionDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(::StringW, int32_t)>(&::Steamworks::SteamGameSearch::SetConnectionDetails)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805abbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SetConnectionDetails", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.RequestPlayersForGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(int32_t, int32_t, int32_t)>(&::Steamworks::SteamGameSearch::RequestPlayersForGame)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805aba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"RequestPlayersForGame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.HostConfirmGameStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(uint64_t)>(&::Steamworks::SteamGameSearch::HostConfirmGameStart)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805aba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"HostConfirmGameStart", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.CancelRequestPlayersForGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)()>(&::Steamworks::SteamGameSearch::CancelRequestPlayersForGame)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ab930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"CancelRequestPlayersForGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.SubmitPlayerResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(uint64_t, ::Steamworks::CSteamID, ::Steamworks::EPlayerResult_t)>(&::Steamworks::SteamGameSearch::SubmitPlayerResult)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805abe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SubmitPlayerResult", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::EPlayerResult_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameSearch.EndGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EGameSearchErrorCode_t (*)(uint64_t)>(&::Steamworks::SteamGameSearch::EndGame)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ab9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"EndGame", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::AddGameSearchParams(::StringW  pchKeyToFind, ::StringW  pchValuesToFind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"AddGameSearchParams", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, pchKeyToFind, pchValuesToFind);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::SearchForGameWithLobby(::Steamworks::CSteamID  steamIDLobby, int32_t  nPlayerMin, int32_t  nPlayerMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SearchForGameWithLobby", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, steamIDLobby, nPlayerMin, nPlayerMax);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::SearchForGameSolo(int32_t  nPlayerMin, int32_t  nPlayerMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SearchForGameSolo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, nPlayerMin, nPlayerMax);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::AcceptGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"AcceptGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::DeclineGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"DeclineGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::RetrieveConnectionDetails(::Steamworks::CSteamID  steamIDHost, ::by_ref<::StringW>  pchConnectionDetails, int32_t  cubConnectionDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"RetrieveConnectionDetails", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, steamIDHost, pchConnectionDetails, cubConnectionDetails);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::EndGameSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"EndGameSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::SetGameHostParams(::StringW  pchKey, ::StringW  pchValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SetGameHostParams", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, pchKey, pchValue);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::SetConnectionDetails(::StringW  pchConnectionDetails, int32_t  cubConnectionDetails)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SetConnectionDetails", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, pchConnectionDetails, cubConnectionDetails);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::RequestPlayersForGame(int32_t  nPlayerMin, int32_t  nPlayerMax, int32_t  nMaxTeamSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"RequestPlayersForGame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, nPlayerMin, nPlayerMax, nMaxTeamSize);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::HostConfirmGameStart(uint64_t  ullUniqueGameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"HostConfirmGameStart", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, ullUniqueGameID);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::CancelRequestPlayersForGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"CancelRequestPlayersForGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::SubmitPlayerResult(uint64_t  ullUniqueGameID, ::Steamworks::CSteamID  steamIDPlayer, ::Steamworks::EPlayerResult_t  EPlayerResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"SubmitPlayerResult", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::EPlayerResult_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, ullUniqueGameID, steamIDPlayer, EPlayerResult);
}
inline ::Steamworks::EGameSearchErrorCode_t Steamworks::SteamGameSearch::EndGame(uint64_t  ullUniqueGameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameSearch*>(),
                        {"EndGame", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EGameSearchErrorCode_t>(nullptr, ___internal_method, ullUniqueGameID);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameSearch::SteamGameSearch()   {
}
