#pragma once
// IWYU pragma private; include "Steamworks/gameserveritem_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__servernetadr_t_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__gameserveritem_t_def.hpp"
//  Writing Method size for method: ::Steamworks::gameserveritem_t.GetGameDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::gameserveritem_t::*)()>(&::Steamworks::gameserveritem_t::GetGameDir)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c0d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetGameDir", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.SetGameDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::gameserveritem_t::*)(::StringW)>(&::Steamworks::gameserveritem_t::SetGameDir)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c1030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetGameDir", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.GetMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::gameserveritem_t::*)()>(&::Steamworks::gameserveritem_t::GetMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c0e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.SetMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::gameserveritem_t::*)(::StringW)>(&::Steamworks::gameserveritem_t::SetMap)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c1130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.GetGameDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::gameserveritem_t::*)()>(&::Steamworks::gameserveritem_t::GetGameDescription)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetGameDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.SetGameDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::gameserveritem_t::*)(::StringW)>(&::Steamworks::gameserveritem_t::SetGameDescription)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c0fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetGameDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.GetServerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::gameserveritem_t::*)()>(&::Steamworks::gameserveritem_t::GetServerName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c0f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetServerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.SetServerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::gameserveritem_t::*)(::StringW)>(&::Steamworks::gameserveritem_t::SetServerName)> {
  constexpr static std::size_t size = 0x1910;
  constexpr static std::size_t addrs = 0x1805c11b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetServerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.GetGameTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::gameserveritem_t::*)()>(&::Steamworks::gameserveritem_t::GetGameTags)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c0e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetGameTags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t.SetGameTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::gameserveritem_t::*)(::StringW)>(&::Steamworks::gameserveritem_t::SetGameTags)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c10b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetGameTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::gameserveritem_t._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::gameserveritem_t::*)()>(&::Steamworks::gameserveritem_t::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Steamworks::servernetadr_t& Steamworks::gameserveritem_t::__cordl_internal_get_m_NetAdr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetAdr;
}
constexpr ::Steamworks::servernetadr_t const& Steamworks::gameserveritem_t::__cordl_internal_get_m_NetAdr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetAdr;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_NetAdr(::Steamworks::servernetadr_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetAdr = value;
}
constexpr int32_t& Steamworks::gameserveritem_t::__cordl_internal_get_m_nPing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nPing;
}
constexpr int32_t const& Steamworks::gameserveritem_t::__cordl_internal_get_m_nPing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nPing;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_nPing(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_nPing = value;
}
constexpr bool& Steamworks::gameserveritem_t::__cordl_internal_get_m_bHadSuccessfulResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bHadSuccessfulResponse;
}
constexpr bool const& Steamworks::gameserveritem_t::__cordl_internal_get_m_bHadSuccessfulResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bHadSuccessfulResponse;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_bHadSuccessfulResponse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bHadSuccessfulResponse = value;
}
constexpr bool& Steamworks::gameserveritem_t::__cordl_internal_get_m_bDoNotRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bDoNotRefresh;
}
constexpr bool const& Steamworks::gameserveritem_t::__cordl_internal_get_m_bDoNotRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bDoNotRefresh;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_bDoNotRefresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bDoNotRefresh = value;
}
constexpr ::ArrayW<uint8_t>& Steamworks::gameserveritem_t::__cordl_internal_get_m_szGameDir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szGameDir;
}
constexpr ::ArrayW<uint8_t> const& Steamworks::gameserveritem_t::__cordl_internal_get_m_szGameDir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szGameDir;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_szGameDir(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_szGameDir = value;
}
constexpr ::ArrayW<uint8_t>& Steamworks::gameserveritem_t::__cordl_internal_get_m_szMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szMap;
}
constexpr ::ArrayW<uint8_t> const& Steamworks::gameserveritem_t::__cordl_internal_get_m_szMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szMap;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_szMap(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_szMap = value;
}
constexpr ::ArrayW<uint8_t>& Steamworks::gameserveritem_t::__cordl_internal_get_m_szGameDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szGameDescription;
}
constexpr ::ArrayW<uint8_t> const& Steamworks::gameserveritem_t::__cordl_internal_get_m_szGameDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szGameDescription;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_szGameDescription(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_szGameDescription = value;
}
constexpr uint32_t& Steamworks::gameserveritem_t::__cordl_internal_get_m_nAppID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nAppID;
}
constexpr uint32_t const& Steamworks::gameserveritem_t::__cordl_internal_get_m_nAppID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nAppID;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_nAppID(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_nAppID = value;
}
constexpr int32_t& Steamworks::gameserveritem_t::__cordl_internal_get_m_nPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nPlayers;
}
constexpr int32_t const& Steamworks::gameserveritem_t::__cordl_internal_get_m_nPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nPlayers;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_nPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_nPlayers = value;
}
constexpr int32_t& Steamworks::gameserveritem_t::__cordl_internal_get_m_nMaxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nMaxPlayers;
}
constexpr int32_t const& Steamworks::gameserveritem_t::__cordl_internal_get_m_nMaxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nMaxPlayers;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_nMaxPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_nMaxPlayers = value;
}
constexpr int32_t& Steamworks::gameserveritem_t::__cordl_internal_get_m_nBotPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nBotPlayers;
}
constexpr int32_t const& Steamworks::gameserveritem_t::__cordl_internal_get_m_nBotPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nBotPlayers;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_nBotPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_nBotPlayers = value;
}
constexpr bool& Steamworks::gameserveritem_t::__cordl_internal_get_m_bPassword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bPassword;
}
constexpr bool const& Steamworks::gameserveritem_t::__cordl_internal_get_m_bPassword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bPassword;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_bPassword(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bPassword = value;
}
constexpr bool& Steamworks::gameserveritem_t::__cordl_internal_get_m_bSecure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bSecure;
}
constexpr bool const& Steamworks::gameserveritem_t::__cordl_internal_get_m_bSecure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bSecure;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_bSecure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bSecure = value;
}
constexpr uint32_t& Steamworks::gameserveritem_t::__cordl_internal_get_m_ulTimeLastPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ulTimeLastPlayed;
}
constexpr uint32_t const& Steamworks::gameserveritem_t::__cordl_internal_get_m_ulTimeLastPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ulTimeLastPlayed;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_ulTimeLastPlayed(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ulTimeLastPlayed = value;
}
constexpr int32_t& Steamworks::gameserveritem_t::__cordl_internal_get_m_nServerVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nServerVersion;
}
constexpr int32_t const& Steamworks::gameserveritem_t::__cordl_internal_get_m_nServerVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_nServerVersion;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_nServerVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_nServerVersion = value;
}
constexpr ::ArrayW<uint8_t>& Steamworks::gameserveritem_t::__cordl_internal_get_m_szServerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szServerName;
}
constexpr ::ArrayW<uint8_t> const& Steamworks::gameserveritem_t::__cordl_internal_get_m_szServerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szServerName;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_szServerName(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_szServerName = value;
}
constexpr ::ArrayW<uint8_t>& Steamworks::gameserveritem_t::__cordl_internal_get_m_szGameTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szGameTags;
}
constexpr ::ArrayW<uint8_t> const& Steamworks::gameserveritem_t::__cordl_internal_get_m_szGameTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_szGameTags;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_szGameTags(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_szGameTags = value;
}
constexpr ::Steamworks::CSteamID& Steamworks::gameserveritem_t::__cordl_internal_get_m_steamID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_steamID;
}
constexpr ::Steamworks::CSteamID const& Steamworks::gameserveritem_t::__cordl_internal_get_m_steamID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_steamID;
}
constexpr void Steamworks::gameserveritem_t::__cordl_internal_set_m_steamID(::Steamworks::CSteamID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_steamID = value;
}
inline ::StringW Steamworks::gameserveritem_t::GetGameDir()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetGameDir", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Steamworks::gameserveritem_t::SetGameDir(::StringW  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetGameDir", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dir);
}
inline ::StringW Steamworks::gameserveritem_t::GetMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Steamworks::gameserveritem_t::SetMap(::StringW  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetMap", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline ::StringW Steamworks::gameserveritem_t::GetGameDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetGameDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Steamworks::gameserveritem_t::SetGameDescription(::StringW  desc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetGameDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc);
}
inline ::StringW Steamworks::gameserveritem_t::GetServerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetServerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Steamworks::gameserveritem_t::SetServerName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetServerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW Steamworks::gameserveritem_t::GetGameTags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"GetGameTags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Steamworks::gameserveritem_t::SetGameTags(::StringW  tags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {"SetGameTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tags);
}
inline void Steamworks::gameserveritem_t::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::gameserveritem_t*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Steamworks::gameserveritem_t* Steamworks::gameserveritem_t::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::gameserveritem_t*>());
}
// Ctor Parameters []
constexpr ::Steamworks::gameserveritem_t::gameserveritem_t()   {
}
