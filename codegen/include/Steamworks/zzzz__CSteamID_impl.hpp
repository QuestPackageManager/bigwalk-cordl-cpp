#pragma once
// IWYU pragma private; include "Steamworks/CSteamID.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__AccountID_t_def.hpp"
#include "Steamworks/zzzz__EAccountType_def.hpp"
#include "Steamworks/zzzz__EUniverse_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::CSteamID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::AccountID_t, ::Steamworks::EUniverse, ::Steamworks::EAccountType)>(&::Steamworks::CSteamID::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805a9260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::AccountID_t, uint32_t, ::Steamworks::EUniverse, ::Steamworks::EAccountType)>(&::Steamworks::CSteamID::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805a91e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(uint64_t)>(&::Steamworks::CSteamID::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::AccountID_t, ::Steamworks::EUniverse, ::Steamworks::EAccountType)>(&::Steamworks::CSteamID::Set)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805a8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"Set", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.InstancedSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::AccountID_t, uint32_t, ::Steamworks::EUniverse, ::Steamworks::EAccountType)>(&::Steamworks::CSteamID::InstancedSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805a8d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"InstancedSet", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18035d7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.CreateBlankAnonLogon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::EUniverse)>(&::Steamworks::CSteamID::CreateBlankAnonLogon)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805a8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"CreateBlankAnonLogon", {}, {::i2c::type_of<::Steamworks::EUniverse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.CreateBlankAnonUserLogon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::EUniverse)>(&::Steamworks::CSteamID::CreateBlankAnonUserLogon)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805a8be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"CreateBlankAnonUserLogon", {}, {::i2c::type_of<::Steamworks::EUniverse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BBlankAnonAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BBlankAnonAccount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805a8900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BBlankAnonAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BGameServerAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BGameServerAccount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805a8a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BGameServerAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BPersistentGameServerAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BPersistentGameServerAccount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805a8b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BPersistentGameServerAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BAnonGameServerAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BAnonGameServerAccount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805a8880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BAnonGameServerAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BContentServerAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BContentServerAccount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805a8a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BContentServerAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BClanAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BClanAccount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805a89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BClanAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BChatAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BChatAccount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805a8980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BChatAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.IsLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::IsLobby)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805a8de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"IsLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BIndividualAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BIndividualAccount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805a8ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BIndividualAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BAnonAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BAnonAccount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805a8820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BAnonAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BAnonUserAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BAnonUserAccount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805a88c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BAnonUserAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.BConsoleUserAccount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::BConsoleUserAccount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805a8a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BConsoleUserAccount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.SetAccountID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::AccountID_t)>(&::Steamworks::CSteamID::SetAccountID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetAccountID", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.SetAccountInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(uint32_t)>(&::Steamworks::CSteamID::SetAccountInstance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805a8f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetAccountInstance", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.SetEAccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::EAccountType)>(&::Steamworks::CSteamID::SetEAccountType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805a8f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetEAccountType", {}, {::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.SetEUniverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::EUniverse)>(&::Steamworks::CSteamID::SetEUniverse)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805a8f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetEUniverse", {}, {::i2c::type_of<::Steamworks::EUniverse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.GetAccountID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::AccountID_t (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::GetAccountID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"GetAccountID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.GetUnAccountInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::GetUnAccountInstance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"GetUnAccountInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.GetEAccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EAccountType (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::GetEAccountType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"GetEAccountType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.GetEUniverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EUniverse (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::GetEUniverse)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"GetEUniverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::IsValid)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805a8e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CSteamID>(),
                    {::i2c::class_of<::Steamworks::CSteamID>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)(::System::Object*)>(&::Steamworks::CSteamID::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805a8c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CSteamID>(),
                    {::i2c::class_of<::Steamworks::CSteamID>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CSteamID>(),
                    {::i2c::class_of<::Steamworks::CSteamID>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::CSteamID::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::CSteamID::op_Inequality)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805a92e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.op_Explicit___Steamworks__CSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(uint64_t)>(&::Steamworks::CSteamID::op_Explicit___Steamworks__CSteamID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.op_Explicit_uint64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Steamworks::CSteamID)>(&::Steamworks::CSteamID::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)(::Steamworks::CSteamID)>(&::Steamworks::CSteamID::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::CSteamID::*)(::Steamworks::CSteamID)>(&::Steamworks::CSteamID::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a8470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::CSteamID::setStaticF_Nil(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "Nil", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_Nil()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "Nil", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::setStaticF_OutofDateGS(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "OutofDateGS", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_OutofDateGS()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "OutofDateGS", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::setStaticF_LanModeGS(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "LanModeGS", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_LanModeGS()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "LanModeGS", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::setStaticF_NotInitYetGS(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "NotInitYetGS", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_NotInitYetGS()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "NotInitYetGS", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::setStaticF_NonSteamGS(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "NonSteamGS", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_NonSteamGS()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "NonSteamGS", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::_ctor(::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unAccountID, eUniverse, eAccountType);
}
inline void Steamworks::CSteamID::_ctor(::Steamworks::AccountID_t  unAccountID, uint32_t  unAccountInstance, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unAccountID, unAccountInstance, eUniverse, eAccountType);
}
inline void Steamworks::CSteamID::_ctor(uint64_t  ulSteamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ulSteamID);
}
inline void Steamworks::CSteamID::Set(::Steamworks::AccountID_t  unAccountID, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"Set", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unAccountID, eUniverse, eAccountType);
}
inline void Steamworks::CSteamID::InstancedSet(::Steamworks::AccountID_t  unAccountID, uint32_t  unInstance, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"InstancedSet", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unAccountID, unInstance, eUniverse, eAccountType);
}
inline void Steamworks::CSteamID::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Steamworks::CSteamID::CreateBlankAnonLogon(::Steamworks::EUniverse  eUniverse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"CreateBlankAnonLogon", {}, {::i2c::type_of<::Steamworks::EUniverse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eUniverse);
}
inline void Steamworks::CSteamID::CreateBlankAnonUserLogon(::Steamworks::EUniverse  eUniverse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"CreateBlankAnonUserLogon", {}, {::i2c::type_of<::Steamworks::EUniverse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eUniverse);
}
inline bool Steamworks::CSteamID::BBlankAnonAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BBlankAnonAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BGameServerAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BGameServerAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BPersistentGameServerAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BPersistentGameServerAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BAnonGameServerAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BAnonGameServerAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BContentServerAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BContentServerAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BClanAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BClanAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BChatAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BChatAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::IsLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"IsLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BIndividualAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BIndividualAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BAnonAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BAnonAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BAnonUserAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BAnonUserAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::BConsoleUserAccount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"BConsoleUserAccount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Steamworks::CSteamID::SetAccountID(::Steamworks::AccountID_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetAccountID", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Steamworks::CSteamID::SetAccountInstance(uint32_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetAccountInstance", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Steamworks::CSteamID::SetEAccountType(::Steamworks::EAccountType  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetEAccountType", {}, {::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Steamworks::CSteamID::SetEUniverse(::Steamworks::EUniverse  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetEUniverse", {}, {::i2c::type_of<::Steamworks::EUniverse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::Steamworks::AccountID_t Steamworks::CSteamID::GetAccountID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"GetAccountID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::AccountID_t>(*this, ___internal_method);
}
inline uint32_t Steamworks::CSteamID::GetUnAccountInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"GetUnAccountInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::Steamworks::EAccountType Steamworks::CSteamID::GetEAccountType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"GetEAccountType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EAccountType>(*this, ___internal_method);
}
inline ::Steamworks::EUniverse Steamworks::CSteamID::GetEUniverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"GetEUniverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EUniverse>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW Steamworks::CSteamID::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CSteamID>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CSteamID>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::CSteamID::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CSteamID>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::op_Equality(::Steamworks::CSteamID  x, ::Steamworks::CSteamID  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Steamworks::CSteamID::op_Inequality(::Steamworks::CSteamID  x, ::Steamworks::CSteamID  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::op_Explicit___Steamworks__CSteamID(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, value);
}
inline uint64_t Steamworks::CSteamID::op_Explicit_uint64_t(::Steamworks::CSteamID  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, that);
}
inline bool Steamworks::CSteamID::Equals(::Steamworks::CSteamID  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::CSteamID::CompareTo(::Steamworks::CSteamID  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::CSteamID>"
constexpr  Steamworks::CSteamID::operator ::System::IEquatable_1<::Steamworks::CSteamID>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::CSteamID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::CSteamID>"
constexpr ::System::IEquatable_1<::Steamworks::CSteamID>* Steamworks::CSteamID::i___System__IEquatable_1___Steamworks__CSteamID_()  {
return static_cast<::System::IEquatable_1<::Steamworks::CSteamID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::CSteamID>"
constexpr  Steamworks::CSteamID::operator ::System::IComparable_1<::Steamworks::CSteamID>*()  {
return static_cast<::System::IComparable_1<::Steamworks::CSteamID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::CSteamID>"
constexpr ::System::IComparable_1<::Steamworks::CSteamID>* Steamworks::CSteamID::i___System__IComparable_1___Steamworks__CSteamID_()  {
return static_cast<::System::IComparable_1<::Steamworks::CSteamID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SteamID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::CSteamID::CSteamID(uint64_t  m_SteamID) noexcept  {
this->m_SteamID = m_SteamID;
}
// Ctor Parameters []
constexpr ::Steamworks::CSteamID::CSteamID()   {
}
