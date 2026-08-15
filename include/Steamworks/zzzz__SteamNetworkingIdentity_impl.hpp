#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingIdentity.hpp"
#include "Steamworks/zzzz__ESteamNetworkingIdentityType_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingFakeIPType_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIPAddr_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b42d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::IsInvalid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b4470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"IsInvalid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.SetSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIdentity::*)(::Steamworks::CSteamID)>(&::Steamworks::SteamNetworkingIdentity::SetSteamID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetSteamID", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.GetSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::GetSteamID)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b4400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetSteamID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.SetSteamID64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIdentity::*)(uint64_t)>(&::Steamworks::SteamNetworkingIdentity::SetSteamID64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b4710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetSteamID64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.GetSteamID64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::GetSteamID64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b43e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetSteamID64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.SetIPAddr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIdentity::*)(::Steamworks::SteamNetworkingIPAddr)>(&::Steamworks::SteamNetworkingIdentity::SetIPAddr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b4690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetIPAddr", {}, {::i2c::type_of<::Steamworks::SteamNetworkingIPAddr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.GetIPAddr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SteamNetworkingIPAddr (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::GetIPAddr)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetIPAddr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.SetIPv4Addr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIdentity::*)(uint32_t, uint16_t)>(&::Steamworks::SteamNetworkingIdentity::SetIPv4Addr)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b46d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetIPv4Addr", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.GetIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::GetIPv4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetIPv4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.GetFakeIPType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingFakeIPType (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::GetFakeIPType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b4330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetFakeIPType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.IsFakeIP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::IsFakeIP)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"IsFakeIP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.SetLocalHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::SetLocalHost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b46f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetLocalHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.IsLocalHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::IsLocalHost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b4490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"IsLocalHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.SetGenericString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIdentity::*)(::StringW)>(&::Steamworks::SteamNetworkingIdentity::SetGenericString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b45b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetGenericString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.GetGenericString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamNetworkingIdentity::*)()>(&::Steamworks::SteamNetworkingIdentity::GetGenericString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b4380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetGenericString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.SetGenericBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIdentity::*)(::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamNetworkingIdentity::SetGenericBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805b4590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetGenericBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.GetGenericBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Steamworks::SteamNetworkingIdentity::*)(::by_ref<int32_t>)>(&::Steamworks::SteamNetworkingIdentity::GetGenericBytes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b4350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetGenericBytes", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIdentity::*)(::Steamworks::SteamNetworkingIdentity)>(&::Steamworks::SteamNetworkingIdentity::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b42f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SteamNetworkingIdentity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamNetworkingIdentity::*)(::by_ref<::StringW>)>(&::Steamworks::SteamNetworkingIdentity::ToString)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1805b4780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"ToString", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.ParseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIdentity::*)(::StringW)>(&::Steamworks::SteamNetworkingIdentity::ParseString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805b44b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"ParseString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::SteamNetworkingIdentity::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Steamworks::SteamNetworkingIdentity::IsInvalid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"IsInvalid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingIdentity::SetSteamID(::Steamworks::CSteamID  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetSteamID", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, steamID);
}
inline ::Steamworks::CSteamID Steamworks::SteamNetworkingIdentity::GetSteamID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetSteamID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingIdentity::SetSteamID64(uint64_t  steamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetSteamID64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, steamID);
}
inline uint64_t Steamworks::SteamNetworkingIdentity::GetSteamID64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetSteamID64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingIdentity::SetIPAddr(::Steamworks::SteamNetworkingIPAddr  addr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetIPAddr", {}, {::i2c::type_of<::Steamworks::SteamNetworkingIPAddr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, addr);
}
inline ::Steamworks::SteamNetworkingIPAddr Steamworks::SteamNetworkingIdentity::GetIPAddr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetIPAddr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SteamNetworkingIPAddr>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingIdentity::SetIPv4Addr(uint32_t  nIPv4, uint16_t  nPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetIPv4Addr", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nIPv4, nPort);
}
inline uint32_t Steamworks::SteamNetworkingIdentity::GetIPv4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetIPv4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::Steamworks::ESteamNetworkingFakeIPType Steamworks::SteamNetworkingIdentity::GetFakeIPType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetFakeIPType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingFakeIPType>(*this, ___internal_method);
}
inline bool Steamworks::SteamNetworkingIdentity::IsFakeIP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"IsFakeIP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Steamworks::SteamNetworkingIdentity::SetLocalHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetLocalHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Steamworks::SteamNetworkingIdentity::IsLocalHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"IsLocalHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Steamworks::SteamNetworkingIdentity::SetGenericString(::StringW  pszString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetGenericString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pszString);
}
inline ::StringW Steamworks::SteamNetworkingIdentity::GetGenericString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetGenericString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::SteamNetworkingIdentity::SetGenericBytes(::ArrayW<uint8_t>  data, uint32_t  cbLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"SetGenericBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, data, cbLen);
}
inline ::ArrayW<uint8_t> Steamworks::SteamNetworkingIdentity::GetGenericBytes(::by_ref<int32_t>  cbLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"GetGenericBytes", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method, cbLen);
}
inline bool Steamworks::SteamNetworkingIdentity::Equals(::Steamworks::SteamNetworkingIdentity  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SteamNetworkingIdentity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x);
}
inline void Steamworks::SteamNetworkingIdentity::ToString(::by_ref<::StringW>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"ToString", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buf);
}
inline bool Steamworks::SteamNetworkingIdentity::ParseString(::StringW  pszStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"ParseString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pszStr);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>"
constexpr  Steamworks::SteamNetworkingIdentity::operator ::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>"
constexpr ::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>* Steamworks::SteamNetworkingIdentity::i___System__IEquatable_1___Steamworks__SteamNetworkingIdentity_()  {
return static_cast<::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_eType", ty: "::Steamworks::ESteamNetworkingIdentityType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cbSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_reserved", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetworkingIdentity::SteamNetworkingIdentity(::Steamworks::ESteamNetworkingIdentityType  m_eType, int32_t  m_cbSize, ::ArrayW<uint32_t>  m_reserved) noexcept  {
this->m_eType = m_eType;
this->m_cbSize = m_cbSize;
this->m_reserved = m_reserved;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworkingIdentity::SteamNetworkingIdentity()   {
}
