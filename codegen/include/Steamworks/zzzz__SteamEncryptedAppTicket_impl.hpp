#pragma once
// IWYU pragma private; include "Steamworks/SteamEncryptedAppTicket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamEncryptedAppTicket_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.BDecryptTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t, ::ArrayW<uint8_t>, ::by_ref<uint32_t>, ::ArrayW<uint8_t>, int32_t)>(&::Steamworks::SteamEncryptedAppTicket::BDecryptTicket)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18057d6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BDecryptTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.BIsTicketForApp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t, ::Steamworks::AppId_t)>(&::Steamworks::SteamEncryptedAppTicket::BIsTicketForApp)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18057d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BIsTicketForApp", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.GetTicketIssueTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamEncryptedAppTicket::GetTicketIssueTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"GetTicketIssueTime", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.GetTicketSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, uint32_t, ::by_ref<::Steamworks::CSteamID>)>(&::Steamworks::SteamEncryptedAppTicket::GetTicketSteamID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18057dcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"GetTicketSteamID", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.GetTicketAppID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamEncryptedAppTicket::GetTicketAppID)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057db90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"GetTicketAppID", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.BUserOwnsAppInTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t, ::Steamworks::AppId_t)>(&::Steamworks::SteamEncryptedAppTicket::BUserOwnsAppInTicket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18057daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BUserOwnsAppInTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.BUserIsVacBanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamEncryptedAppTicket::BUserIsVacBanned)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18057da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BUserIsVacBanned", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.GetUserVariableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamEncryptedAppTicket::GetUserVariableData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180586f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"GetUserVariableData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamEncryptedAppTicket.BIsTicketSigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamEncryptedAppTicket::BIsTicketSigned)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18057d990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BIsTicketSigned", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamEncryptedAppTicket::BDecryptTicket(::ArrayW<uint8_t>  rgubTicketEncrypted, uint32_t  cubTicketEncrypted, ::ArrayW<uint8_t>  rgubTicketDecrypted, ::by_ref<uint32_t>  pcubTicketDecrypted, ::ArrayW<uint8_t>  rgubKey, int32_t  cubKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BDecryptTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rgubTicketEncrypted, cubTicketEncrypted, rgubTicketDecrypted, pcubTicketDecrypted, rgubKey, cubKey);
}
inline bool Steamworks::SteamEncryptedAppTicket::BIsTicketForApp(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BIsTicketForApp", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rgubTicketDecrypted, cubTicketDecrypted, nAppID);
}
inline uint32_t Steamworks::SteamEncryptedAppTicket::GetTicketIssueTime(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"GetTicketIssueTime", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, rgubTicketDecrypted, cubTicketDecrypted);
}
inline void Steamworks::SteamEncryptedAppTicket::GetTicketSteamID(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::by_ref<::Steamworks::CSteamID>  psteamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"GetTicketSteamID", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgubTicketDecrypted, cubTicketDecrypted, psteamID);
}
inline uint32_t Steamworks::SteamEncryptedAppTicket::GetTicketAppID(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"GetTicketAppID", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, rgubTicketDecrypted, cubTicketDecrypted);
}
inline bool Steamworks::SteamEncryptedAppTicket::BUserOwnsAppInTicket(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::Steamworks::AppId_t  nAppID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BUserOwnsAppInTicket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::AppId_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rgubTicketDecrypted, cubTicketDecrypted, nAppID);
}
inline bool Steamworks::SteamEncryptedAppTicket::BUserIsVacBanned(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BUserIsVacBanned", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rgubTicketDecrypted, cubTicketDecrypted);
}
inline ::ArrayW<uint8_t> Steamworks::SteamEncryptedAppTicket::GetUserVariableData(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::by_ref<uint32_t>  pcubUserData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"GetUserVariableData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, rgubTicketDecrypted, cubTicketDecrypted, pcubUserData);
}
inline bool Steamworks::SteamEncryptedAppTicket::BIsTicketSigned(::ArrayW<uint8_t>  rgubTicketDecrypted, uint32_t  cubTicketDecrypted, ::ArrayW<uint8_t>  pubRSAKey, uint32_t  cubRSAKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamEncryptedAppTicket*>(),
                        {"BIsTicketSigned", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rgubTicketDecrypted, cubTicketDecrypted, pubRSAKey, cubRSAKey);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamEncryptedAppTicket::SteamEncryptedAppTicket()   {
}
